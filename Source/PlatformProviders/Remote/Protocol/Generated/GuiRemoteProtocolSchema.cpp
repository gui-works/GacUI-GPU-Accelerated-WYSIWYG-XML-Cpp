/***********************************************************************
This file is generated by : Vczh GacUI Remote Protocol Generator
Licensed under https ://github.com/vczh-libraries/License
***********************************************************************/

#include "GuiRemoteProtocolSchema.h"

namespace vl::presentation::remoteprotocol
{
	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::INativeWindow::WindowSizeState>(const ::vl::presentation::INativeWindow::WindowSizeState& value)
	{
	#define ERROR_MESSAGE_PREFIX L"vl::presentation::remoteprotocol::ConvertCustomTypeToJson<::vl::presentation::INativeWindow::WindowSizeState>(const ::vl::presentation::INativeWindow::WindowSizeState&)#"
		auto node = Ptr(new glr::json::JsonString);
		switch (value)
		{
		case ::vl::presentation::INativeWindow::WindowSizeState::Minimized: node->content.value = L"Minimized"; break;
		case ::vl::presentation::INativeWindow::WindowSizeState::Restored: node->content.value = L"Restored"; break;
		case ::vl::presentation::INativeWindow::WindowSizeState::Maximized: node->content.value = L"Maximized"; break;
		default: CHECK_FAIL(ERROR_MESSAGE_PREFIX L"Unsupported enum value.");
		}
		return node;
	#undef ERROR_MESSAGE_PREFIX
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativeCoordinate>(const ::vl::presentation::NativeCoordinate& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativePoint>(const ::vl::presentation::NativePoint& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativeSize>(const ::vl::presentation::NativeSize& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativeRect>(const ::vl::presentation::NativeRect& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::NativeMargin>(const ::vl::presentation::NativeMargin& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<::vl::presentation::FontProperties>(const ::vl::presentation::FontProperties& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<vl::presentation::remoteprotocol::FontConfig>(const vl::presentation::remoteprotocol::FontConfig& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<vl::presentation::remoteprotocol::ScreenConfig>(const vl::presentation::remoteprotocol::ScreenConfig& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<vl::presentation::remoteprotocol::WindowSizingConfig>(const vl::presentation::remoteprotocol::WindowSizingConfig& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> vl::Ptr<vl::glr::json::JsonNode> ConvertCustomTypeToJson<vl::presentation::remoteprotocol::WindowShowing>(const vl::presentation::remoteprotocol::WindowShowing& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> void ConvertJsonToCustomType<::vl::presentation::INativeWindow::WindowSizeState>(vl::Ptr<vl::glr::json::JsonNode> node, ::vl::presentation::INativeWindow::WindowSizeState& value)
	{
	#define ERROR_MESSAGE_PREFIX L"vl::presentation::remoteprotocol::ConvertJsonToCustomType<::vl::presentation::INativeWindow::WindowSizeState>(Ptr<JsonNode>, ::vl::presentation::INativeWindow::WindowSizeState&)#"
		auto jsonNode = node.Cast<glr::json::JsonString>();
		CHECK_ERROR(jsonNode, ERROR_MESSAGE_PREFIX L"Json node does not match the expected type.");
		if (jsonNode->content.value == L"Minimized") value = ::vl::presentation::INativeWindow::WindowSizeState::Minimized; else
		if (jsonNode->content.value == L"Restored") value = ::vl::presentation::INativeWindow::WindowSizeState::Restored; else
		if (jsonNode->content.value == L"Maximized") value = ::vl::presentation::INativeWindow::WindowSizeState::Maximized; else
		CHECK_FAIL(ERROR_MESSAGE_PREFIX L"Unsupported enum value.");
	#undef ERROR_MESSAGE_PREFIX
	}

	template<> void ConvertJsonToCustomType<::vl::presentation::NativeCoordinate>(vl::Ptr<vl::glr::json::JsonNode> node, ::vl::presentation::NativeCoordinate& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> void ConvertJsonToCustomType<::vl::presentation::NativePoint>(vl::Ptr<vl::glr::json::JsonNode> node, ::vl::presentation::NativePoint& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> void ConvertJsonToCustomType<::vl::presentation::NativeSize>(vl::Ptr<vl::glr::json::JsonNode> node, ::vl::presentation::NativeSize& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> void ConvertJsonToCustomType<::vl::presentation::NativeRect>(vl::Ptr<vl::glr::json::JsonNode> node, ::vl::presentation::NativeRect& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> void ConvertJsonToCustomType<::vl::presentation::NativeMargin>(vl::Ptr<vl::glr::json::JsonNode> node, ::vl::presentation::NativeMargin& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> void ConvertJsonToCustomType<::vl::presentation::FontProperties>(vl::Ptr<vl::glr::json::JsonNode> node, ::vl::presentation::FontProperties& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> void ConvertJsonToCustomType<vl::presentation::remoteprotocol::FontConfig>(vl::Ptr<vl::glr::json::JsonNode> node, vl::presentation::remoteprotocol::FontConfig& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> void ConvertJsonToCustomType<vl::presentation::remoteprotocol::ScreenConfig>(vl::Ptr<vl::glr::json::JsonNode> node, vl::presentation::remoteprotocol::ScreenConfig& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> void ConvertJsonToCustomType<vl::presentation::remoteprotocol::WindowSizingConfig>(vl::Ptr<vl::glr::json::JsonNode> node, vl::presentation::remoteprotocol::WindowSizingConfig& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

	template<> void ConvertJsonToCustomType<vl::presentation::remoteprotocol::WindowShowing>(vl::Ptr<vl::glr::json::JsonNode> node, vl::presentation::remoteprotocol::WindowShowing& value)
	{
		CHECK_FAIL(L"Not Implemented!");
	}

}
