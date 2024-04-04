#include "GuiUnitTestUtilities.h"
#include "../PlatformProviders/Remote/GuiRemoteProtocol.h"

namespace vl::presentation::controls
{
	extern bool GACUI_UNITTEST_ONLY_SKIP_THREAD_LOCAL_STORAGE_DISPOSE_STORAGES;
	extern bool GACUI_UNITTEST_ONLY_SKIP_TYPE_AND_PLUGIN_LOAD_UNLOAD;
}

namespace vl::presentation::unittest
{
	const UnitTestFrameworkConfig*			globalUnitTestFrameworkConfig = nullptr;

	const UnitTestFrameworkConfig& GetUnitTestFrameworkConfig()
	{
		CHECK_ERROR(globalUnitTestFrameworkConfig, L"vl::presentation::unittest::GetUnitTestFrameworkConfig()#GacUIUnitTest_Initialize has not been called.");
		return *globalUnitTestFrameworkConfig;
	}
}

using namespace vl;
using namespace vl::collections;
using namespace vl::filesystem;
using namespace vl::reflection::description;
using namespace vl::glr::json;
using namespace vl::presentation;
using namespace vl::presentation::remoteprotocol;
using namespace vl::presentation::controls;
using namespace vl::presentation::unittest;

class UnitTestContextImpl : public Object, public virtual IUnitTestContext
{
	UnitTestRemoteProtocol*		protocol = nullptr;

public:
	UnitTestContextImpl(UnitTestRemoteProtocol* _protocol)
		: protocol(_protocol)
	{
	}

	UnitTestRemoteProtocol* GetProtocol()
	{
		return protocol;
	}
};

UnitTestMainFunc guiMainProxy;
UnitTestContextImpl* guiMainUnitTestContext = nullptr;

void GacUIUnitTest_Initialize(const UnitTestFrameworkConfig* config)
{
	CHECK_ERROR(config, L"GacUIUnitTest_Initialize()#Argument config should not be null.");
	globalUnitTestFrameworkConfig = config;

	GACUI_UNITTEST_ONLY_SKIP_THREAD_LOCAL_STORAGE_DISPOSE_STORAGES = true;
	GACUI_UNITTEST_ONLY_SKIP_TYPE_AND_PLUGIN_LOAD_UNLOAD = true;

	GetGlobalTypeManager()->Load();
	GetPluginManager()->Load(true, false);
}

void GacUIUnitTest_Finalize()
{
	ResetGlobalTypeManager();
	GetPluginManager()->Unload(true, false);
	DestroyPluginManager();
	ThreadLocalStorage::DisposeStorages();

	GACUI_UNITTEST_ONLY_SKIP_THREAD_LOCAL_STORAGE_DISPOSE_STORAGES = false;
	GACUI_UNITTEST_ONLY_SKIP_TYPE_AND_PLUGIN_LOAD_UNLOAD = false;
	globalUnitTestFrameworkConfig = nullptr;
}

void GacUIUnitTest_SetGuiMainProxy(const UnitTestMainFunc& proxy)
{
	guiMainProxy = proxy;
}

void GacUIUnitTest_Start(const WString& appName, Nullable<UnitTestScreenConfig> config)
{
#define ERROR_MESSAGE_PREFIX L"GacUIUnitTest_Start(const WString&, Nullable<UnitTestScreenConfig>)#"
	UnitTestScreenConfig globalConfig;
	if (config)
	{
		globalConfig = config.Value();
	}
	else
	{
		globalConfig.FastInitialize(1024, 768);
	}

	UnitTestRemoteProtocol unitTestProtocol(appName, globalConfig);
	repeatfiltering::GuiRemoteProtocolFilterVerifier verifierProtocol(&unitTestProtocol);
	repeatfiltering::GuiRemoteProtocolFilter filteredProtocol(&verifierProtocol);

	UnitTestContextImpl unitTestContext(&unitTestProtocol);
	guiMainUnitTestContext = &unitTestContext;
	SetupRemoteNativeController(&filteredProtocol);
	GacUIUnitTest_SetGuiMainProxy({});

	{
		Folder snapshotFolder = GetUnitTestFrameworkConfig().snapshotFolder;
		CHECK_ERROR(snapshotFolder.Exists(), ERROR_MESSAGE_PREFIX L"UnitTestFrameworkConfig::snapshotFolder does not point to an existing folder.");

		JsonFormatting formatting;
		formatting.spaceAfterColon = true;
		formatting.spaceAfterComma = true;
		formatting.crlf = true;
		formatting.compact = true;
		auto textLog = JsonToString(unitTestProtocol.GetLogAsJson(), formatting);

		File snapshotFile = snapshotFolder.GetFilePath() / (appName + L".json");
		bool succeeded = snapshotFile.WriteAllText(textLog, false, stream::BomEncoder::Utf8);
		CHECK_ERROR(succeeded, ERROR_MESSAGE_PREFIX L"Failed to write the snapshot file.");
	}
#undef ERROR_MESSAGE_PREFIX
}

void GuiMain()
{
	if (guiMainUnitTestContext)
	{
		guiMainProxy(guiMainUnitTestContext->GetProtocol(), guiMainUnitTestContext);
	}
	else
	{
		guiMainProxy(nullptr, nullptr);
	}
	guiMainUnitTestContext = nullptr;
}