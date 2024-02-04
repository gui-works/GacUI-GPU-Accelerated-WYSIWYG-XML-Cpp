﻿/***********************************************************************
THIS FILE IS AUTOMATICALLY GENERATED. DO NOT MODIFY
DEVELOPER: Zihan Chen(vczh)
***********************************************************************/
#include "VlppGlrParser.h"
#include "VlppWorkflowLibrary.h"
#include "VlppReflection.h"
#include "VlppOS.h"
#include "Vlpp.h"
#include "VlppRegex.h"
#include "VlppParser.h"

#include "..\..\Source\GuiTypes.h"
#include "..\..\Source\GraphicsComposition\GuiGraphicsAxis.h"
#include "..\..\Source\GraphicsElement\GuiGraphicsElementInterfaces.h"
#include "..\..\Source\GraphicsElement\GuiGraphicsDocumentInterfaces.h"
#include "..\..\Source\NativeWindow\GuiNativeWindow.h"
#include "..\..\Source\Application\GraphicsCompositions\GuiGraphicsEventReceiver.h"
#include "..\..\Source\Application\GraphicsCompositions\GuiGraphicsComposition.h"
#include "..\..\Source\Application\GraphicsCompositions\GuiGraphicsBoundsComposition.h"
#include "..\..\Source\Application\GraphicsCompositions\GuiGraphicsWindowComposition.h"
#include "..\..\Source\Application\GraphicsHost\GuiGraphicsHost_Alt.h"
#include "..\..\Source\Application\GraphicsHost\GuiGraphicsHost_ShortcutKey.h"
#include "..\..\Source\Application\GraphicsHost\GuiGraphicsHost_Tab.h"
#include "..\..\Source\Application\GraphicsHost\GuiGraphicsHost.h"
#include "..\..\Source\GraphicsComposition\IncludeForward.h"
#include "..\..\Source\GraphicsComposition\GuiGraphicsFlowComposition.h"
#include "..\..\Source\GraphicsComposition\GuiGraphicsResponsiveComposition.h"
#include "..\..\Source\GraphicsComposition\GuiGraphicsSharedSizeComposition.h"
#include "..\..\Source\GraphicsComposition\GuiGraphicsSpecializedComposition.h"
#include "..\..\Source\GraphicsComposition\GuiGraphicsStackComposition.h"
#include "..\..\Source\GraphicsComposition\GuiGraphicsRepeatComposition.h"
#include "..\..\Source\GraphicsComposition\GuiGraphicsTableComposition.h"
#include "..\..\Source\GraphicsComposition\IncludeAll.h"
#include "..\..\Source\GraphicsElement\GuiGraphicsResourceManager.h"
#include "..\..\Source\PlatformProviders\Hosted\GuiHostedGraphics.h"
#include "..\..\Source\PlatformProviders\Hosted\GuiHostedWindowManager.h"
#include "..\..\Source\PlatformProviders\Hosted\GuiHostedWindow.h"
#include "..\..\Source\PlatformProviders\Remote\GuiRemoteGraphics.h"
#include "..\..\Source\PlatformProviders\Remote\GuiRemoteProtocolSchemaShared.h"
#include "..\..\Source\PlatformProviders\Remote\GuiRemoteWindow.h"
#include "..\..\Source\PlatformProviders\Remote\Protocol\Generated\GuiRemoteProtocolSchema.h"
#include "..\..\Source\PlatformProviders\Remote\GuiRemoteProtocol.h"
#include "..\..\Source\Resources\GuiPluginManager.h"
#include "..\..\Source\Resources\GuiResource.h"
#include "..\..\Source\Application\Controls\GuiInstanceRootObject.h"
#include "..\..\Source\Application\Controls\GuiThemeManager.h"
#include "..\..\Source\Application\Controls\GuiBasicControls.h"
#include "..\..\Source\Application\Controls\GuiLabelControls.h"
#include "..\..\Source\Application\Controls\GuiWindowControls.h"
#include "..\..\Source\Application\Controls\GuiApplication.h"
#include "..\..\Source\Controls\GuiDialogs.h"
#include "..\..\Source\Controls\Templates\GuiAnimation.h"
#include "..\..\Source\Controls\ToolstripPackage\GuiToolstripCommand.h"
#include "..\..\Source\Resources\GuiDocument.h"
#include "..\..\Source\GraphicsElement\GuiGraphicsElement.h"
#include "..\..\Source\GraphicsElement\GuiGraphicsDocumentElement.h"
#include "..\..\Source\GraphicsElement\GuiGraphicsTextElement.h"
#include "..\..\Source\Controls\Templates\GuiControlTemplates.h"
#include "..\..\Source\Controls\GuiButtonControls.h"
#include "..\..\Source\Controls\GuiScrollControls.h"
#include "..\..\Source\Controls\GuiContainerControls.h"
#include "..\..\Source\Controls\IncludeForward.h"
#include "..\..\Source\Controls\ListControlPackage\GuiListControls.h"
#include "..\..\Source\Controls\ListControlPackage\GuiListControlItemArrangers.h"
#include "..\..\Source\Controls\ListControlPackage\GuiTextListControls.h"
#include "..\..\Source\Controls\ListControlPackage\GuiTreeViewControls.h"
#include "..\..\Source\Controls\Templates\GuiCommonTemplates.h"
#include "..\..\Source\Controls\Templates\GuiThemeStyleFactory.h"
#include "..\..\Source\Controls\TextEditorPackage\EditorCallback\GuiTextGeneralOperations.h"
#include "..\..\Source\Controls\TextEditorPackage\EditorCallback\GuiTextAutoComplete.h"
#include "..\..\Source\Controls\TextEditorPackage\EditorCallback\GuiTextColorizer.h"
#include "..\..\Source\Controls\TextEditorPackage\EditorCallback\GuiTextUndoRedo.h"
#include "..\..\Source\Controls\TextEditorPackage\GuiDocumentViewer.h"
#include "..\..\Source\Controls\TextEditorPackage\GuiTextCommonInterface.h"
#include "..\..\Source\Controls\TextEditorPackage\GuiTextControls.h"
#include "..\..\Source\Controls\TextEditorPackage\LanguageService\GuiLanguageOperations.h"
#include "..\..\Source\Controls\TextEditorPackage\LanguageService\GuiLanguageAutoComplete.h"
#include "..\..\Source\Controls\TextEditorPackage\LanguageService\GuiLanguageColorizer.h"
#include "..\..\Source\Controls\ToolstripPackage\GuiMenuControls.h"
#include "..\..\Source\Controls\ListControlPackage\GuiComboControls.h"
#include "..\..\Source\Controls\GuiDateTimeControls.h"
#include "..\..\Source\Controls\ListControlPackage\GuiListViewControls.h"
#include "..\..\Source\Controls\ListControlPackage\GuiBindableListControls.h"
#include "..\..\Source\Controls\ListControlPackage\GuiDataGridInterfaces.h"
#include "..\..\Source\Controls\ListControlPackage\GuiDataGridExtensions.h"
#include "..\..\Source\Controls\ListControlPackage\GuiListViewItemTemplates.h"
#include "..\..\Source\Controls\ListControlPackage\GuiDataGridControls.h"
#include "..\..\Source\Controls\ListControlPackage\GuiBindableDataGrid.h"
#include "..\..\Source\Controls\ToolstripPackage\GuiRibbonImpl.h"
#include "..\..\Source\Controls\ToolstripPackage\GuiToolstripMenu.h"
#include "..\..\Source\Controls\ToolstripPackage\GuiRibbonControls.h"
#include "..\..\Source\Controls\ToolstripPackage\GuiRibbonGalleryList.h"
#include "..\..\Source\Controls\IncludeAll.h"
#include "..\..\Source\Resources\GuiDocumentClipboard.h"
#include "..\..\Source\Resources\GuiDocumentEditor.h"
#include "..\..\Source\Resources\GuiParserManager.h"
#include "..\..\Source\Resources\GuiResourceManager.h"
#include "..\..\Source\Utilities\FakeServices\GuiFakeClipboardService.h"
#include "..\..\Source\Utilities\FakeServices\GuiFakeDialogServiceBase.h"
#include "..\..\Source\GacUIReflectionHelper.h"
#include "..\..\Source\GacUI.h"
#include "..\..\Source\Utilities\FakeServices\Dialogs\GuiFakeDialogService.h"
#include "..\..\Source\Utilities\FakeServices\Dialogs\Source\GuiFakeDialogServiceUI.h"
#include "..\..\Source\Utilities\FakeServices\Dialogs\Source\GuiFakeDialogServiceUIIncludes.h"
#include "..\..\Source\Utilities\SharedServices\GuiSharedAsyncService.h"
#include "..\..\Source\Utilities\SharedServices\GuiSharedCallbackService.h"
#include "..\..\Source\PlatformProviders\Hosted\GuiHostedController.h"
#include "..\..\Source\PlatformProviders\Remote\GuiRemoteEvents.h"
#include "..\..\Source\PlatformProviders\Remote\GuiRemoteController.h"
