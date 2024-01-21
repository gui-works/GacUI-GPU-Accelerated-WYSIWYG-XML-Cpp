/***********************************************************************
This file is generated by : Vczh GacUI Remote Protocol Generator
Licensed under https ://github.com/vczh-libraries/License
***********************************************************************/

#ifndef VCZH_PRESENTATION_GUIREMOTECONTROLLER_REMOTEPROTOCOLSCHEMA
#define VCZH_PRESENTATION_GUIREMOTECONTROLLER_REMOTEPROTOCOLSCHEMA

#include "../../../../GuiTypes.h"

namespace vl::presentation::remoteprotocol
{
	struct FontConfig
	{
		::vl::presentation::FontProperties defaultFont;
		::vl::Ptr<::vl::collections::List<::vl::WString>> supportedFonts;
	};

	struct ScreenConfig
	{
		::vl::presentation::NativeRect bounds;
		::vl::presentation::NativeRect clientBounds;
		double scalingX;
		double scalingY;
	};

	struct WindowSizingConfig
	{
		::vl::presentation::NativeRect bounds;
		::vl::presentation::NativeRect clientBounds;
		::vl::presentation::NativeMargin customFramePadding;
	};

#define GACUI_REMOTEPROTOCOL_MESSAGES(NOREQ_NORES, NOREQ_RES, REQ_NORES, REQ_RES)\
	NOREQ_RES(ControllerGetFontConfig, vl::presentation::remoteprotocol::FontConfig)\
	NOREQ_RES(ControllerGetScreenConfig, vl::presentation::remoteprotocol::ScreenConfig)\
	NOREQ_NORES(ControllerConnectionEstablished)\
	NOREQ_NORES(ControllerConnectionStopped)\
	NOREQ_RES(WindowGetBounds, vl::presentation::remoteprotocol::WindowSizingConfig)\
	REQ_NORES(WindowNotifySetTitle, ::vl::WString)\
	REQ_NORES(WindowNotifySetEnabled, bool)\
	REQ_NORES(WindowNotifySetTopMost, bool)\
	REQ_NORES(WindowNotifySetShowInTaskBar, bool)\
	REQ_NORES(WindowNotifySetCustomFrameMode, bool)\
	REQ_NORES(WindowNotifySetMaximizedBox, bool)\
	REQ_NORES(WindowNotifySetMinimizedBox, bool)\
	REQ_NORES(WindowNotifySetBorder, bool)\
	REQ_NORES(WindowNotifySetSizeBox, bool)\
	REQ_NORES(WindowNotifySetIconVisible, bool)\
	REQ_NORES(WindowNotifySetTitleBar, bool)\
	REQ_RES(WindowSetBounds, ::vl::presentation::NativeRect, vl::presentation::remoteprotocol::WindowSizingConfig)\
	REQ_RES(WindowSetClientSize, ::vl::presentation::NativeSize, vl::presentation::remoteprotocol::WindowSizingConfig)\
	NOREQ_NORES(WindowNotifyActivate)\
	NOREQ_NORES(WindowNotifyShowActivated)\
	NOREQ_NORES(WindowNotifyShowDeactivated)\
	NOREQ_NORES(WindowNotifyShowMaximized)\
	NOREQ_NORES(WindowNotifyShowMinimized)\

#define GACUI_REMOTEPROTOCOL_EVENTS(NOREQ, REQ)\
	NOREQ(ControllerConnect)\
	NOREQ(ControllerDisconnect)\
	NOREQ(ControllerRequestExit)\
	NOREQ(ControllerForceExit)\
	REQ(ControllerScreenUpdated, vl::presentation::remoteprotocol::ScreenConfig)\
	REQ(WindowBoundsUpdated, vl::presentation::remoteprotocol::WindowSizingConfig)\

}

#endif
