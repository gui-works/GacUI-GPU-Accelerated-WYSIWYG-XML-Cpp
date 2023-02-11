/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_GUIFAKEDIALOGSERVICEUI
#define VCZH_WORKFLOW_COMPILER_GENERATED_GUIFAKEDIALOGSERVICEUI

#include "../../../../GacUI.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

namespace vl_workflow_global
{
	struct __vwsnf1_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_;
	struct __vwsnf2_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_;
	struct __vwsnf3_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_;
	struct __vwsnf4_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxWindowConstructor___vwsn_gaclib_controls_MessageBoxWindow_Initialize_;
	class __vwsnc1_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize__vl_reflection_description_IValueSubscription;
	class __vwsnc2_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize__vl_reflection_description_IValueSubscription;
	class __vwsnc3_GuiFakeDialogServiceUI_gaclib_controls_DialogStrings_Get__gaclib_controls_IDialogStringsStrings;
}

namespace gaclib_controls
{
	class DialogStrings;
	class IDialogStringsStrings;
	class MessageBoxButtonTemplateConstructor;
	class MessageBoxButtonTemplate;
	class MessageBoxWindowConstructor;
	class MessageBoxWindow;

	class DialogStrings : public ::vl::Object, public ::vl::reflection::Description<DialogStrings>
	{
		friend class ::vl_workflow_global::__vwsnc3_GuiFakeDialogServiceUI_gaclib_controls_DialogStrings_Get__gaclib_controls_IDialogStringsStrings;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<DialogStrings>;
#endif
	public:
		static ::vl::WString __vwsn_ls_First(const ::vl::collections::LazyList<::vl::WString>& __vwsn_ls_formats);
		static ::vl::Ptr<::gaclib_controls::IDialogStringsStrings> Get(::vl::Locale __vwsn_ls_locale);
		DialogStrings();
	};

	class IDialogStringsStrings : public virtual ::vl::reflection::IDescriptable, public ::vl::reflection::Description<IDialogStringsStrings>
	{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<IDialogStringsStrings>;
#endif
	public:
		virtual ::vl::WString Abort() = 0;
		virtual ::vl::WString Cancel() = 0;
		virtual ::vl::WString Continue() = 0;
		virtual ::vl::WString Ignore() = 0;
		virtual ::vl::WString No() = 0;
		virtual ::vl::WString OK() = 0;
		virtual ::vl::WString Retry() = 0;
		virtual ::vl::WString TryAgain() = 0;
		virtual ::vl::WString Yes() = 0;
	};

	class MessageBoxButtonTemplateConstructor : public ::vl::Object, public ::vl::reflection::Description<MessageBoxButtonTemplateConstructor>
	{
		friend class ::vl_workflow_global::__vwsnc1_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf2_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf3_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MessageBoxButtonTemplateConstructor>;
#endif
	protected:
		::vl::Ptr<::vl::presentation::IMessageBoxDialogAction> Action;
		::gaclib_controls::MessageBoxButtonTemplate* self;
		::vl::presentation::controls::GuiButton* __vwsn_precompile_0;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_1;
		void __vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize(::gaclib_controls::MessageBoxButtonTemplate* __vwsn_this_);
	public:
		MessageBoxButtonTemplateConstructor();
	};

	class MessageBoxButtonTemplate : public ::vl::presentation::templates::GuiControlTemplate, public ::gaclib_controls::MessageBoxButtonTemplateConstructor, public ::vl::reflection::Description<MessageBoxButtonTemplate>
	{
		friend class ::gaclib_controls::MessageBoxButtonTemplateConstructor;
		friend class ::vl_workflow_global::__vwsnc1_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf1_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf2_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf3_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MessageBoxButtonTemplate>;
#endif
	public:
		::vl::WString GetButtonText(::vl::presentation::INativeDialogService::MessageBoxButtonsOutput button, ::vl::Ptr<::gaclib_controls::IDialogStringsStrings> strings);
		::vl::Ptr<::gaclib_controls::IDialogStringsStrings> __vwsn_prop_Strings;
		::vl::Ptr<::gaclib_controls::IDialogStringsStrings> GetStrings();
		void SetStrings(::vl::Ptr<::gaclib_controls::IDialogStringsStrings> __vwsn_value_);
		::vl::Event<void()> StringsChanged;
		::vl::Ptr<::vl::presentation::IMessageBoxDialogAction> __vwsn_parameter_Action;
		::vl::Ptr<::vl::presentation::IMessageBoxDialogAction> GetAction();
		MessageBoxButtonTemplate(::vl::Ptr<::vl::presentation::IMessageBoxDialogAction> __vwsn_ctor_parameter_Action);
		~MessageBoxButtonTemplate();
	};

	class MessageBoxWindowConstructor : public ::vl::Object, public ::vl::reflection::Description<MessageBoxWindowConstructor>
	{
		friend struct ::vl_workflow_global::__vwsnf4_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxWindowConstructor___vwsn_gaclib_controls_MessageBoxWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MessageBoxWindowConstructor>;
#endif
	protected:
		::vl::Ptr<::vl::presentation::IMessageBoxDialogViewModel> ViewModel;
		::gaclib_controls::MessageBoxWindow* __vwsn_precompile_0;
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_1;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_2;
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_3;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_4;
		::vl::Ptr<::vl::presentation::elements::GuiSolidBackgroundElement> __vwsn_precompile_5;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_6;
		::vl::Ptr<::vl::presentation::elements::GuiImageFrameElement> __vwsn_precompile_7;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_8;
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_9;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_10;
		::vl::presentation::controls::GuiLabel* __vwsn_precompile_11;
		::vl::presentation::compositions::GuiBoundsComposition* __vwsn_precompile_12;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_13;
		::vl::presentation::compositions::GuiTableComposition* __vwsn_precompile_14;
		::vl::presentation::compositions::GuiCellComposition* __vwsn_precompile_15;
		::vl::presentation::compositions::GuiRepeatStackComposition* __vwsn_precompile_16;
		void __vwsn_gaclib_controls_MessageBoxWindow_Initialize(::gaclib_controls::MessageBoxWindow* __vwsn_this_);
	public:
		MessageBoxWindowConstructor();
	};

	class MessageBoxWindow : public ::vl::presentation::controls::GuiWindow, public ::gaclib_controls::MessageBoxWindowConstructor, public ::vl::reflection::Description<MessageBoxWindow>
	{
		friend class ::gaclib_controls::MessageBoxWindowConstructor;
		friend struct ::vl_workflow_global::__vwsnf4_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxWindowConstructor___vwsn_gaclib_controls_MessageBoxWindow_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MessageBoxWindow>;
#endif
	public:
		::vl::Ptr<::vl::presentation::IMessageBoxDialogViewModel> __vwsn_parameter_ViewModel;
		::vl::Ptr<::vl::presentation::IMessageBoxDialogViewModel> GetViewModel();
		MessageBoxWindow(::vl::Ptr<::vl::presentation::IMessageBoxDialogViewModel> __vwsn_ctor_parameter_ViewModel);
		~MessageBoxWindow();
	};

}
/***********************************************************************
Global Variables and Functions
***********************************************************************/

namespace vl_workflow_global
{
	class GuiFakeDialogServiceUI
	{
	public:

		static GuiFakeDialogServiceUI& Instance();
	};

/***********************************************************************
Closures
***********************************************************************/

	struct __vwsnf1_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_
	{
		::gaclib_controls::MessageBoxButtonTemplateConstructor* __vwsnthis_0;

		__vwsnf1_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_(::gaclib_controls::MessageBoxButtonTemplateConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	struct __vwsnf2_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_
	{
		::gaclib_controls::MessageBoxButtonTemplateConstructor* __vwsnthis_0;

		__vwsnf2_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_(::gaclib_controls::MessageBoxButtonTemplateConstructor* __vwsnctorthis_0);

		void operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const;
	};

	struct __vwsnf3_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_
	{
		::gaclib_controls::MessageBoxButtonTemplateConstructor* __vwsnthis_0;

		__vwsnf3_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize_(::gaclib_controls::MessageBoxButtonTemplateConstructor* __vwsnctorthis_0);

		void operator()(const ::vl::reflection::description::Value& __vwsn_value_) const;
	};

	struct __vwsnf4_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxWindowConstructor___vwsn_gaclib_controls_MessageBoxWindow_Initialize_
	{
		::gaclib_controls::MessageBoxWindowConstructor* __vwsnthis_0;

		__vwsnf4_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxWindowConstructor___vwsn_gaclib_controls_MessageBoxWindow_Initialize_(::gaclib_controls::MessageBoxWindowConstructor* __vwsnctorthis_0);

		::vl::presentation::templates::GuiTemplate* operator()(const ::vl::reflection::description::Value& __vwsn_viewModel_) const;
	};

	class __vwsnc1_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize__vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::gaclib_controls::MessageBoxButtonTemplateConstructor* __vwsnthis_0;

		__vwsnc1_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize__vl_reflection_description_IValueSubscription(::gaclib_controls::MessageBoxButtonTemplateConstructor* __vwsnctorthis_0);

		::gaclib_controls::MessageBoxButtonTemplate* __vwsn_bind_cache_0 = nullptr;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0();
		bool Open() override;
		bool Update() override;
		bool Close() override;
	};

	class __vwsnc2_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize__vl_reflection_description_IValueSubscription : public ::vl::Object, public virtual ::vl::reflection::description::IValueSubscription
	{
	public:
		::gaclib_controls::MessageBoxButtonTemplateConstructor* __vwsnthis_0;

		__vwsnc2_GuiFakeDialogServiceUI_gaclib_controls_MessageBoxButtonTemplateConstructor___vwsn_gaclib_controls_MessageBoxButtonTemplate_Initialize__vl_reflection_description_IValueSubscription(::gaclib_controls::MessageBoxButtonTemplateConstructor* __vwsnctorthis_0);

		::vl::presentation::controls::GuiApplication* __vwsn_bind_cache_0 = nullptr;
		::vl::Ptr<::vl::reflection::description::IEventHandler> __vwsn_bind_handler_0_0;
		bool __vwsn_bind_opened_ = false;
		bool __vwsn_bind_closed_ = false;
		void __vwsn_bind_activator_();
		void __vwsn_bind_callback_0_0();
		bool Open() override;
		bool Update() override;
		bool Close() override;
	};

	class __vwsnc3_GuiFakeDialogServiceUI_gaclib_controls_DialogStrings_Get__gaclib_controls_IDialogStringsStrings : public ::vl::Object, public virtual ::gaclib_controls::IDialogStringsStrings
	{
	public:
		__vwsnc3_GuiFakeDialogServiceUI_gaclib_controls_DialogStrings_Get__gaclib_controls_IDialogStringsStrings();

		::vl::WString Abort() override;
		::vl::WString Cancel() override;
		::vl::WString Continue() override;
		::vl::WString Ignore() override;
		::vl::WString No() override;
		::vl::WString OK() override;
		::vl::WString Retry() override;
		::vl::WString TryAgain() override;
		::vl::WString Yes() override;
	};
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

#endif
