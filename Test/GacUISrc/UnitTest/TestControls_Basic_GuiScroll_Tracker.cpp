#include "../../../Source//UnitTestUtilities/GuiUnitTestUtilities.h"
#ifdef VCZH_64
#include "../Generated_DarkSkin/Source_x64/DarkSkin.h"
#else
#include "../Generated_DarkSkin/Source_x86/DarkSkin.h"
#endif

using namespace vl;
using namespace vl::stream;
using namespace vl::reflection::description;
using namespace vl::presentation;
using namespace vl::presentation::elements;
using namespace vl::presentation::compositions;
using namespace vl::presentation::controls;
using namespace vl::presentation::unittest;

TEST_FILE
{
	const auto resourceHTracker= LR"GacUISrc(
<Resource>
  <Instance name="MainWindowResource">
    <Instance ref.Class="gacuisrc_unittest::MainWindow">
      <Window ref.Name="self" Text="GuiTab" ClientSize="x:320 y:240">
        <HTracker ref.Name="progress" TotalSize="10" SmallMove="1" BigMove="3">
          <att.BoundsComposition-set PreferredMinSize="x:150 y:20" AlignmentToParent="left:5 top:5 right:-1 bottom:-1"/>
        </HTracker>
      </Window>
    </Instance>
  </Instance>
</Resource>
)GacUISrc";

	const auto resourceVTracker= LR"GacUISrc(
<Resource>
  <Instance name="MainWindowResource">
    <Instance ref.Class="gacuisrc_unittest::MainWindow">
      <Window ref.Name="self" Text="GuiTab" ClientSize="x:320 y:240">
        <VTracker ref.Name="progress" TotalSize="10" SmallMove="1" BigMove="3">
          <att.BoundsComposition-set PreferredMinSize="x:20 y:150" AlignmentToParent="left:5 top:5 right:-1 bottom:-1"/>
        </VTracker>
      </Window>
    </Instance>
  </Instance>
</Resource>
)GacUISrc";

	TEST_CATEGORY(L"HTracker")
	{
		TEST_CASE(L"Properties")
		{
			GacUIUnitTest_SetGuiMainProxy([](UnitTestRemoteProtocol* protocol, IUnitTestContext*)
			{
				protocol->OnNextIdleFrame(L"Ready", [=]()
				{
					auto window = GetApplication()->GetMainWindow();
					window->Hide();
				});
			});
			GacUIUnitTest_StartFast_WithResourceAsText<darkskin::Theme>(
				WString::Unmanaged(L"Controls/Basic/GuiScroll/HTracker/Properties"),
				WString::Unmanaged(L"gacuisrc_unittest::MainWindow"),
				resourceHTracker
				);
		});
	});

	TEST_CATEGORY(L"VTracker")
	{
		TEST_CASE(L"Properties")
		{
			GacUIUnitTest_SetGuiMainProxy([](UnitTestRemoteProtocol* protocol, IUnitTestContext*)
			{
				protocol->OnNextIdleFrame(L"Ready", [=]()
				{
					auto window = GetApplication()->GetMainWindow();
					window->Hide();
				});
			});
			GacUIUnitTest_StartFast_WithResourceAsText<darkskin::Theme>(
				WString::Unmanaged(L"Controls/Basic/GuiScroll/VTracker/Properties"),
				WString::Unmanaged(L"gacuisrc_unittest::MainWindow"),
				resourceVTracker
				);
		});
	});
}