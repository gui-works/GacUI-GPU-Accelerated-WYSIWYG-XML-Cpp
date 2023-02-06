/***********************************************************************
Vczh Library++ 3.0
Developer: Zihan Chen(vczh)
GacUI::Native Window::Default Service Implementation

Interfaces:
***********************************************************************/

#ifndef VCZH_PRESENTATION_UTILITIES_SHAREDSERVICES_FAKECLIPBOARDSERVICE
#define VCZH_PRESENTATION_UTILITIES_SHAREDSERVICES_FAKECLIPBOARDSERVICE

#include "../../NativeWindow/GuiNativeWindow.h"

namespace vl
{
	namespace presentation
	{
		class FakeClipboardReader;
		class FakeClipboardWriter;

		class FakeClipboardService
			: public Object
			, public INativeClipboardService
		{
			friend class FakeClipboardReader;
			friend class FakeClipboardWriter;
		protected:
			Ptr<INativeClipboardReader>		reader;

		public:
			FakeClipboardService();

			Ptr<INativeClipboardReader>		ReadClipboard() override;
			Ptr<INativeClipboardWriter>		WriteClipboard() override;
		};
	}
}

#endif