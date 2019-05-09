#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
struct UBackgroundBlurSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.BackgroundBlurSlot.SetPadding
struct UBackgroundBlurSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
struct UBackgroundBlurSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.BorderSlot.SetVerticalAlignment
struct UBorderSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.BorderSlot.SetPadding
struct UBorderSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.BorderSlot.SetHorizontalAlignment
struct UBorderSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ButtonSlot.SetVerticalAlignment
struct UButtonSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ButtonSlot.SetPadding
struct UButtonSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.ButtonSlot.SetHorizontalAlignment
struct UButtonSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetZOrder
struct UCanvasPanelSlot_SetZOrder_Params
{
	int                                                InZOrder;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetSize
struct UCanvasPanelSlot_SetSize_Params
{
	struct FVector2D                                   InSize;                                                   // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetPosition
struct UCanvasPanelSlot_SetPosition_Params
{
	struct FVector2D                                   InPosition;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetOffsets
struct UCanvasPanelSlot_SetOffsets_Params
{
	struct FMargin                                     InOffset;                                                 // (CPF_Parm)
};

// Function UMG.CanvasPanelSlot.SetMinimum
struct UCanvasPanelSlot_SetMinimum_Params
{
	struct FVector2D                                   InMinimumAnchors;                                         // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetMaximum
struct UCanvasPanelSlot_SetMaximum_Params
{
	struct FVector2D                                   InMaximumAnchors;                                         // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetLayout
struct UCanvasPanelSlot_SetLayout_Params
{
	struct FAnchorData                                 InLayoutData;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.CanvasPanelSlot.SetAutoSize
struct UCanvasPanelSlot_SetAutoSize_Params
{
	bool                                               InbAutoSize;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.SetAnchors
struct UCanvasPanelSlot_SetAnchors_Params
{
	struct FAnchors                                    InAnchors;                                                // (CPF_Parm)
};

// Function UMG.CanvasPanelSlot.SetAlignment
struct UCanvasPanelSlot_SetAlignment_Params
{
	struct FVector2D                                   InAlignment;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetZOrder
struct UCanvasPanelSlot_GetZOrder_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetSize
struct UCanvasPanelSlot_GetSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetPosition
struct UCanvasPanelSlot_GetPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetOffsets
struct UCanvasPanelSlot_GetOffsets_Params
{
	struct FMargin                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.CanvasPanelSlot.GetLayout
struct UCanvasPanelSlot_GetLayout_Params
{
	struct FAnchorData                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.CanvasPanelSlot.GetAutoSize
struct UCanvasPanelSlot_GetAutoSize_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.CanvasPanelSlot.GetAnchors
struct UCanvasPanelSlot_GetAnchors_Params
{
	struct FAnchors                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.CanvasPanelSlot.GetAlignment
struct UCanvasPanelSlot_GetAlignment_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.GridSlot.SetVerticalAlignment
struct UGridSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.GridSlot.SetRowSpan
struct UGridSlot_SetRowSpan_Params
{
	int                                                InRowSpan;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.GridSlot.SetRow
struct UGridSlot_SetRow_Params
{
	int                                                InRow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.GridSlot.SetPadding
struct UGridSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.GridSlot.SetLayer
struct UGridSlot_SetLayer_Params
{
	int                                                InLayer;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.GridSlot.SetHorizontalAlignment
struct UGridSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.GridSlot.SetColumnSpan
struct UGridSlot_SetColumnSpan_Params
{
	int                                                InColumnSpan;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.GridSlot.SetColumn
struct UGridSlot_SetColumn_Params
{
	int                                                InColumn;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
struct UHorizontalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.HorizontalBoxSlot.SetSize
struct UHorizontalBoxSlot_SetSize_Params
{
	struct FSlateChildSize                             InSize;                                                   // (CPF_Parm)
};

// Function UMG.HorizontalBoxSlot.SetPadding
struct UHorizontalBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
struct UHorizontalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.OverlaySlot.SetZOrder
struct UOverlaySlot_SetZOrder_Params
{
	int                                                InZOrder;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.OverlaySlot.SetVerticalAlignment
struct UOverlaySlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.OverlaySlot.SetPadding
struct UOverlaySlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.OverlaySlot.SetHorizontalAlignment
struct UOverlaySlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.OverlaySlot.GetZOrder
struct UOverlaySlot_GetZOrder_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.ScaleBoxSlot.SetVerticalAlignment
struct UScaleBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ScaleBoxSlot.SetPadding
struct UScaleBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
struct UScaleBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ScrollBoxSlot.SetPadding
struct UScrollBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
struct UScrollBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SizeBoxSlot.SetVerticalAlignment
struct USizeBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SizeBoxSlot.SetPadding
struct USizeBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.SizeBoxSlot.SetHorizontalAlignment
struct USizeBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UniformGridSlot.SetVerticalAlignment
struct UUniformGridSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UniformGridSlot.SetRow
struct UUniformGridSlot_SetRow_Params
{
	int                                                InRow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UniformGridSlot.SetHorizontalAlignment
struct UUniformGridSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UniformGridSlot.SetColumn
struct UUniformGridSlot_SetColumn_Params
{
	int                                                InColumn;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.VerticalBoxSlot.SetVerticalAlignment
struct UVerticalBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.VerticalBoxSlot.SetSize
struct UVerticalBoxSlot_SetSize_Params
{
	struct FSlateChildSize                             InSize;                                                   // (CPF_Parm)
};

// Function UMG.VerticalBoxSlot.SetPadding
struct UVerticalBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
struct UVerticalBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
struct UWidgetSwitcherSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WidgetSwitcherSlot.SetPadding
struct UWidgetSwitcherSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
struct UWidgetSwitcherSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetVisibility
struct UWidget_SetVisibility_Params
{
};

// Function UMG.Widget.SetUserFocus
struct UWidget_SetUserFocus_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetToolTipText
struct UWidget_SetToolTipText_Params
{
	struct FText                                       InToolTipText;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.Widget.SetToolTip
struct UWidget_SetToolTip_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderTranslation
struct UWidget_SetRenderTranslation_Params
{
	struct FVector2D                                   Translation;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderTransformPivot
struct UWidget_SetRenderTransformPivot_Params
{
	struct FVector2D                                   Pivot;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderTransform
struct UWidget_SetRenderTransform_Params
{
	struct FWidgetTransform                            InTransform;                                              // (CPF_Parm)
};

// Function UMG.Widget.SetRenderShear
struct UWidget_SetRenderShear_Params
{
	struct FVector2D                                   Shear;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderScale
struct UWidget_SetRenderScale_Params
{
	struct FVector2D                                   Scale;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderAngle
struct UWidget_SetRenderAngle_Params
{
	float                                              Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetNavigationRule
struct UWidget_SetNavigationRule_Params
{
	struct FName                                       WidgetToFocus;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetKeyboardFocus
struct UWidget_SetKeyboardFocus_Params
{
};

// Function UMG.Widget.SetIsEnabled
struct UWidget_SetIsEnabled_Params
{
	bool                                               bInIsEnabled;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetCursor
struct UWidget_SetCursor_Params
{
	TEnumAsByte<EMouseCursor>                          InCursor;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetAllNavigationRules
struct UWidget_SetAllNavigationRules_Params
{
	struct FName                                       WidgetToFocus;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.ResetCursor
struct UWidget_ResetCursor_Params
{
};

// Function UMG.Widget.RemoveFromParent
struct UWidget_RemoveFromParent_Params
{
};

// DelegateFunction UMG.Widget.OnReply__DelegateSignature
struct UWidget_OnReply__DelegateSignature_Params
{
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
struct UWidget_OnPointerEvent__DelegateSignature_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.Widget.IsVisible
struct UWidget_IsVisible_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.IsHovered
struct UWidget_IsHovered_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.InvalidateLayoutAndVolatility
struct UWidget_InvalidateLayoutAndVolatility_Params
{
};

// Function UMG.Widget.HasUserFocusedDescendants
struct UWidget_HasUserFocusedDescendants_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasUserFocus
struct UWidget_HasUserFocus_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasMouseCapture
struct UWidget_HasMouseCapture_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasKeyboardFocus
struct UWidget_HasKeyboardFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasFocusedDescendants
struct UWidget_HasFocusedDescendants_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasAnyUserFocus
struct UWidget_HasAnyUserFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
struct UWidget_GetWidget__DelegateSignature_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.Widget.GetVisibility
struct UWidget_GetVisibility_Params
{
};

// DelegateFunction UMG.Widget.GetText__DelegateSignature
struct UWidget_GetText__DelegateSignature_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
struct UWidget_GetSlateVisibility__DelegateSignature_Params
{
};

// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
struct UWidget_GetSlateColor__DelegateSignature_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
struct UWidget_GetSlateBrush__DelegateSignature_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.Widget.GetParent
struct UWidget_GetParent_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.Widget.GetOwningPlayer
struct UWidget_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
struct UWidget_GetMouseCursor__DelegateSignature_Params
{
	TEnumAsByte<EMouseCursor>                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
struct UWidget_GetLinearColor__DelegateSignature_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.GetIsEnabled
struct UWidget_GetIsEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
struct UWidget_GetInt32__DelegateSignature_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
struct UWidget_GetFloat__DelegateSignature_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.GetDesiredSize
struct UWidget_GetDesiredSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
struct UWidget_GetCheckBoxState__DelegateSignature_Params
{
};

// Function UMG.Widget.GetCachedGeometry
struct UWidget_GetCachedGeometry_Params
{
	struct FGeometry                                   ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetBool__DelegateSignature
struct UWidget_GetBool__DelegateSignature_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
struct UWidget_GenerateWidgetForString__DelegateSignature_Params
{
	struct FString                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
struct UWidget_GenerateWidgetForObject__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.Widget.ForceVolatile
struct UWidget_ForceVolatile_Params
{
	bool                                               bForce;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.ForceLayoutPrepass
struct UWidget_ForceLayoutPrepass_Params
{
};

// DelegateFunction UMG.Widget.EventForWidget__DelegateSignature
struct UWidget_EventForWidget__DelegateSignature_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChildAt
struct UPanelWidget_RemoveChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChild
struct UPanelWidget_RemoveChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasChild
struct UPanelWidget_HasChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasAnyChildren
struct UPanelWidget_HasAnyChildren_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildrenCount
struct UPanelWidget_GetChildrenCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildIndex
struct UPanelWidget_GetChildIndex_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildAt
struct UPanelWidget_GetChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.ClearChildren
struct UPanelWidget_ClearChildren_Params
{
};

// Function UMG.PanelWidget.AddChild
struct UPanelWidget_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPanelSlot*                                  ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChildAt
struct UContentWidget_RemoveChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChild
struct UContentWidget_RemoveChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasChild
struct UContentWidget_HasChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasAnyChildren
struct UContentWidget_HasAnyChildren_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildrenCount
struct UContentWidget_GetChildrenCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildIndex
struct UContentWidget_GetChildIndex_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildAt
struct UContentWidget_GetChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.ClearChildren
struct UContentWidget_ClearChildren_Params
{
};

// Function UMG.PanelWidget.AddChild
struct UContentWidget_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPanelSlot*                                  ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.WindowTitleBarArea.SetVerticalAlignment
struct UWindowTitleBarArea_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WindowTitleBarArea.SetPadding
struct UWindowTitleBarArea_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
struct UWindowTitleBarArea_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
struct UWindowTitleBarAreaSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WindowTitleBarAreaSlot.SetPadding
struct UWindowTitleBarAreaSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
struct UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetVerticalAlignment
struct UWrapBoxSlot_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetPadding
struct UWrapBoxSlot_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.WrapBoxSlot.SetHorizontalAlignment
struct UWrapBoxSlot_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
struct UWrapBoxSlot_SetFillSpanWhenLessThan_Params
{
	float                                              InFillSpanWhenLessThan;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WrapBoxSlot.SetFillEmptySpace
struct UWrapBoxSlot_SetFillEmptySpace_Params
{
	bool                                               InbFillEmptySpace;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.CircularThrobber.SetRadius
struct UCircularThrobber_SetRadius_Params
{
	float                                              InRadius;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.CircularThrobber.SetPeriod
struct UCircularThrobber_SetPeriod_Params
{
	float                                              InPeriod;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.CircularThrobber.SetNumberOfPieces
struct UCircularThrobber_SetNumberOfPieces_Params
{
	int                                                InNumberOfPieces;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ComboBoxString.SetSelectedOption
struct UComboBoxString_SetSelectedOption_Params
{
	struct FString                                     Option;                                                   // (CPF_Parm, CPF_ZeroConstructor)
};

// Function UMG.ComboBoxString.RemoveOption
struct UComboBoxString_RemoveOption_Params
{
	struct FString                                     Option;                                                   // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.ComboBoxString.RefreshOptions
struct UComboBoxString_RefreshOptions_Params
{
};

// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
struct UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params
{
	struct FString                                     SelectedItem;                                             // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
struct UComboBoxString_OnOpeningEvent__DelegateSignature_Params
{
};

// Function UMG.ComboBoxString.GetSelectedOption
struct UComboBoxString_GetSelectedOption_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function UMG.ComboBoxString.GetOptionCount
struct UComboBoxString_GetOptionCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.ComboBoxString.GetOptionAtIndex
struct UComboBoxString_GetOptionAtIndex_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function UMG.ComboBoxString.FindOptionIndex
struct UComboBoxString_FindOptionIndex_Params
{
	struct FString                                     Option;                                                   // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.ComboBoxString.ClearSelection
struct UComboBoxString_ClearSelection_Params
{
};

// Function UMG.ComboBoxString.ClearOptions
struct UComboBoxString_ClearOptions_Params
{
};

// Function UMG.ComboBoxString.AddOption
struct UComboBoxString_AddOption_Params
{
	struct FString                                     Option;                                                   // (CPF_Parm, CPF_ZeroConstructor)
};

// Function UMG.EditableText.SetText
struct UEditableText_SetText_Params
{
	struct FText                                       InText;                                                   // (CPF_Parm)
};

// Function UMG.EditableText.SetIsReadOnly
struct UEditableText_SetIsReadOnly_Params
{
	bool                                               InbIsReadyOnly;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.EditableText.SetIsPassword
struct UEditableText_SetIsPassword_Params
{
	bool                                               InbIsPassword;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.EditableText.SetHintText
struct UEditableText_SetHintText_Params
{
	struct FText                                       InHintText;                                               // (CPF_Parm)
};

// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
struct UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
struct UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.EditableText.GetText
struct UEditableText_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.EditableTextBox.SetText
struct UEditableTextBox_SetText_Params
{
	struct FText                                       InText;                                                   // (CPF_Parm)
};

// Function UMG.EditableTextBox.SetIsReadOnly
struct UEditableTextBox_SetIsReadOnly_Params
{
	bool                                               bReadOnly;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.EditableTextBox.SetHintText
struct UEditableTextBox_SetHintText_Params
{
	struct FText                                       InText;                                                   // (CPF_Parm)
};

// Function UMG.EditableTextBox.SetError
struct UEditableTextBox_SetError_Params
{
	struct FText                                       InError;                                                  // (CPF_Parm)
};

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
struct UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
struct UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.EditableTextBox.HasError
struct UEditableTextBox_HasError_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.EditableTextBox.GetText
struct UEditableTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.EditableTextBox.ClearError
struct UEditableTextBox_ClearError_Params
{
};

// Function UMG.ExpandableArea.SetIsExpanded_Animated
struct UExpandableArea_SetIsExpanded_Animated_Params
{
	bool                                               IsExpanded;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ExpandableArea.SetIsExpanded
struct UExpandableArea_SetIsExpanded_Params
{
	bool                                               IsExpanded;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ExpandableArea.GetIsExpanded
struct UExpandableArea_GetIsExpanded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Image.SetOpacity
struct UImage_SetOpacity_Params
{
	float                                              InOpacity;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Image.SetColorAndOpacity
struct UImage_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Image.SetBrushSize
struct UImage_SetBrushSize_Params
{
	struct FVector2D                                   BrushSize;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Image.SetBrushFromTextureDynamic
struct UImage_SetBrushFromTextureDynamic_Params
{
	class UTexture2DDynamic*                           Texture;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMatchSize;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Image.SetBrushFromTexture
struct UImage_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bMatchSize;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Image.SetBrushFromMaterial
struct UImage_SetBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Image.SetBrushFromAsset
struct UImage_SetBrushFromAsset_Params
{
	class USlateBrushAsset*                            Asset;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Image.SetBrush
struct UImage_SetBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.Image.GetDynamicMaterial
struct UImage_GetDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.InputKeySelector.SetSelectedKey
struct UInputKeySelector_SetSelectedKey_Params
{
	struct FInputChord                                 InSelectedKey;                                            // (CPF_Parm)
};

// Function UMG.InputKeySelector.SetKeySelectionText
struct UInputKeySelector_SetKeySelectionText_Params
{
	struct FText                                       InKeySelectionText;                                       // (CPF_Parm)
};

// Function UMG.InputKeySelector.SetAllowModifierKeys
struct UInputKeySelector_SetAllowModifierKeys_Params
{
	bool                                               bInAllowModifierKeys;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
struct UInputKeySelector_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                              // (CPF_Parm)
};

// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
struct UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function UMG.InputKeySelector.GetIsSelectingKey
struct UInputKeySelector_GetIsSelectingKey_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetVisibility
struct UNativeWidgetHost_SetVisibility_Params
{
};

// Function UMG.Widget.SetUserFocus
struct UNativeWidgetHost_SetUserFocus_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetToolTipText
struct UNativeWidgetHost_SetToolTipText_Params
{
	struct FText                                       InToolTipText;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.Widget.SetToolTip
struct UNativeWidgetHost_SetToolTip_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderTranslation
struct UNativeWidgetHost_SetRenderTranslation_Params
{
	struct FVector2D                                   Translation;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderTransformPivot
struct UNativeWidgetHost_SetRenderTransformPivot_Params
{
	struct FVector2D                                   Pivot;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderTransform
struct UNativeWidgetHost_SetRenderTransform_Params
{
	struct FWidgetTransform                            InTransform;                                              // (CPF_Parm)
};

// Function UMG.Widget.SetRenderShear
struct UNativeWidgetHost_SetRenderShear_Params
{
	struct FVector2D                                   Shear;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderScale
struct UNativeWidgetHost_SetRenderScale_Params
{
	struct FVector2D                                   Scale;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderAngle
struct UNativeWidgetHost_SetRenderAngle_Params
{
	float                                              Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetNavigationRule
struct UNativeWidgetHost_SetNavigationRule_Params
{
	struct FName                                       WidgetToFocus;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetKeyboardFocus
struct UNativeWidgetHost_SetKeyboardFocus_Params
{
};

// Function UMG.Widget.SetIsEnabled
struct UNativeWidgetHost_SetIsEnabled_Params
{
	bool                                               bInIsEnabled;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetCursor
struct UNativeWidgetHost_SetCursor_Params
{
	TEnumAsByte<EMouseCursor>                          InCursor;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetAllNavigationRules
struct UNativeWidgetHost_SetAllNavigationRules_Params
{
	struct FName                                       WidgetToFocus;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.ResetCursor
struct UNativeWidgetHost_ResetCursor_Params
{
};

// Function UMG.Widget.RemoveFromParent
struct UNativeWidgetHost_RemoveFromParent_Params
{
};

// DelegateFunction UMG.Widget.OnReply__DelegateSignature
struct UNativeWidgetHost_OnReply__DelegateSignature_Params
{
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
struct UNativeWidgetHost_OnPointerEvent__DelegateSignature_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.Widget.IsVisible
struct UNativeWidgetHost_IsVisible_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.IsHovered
struct UNativeWidgetHost_IsHovered_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.InvalidateLayoutAndVolatility
struct UNativeWidgetHost_InvalidateLayoutAndVolatility_Params
{
};

// Function UMG.Widget.HasUserFocusedDescendants
struct UNativeWidgetHost_HasUserFocusedDescendants_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasUserFocus
struct UNativeWidgetHost_HasUserFocus_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasMouseCapture
struct UNativeWidgetHost_HasMouseCapture_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasKeyboardFocus
struct UNativeWidgetHost_HasKeyboardFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasFocusedDescendants
struct UNativeWidgetHost_HasFocusedDescendants_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasAnyUserFocus
struct UNativeWidgetHost_HasAnyUserFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
struct UNativeWidgetHost_GetWidget__DelegateSignature_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.Widget.GetVisibility
struct UNativeWidgetHost_GetVisibility_Params
{
};

// DelegateFunction UMG.Widget.GetText__DelegateSignature
struct UNativeWidgetHost_GetText__DelegateSignature_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
struct UNativeWidgetHost_GetSlateVisibility__DelegateSignature_Params
{
};

// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
struct UNativeWidgetHost_GetSlateColor__DelegateSignature_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
struct UNativeWidgetHost_GetSlateBrush__DelegateSignature_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.Widget.GetParent
struct UNativeWidgetHost_GetParent_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.Widget.GetOwningPlayer
struct UNativeWidgetHost_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
struct UNativeWidgetHost_GetMouseCursor__DelegateSignature_Params
{
	TEnumAsByte<EMouseCursor>                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
struct UNativeWidgetHost_GetLinearColor__DelegateSignature_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.GetIsEnabled
struct UNativeWidgetHost_GetIsEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
struct UNativeWidgetHost_GetInt32__DelegateSignature_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
struct UNativeWidgetHost_GetFloat__DelegateSignature_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.GetDesiredSize
struct UNativeWidgetHost_GetDesiredSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
struct UNativeWidgetHost_GetCheckBoxState__DelegateSignature_Params
{
};

// Function UMG.Widget.GetCachedGeometry
struct UNativeWidgetHost_GetCachedGeometry_Params
{
	struct FGeometry                                   ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetBool__DelegateSignature
struct UNativeWidgetHost_GetBool__DelegateSignature_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
struct UNativeWidgetHost_GenerateWidgetForString__DelegateSignature_Params
{
	struct FString                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
struct UNativeWidgetHost_GenerateWidgetForObject__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.Widget.ForceVolatile
struct UNativeWidgetHost_ForceVolatile_Params
{
	bool                                               bForce;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.ForceLayoutPrepass
struct UNativeWidgetHost_ForceLayoutPrepass_Params
{
};

// DelegateFunction UMG.Widget.EventForWidget__DelegateSignature
struct UNativeWidgetHost_EventForWidget__DelegateSignature_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChildAt
struct UCanvasPanel_RemoveChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChild
struct UCanvasPanel_RemoveChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasChild
struct UCanvasPanel_HasChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasAnyChildren
struct UCanvasPanel_HasAnyChildren_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildrenCount
struct UCanvasPanel_GetChildrenCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildIndex
struct UCanvasPanel_GetChildIndex_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildAt
struct UCanvasPanel_GetChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.ClearChildren
struct UCanvasPanel_ClearChildren_Params
{
};

// Function UMG.PanelWidget.AddChild
struct UCanvasPanel_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPanelSlot*                                  ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetVerticalAlignment
struct UBackgroundBlur_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetPadding
struct UBackgroundBlur_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
struct UBackgroundBlur_SetLowQualityFallbackBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.BackgroundBlur.SetHorizontalAlignment
struct UBackgroundBlur_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetBlurStrength
struct UBackgroundBlur_SetBlurStrength_Params
{
	float                                              InStrength;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetBlurRadius
struct UBackgroundBlur_SetBlurRadius_Params
{
	int                                                InBlurRadius;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
struct UBackgroundBlur_SetApplyAlphaToBlur_Params
{
	bool                                               bInApplyAlphaToBlur;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Border.SetVerticalAlignment
struct UBorder_SetVerticalAlignment_Params
{
	TEnumAsByte<EVerticalAlignment>                    InVerticalAlignment;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Border.SetPadding
struct UBorder_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.Border.SetHorizontalAlignment
struct UBorder_SetHorizontalAlignment_Params
{
	TEnumAsByte<EHorizontalAlignment>                  InHorizontalAlignment;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Border.SetDesiredSizeScale
struct UBorder_SetDesiredSizeScale_Params
{
	struct FVector2D                                   InScale;                                                  // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Border.SetContentColorAndOpacity
struct UBorder_SetContentColorAndOpacity_Params
{
	struct FLinearColor                                InContentColorAndOpacity;                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Border.SetBrushFromTexture
struct UBorder_SetBrushFromTexture_Params
{
	class UTexture2D*                                  Texture;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Border.SetBrushFromMaterial
struct UBorder_SetBrushFromMaterial_Params
{
	class UMaterialInterface*                          Material;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Border.SetBrushFromAsset
struct UBorder_SetBrushFromAsset_Params
{
	class USlateBrushAsset*                            Asset;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Border.SetBrushColor
struct UBorder_SetBrushColor_Params
{
	struct FLinearColor                                InBrushColor;                                             // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Border.SetBrush
struct UBorder_SetBrush_Params
{
	struct FSlateBrush                                 InBrush;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.Border.GetDynamicMaterial
struct UBorder_GetDynamicMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Button.SetStyle
struct UButton_SetStyle_Params
{
	struct FButtonStyle                                InStyle;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.Button.SetColorAndOpacity
struct UButton_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Button.SetBackgroundColor
struct UButton_SetBackgroundColor_Params
{
	struct FLinearColor                                InBackgroundColor;                                        // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Button.IsPressed
struct UButton_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.CheckBox.SetIsChecked
struct UCheckBox_SetIsChecked_Params
{
	bool                                               InIsChecked;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.CheckBox.SetCheckedState
struct UCheckBox_SetCheckedState_Params
{
};

// Function UMG.CheckBox.IsPressed
struct UCheckBox_IsPressed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.CheckBox.IsChecked
struct UCheckBox_IsChecked_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.CheckBox.GetCheckedState
struct UCheckBox_GetCheckedState_Params
{
};

// Function UMG.InvalidationBox.SetCanCache
struct UInvalidationBox_SetCanCache_Params
{
	bool                                               CanCache;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.InvalidationBox.InvalidateCache
struct UInvalidationBox_InvalidateCache_Params
{
};

// Function UMG.InvalidationBox.GetCanCache
struct UInvalidationBox_GetCanCache_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.MenuAnchor.ToggleOpen
struct UMenuAnchor_ToggleOpen_Params
{
	bool                                               bFocusOnOpen;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.MenuAnchor.ShouldOpenDueToClick
struct UMenuAnchor_ShouldOpenDueToClick_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.MenuAnchor.Open
struct UMenuAnchor_Open_Params
{
	bool                                               bFocusMenu;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.MenuAnchor.IsOpen
struct UMenuAnchor_IsOpen_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.MenuAnchor.HasOpenSubMenus
struct UMenuAnchor_HasOpenSubMenus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.MenuAnchor.GetMenuPosition
struct UMenuAnchor_GetMenuPosition_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.MenuAnchor.Close
struct UMenuAnchor_Close_Params
{
};

// Function UMG.PanelWidget.RemoveChildAt
struct UNamedSlot_RemoveChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChild
struct UNamedSlot_RemoveChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasChild
struct UNamedSlot_HasChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasAnyChildren
struct UNamedSlot_HasAnyChildren_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildrenCount
struct UNamedSlot_GetChildrenCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildIndex
struct UNamedSlot_GetChildIndex_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildAt
struct UNamedSlot_GetChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.ClearChildren
struct UNamedSlot_ClearChildren_Params
{
};

// Function UMG.PanelWidget.AddChild
struct UNamedSlot_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPanelSlot*                                  ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.RetainerBox.SetTextureParameter
struct URetainerBox_SetTextureParameter_Params
{
	struct FName                                       TextureParameter;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.RetainerBox.SetEffectMaterial
struct URetainerBox_SetEffectMaterial_Params
{
	class UMaterialInterface*                          EffectMaterial;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.RetainerBox.RequestRender
struct URetainerBox_RequestRender_Params
{
};

// Function UMG.RetainerBox.GetEffectMaterial
struct URetainerBox_GetEffectMaterial_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.ScaleBox.SetUserSpecifiedScale
struct UScaleBox_SetUserSpecifiedScale_Params
{
	float                                              InUserSpecifiedScale;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ScaleBox.SetStretchDirection
struct UScaleBox_SetStretchDirection_Params
{
	TEnumAsByte<EStretchDirection>                     InStretchDirection;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ScaleBox.SetStretch
struct UScaleBox_SetStretch_Params
{
	TEnumAsByte<EStretch>                              InStretch;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ScaleBox.SetIgnoreInheritedScale
struct UScaleBox_SetIgnoreInheritedScale_Params
{
	bool                                               bInIgnoreInheritedScale;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SizeBox.SetWidthOverride
struct USizeBox_SetWidthOverride_Params
{
	float                                              InWidthOverride;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SizeBox.SetMinDesiredWidth
struct USizeBox_SetMinDesiredWidth_Params
{
	float                                              InMinDesiredWidth;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SizeBox.SetMinDesiredHeight
struct USizeBox_SetMinDesiredHeight_Params
{
	float                                              InMinDesiredHeight;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SizeBox.SetMaxDesiredWidth
struct USizeBox_SetMaxDesiredWidth_Params
{
	float                                              InMaxDesiredWidth;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SizeBox.SetMaxDesiredHeight
struct USizeBox_SetMaxDesiredHeight_Params
{
	float                                              InMaxDesiredHeight;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SizeBox.SetMaxAspectRatio
struct USizeBox_SetMaxAspectRatio_Params
{
	float                                              InMaxAspectRatio;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SizeBox.SetHeightOverride
struct USizeBox_SetHeightOverride_Params
{
	float                                              InHeightOverride;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SizeBox.ClearWidthOverride
struct USizeBox_ClearWidthOverride_Params
{
};

// Function UMG.SizeBox.ClearMinDesiredWidth
struct USizeBox_ClearMinDesiredWidth_Params
{
};

// Function UMG.SizeBox.ClearMinDesiredHeight
struct USizeBox_ClearMinDesiredHeight_Params
{
};

// Function UMG.SizeBox.ClearMaxDesiredWidth
struct USizeBox_ClearMaxDesiredWidth_Params
{
};

// Function UMG.SizeBox.ClearMaxDesiredHeight
struct USizeBox_ClearMaxDesiredHeight_Params
{
};

// Function UMG.SizeBox.ClearMaxAspectRatio
struct USizeBox_ClearMaxAspectRatio_Params
{
};

// Function UMG.SizeBox.ClearHeightOverride
struct USizeBox_ClearHeightOverride_Params
{
};

// Function UMG.Viewport.Spawn
struct UViewport_Spawn_Params
{
	class UClass*                                      ActorClass;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Viewport.SetViewRotation
struct UViewport_SetViewRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Viewport.SetViewLocation
struct UViewport_SetViewLocation_Params
{
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Viewport.GetViewRotation
struct UViewport_GetViewRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Viewport.GetViewportWorld
struct UViewport_GetViewportWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Viewport.GetViewLocation
struct UViewport_GetViewLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.GridPanel.AddChildToGrid
struct UGridPanel_AddChildToGrid_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UGridSlot*                                   ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChildAt
struct UHorizontalBox_RemoveChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChild
struct UHorizontalBox_RemoveChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasChild
struct UHorizontalBox_HasChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasAnyChildren
struct UHorizontalBox_HasAnyChildren_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildrenCount
struct UHorizontalBox_GetChildrenCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildIndex
struct UHorizontalBox_GetChildIndex_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildAt
struct UHorizontalBox_GetChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.ClearChildren
struct UHorizontalBox_ClearChildren_Params
{
};

// Function UMG.PanelWidget.AddChild
struct UHorizontalBox_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPanelSlot*                                  ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChildAt
struct UOverlay_RemoveChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChild
struct UOverlay_RemoveChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasChild
struct UOverlay_HasChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasAnyChildren
struct UOverlay_HasAnyChildren_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildrenCount
struct UOverlay_GetChildrenCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildIndex
struct UOverlay_GetChildIndex_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildAt
struct UOverlay_GetChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.ClearChildren
struct UOverlay_ClearChildren_Params
{
};

// Function UMG.PanelWidget.AddChild
struct UOverlay_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPanelSlot*                                  ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.ScrollBox.SetScrollOffset
struct UScrollBox_SetScrollOffset_Params
{
	float                                              NewScrollOffset;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ScrollBox.ScrollWidgetIntoView
struct UScrollBox_ScrollWidgetIntoView_Params
{
	class UWidget*                                     WidgetToFind;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               AnimateScroll;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ScrollBox.ScrollToStart
struct UScrollBox_ScrollToStart_Params
{
};

// Function UMG.ScrollBox.ScrollToEnd
struct UScrollBox_ScrollToEnd_Params
{
};

// Function UMG.ScrollBox.GetScrollToEndOffset
struct UScrollBox_GetScrollToEndOffset_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.ScrollBox.GetScrollOffset
struct UScrollBox_GetScrollOffset_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UniformGridPanel.SetSlotPadding
struct UUniformGridPanel_SetSlotPadding_Params
{
	struct FMargin                                     InSlotPadding;                                            // (CPF_Parm)
};

// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
struct UUniformGridPanel_SetMinDesiredSlotWidth_Params
{
	float                                              InMinDesiredSlotWidth;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
struct UUniformGridPanel_SetMinDesiredSlotHeight_Params
{
	float                                              InMinDesiredSlotHeight;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UniformGridPanel.AddChildToUniformGrid
struct UUniformGridPanel_AddChildToUniformGrid_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UUniformGridSlot*                            ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChildAt
struct UVerticalBox_RemoveChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.RemoveChild
struct UVerticalBox_RemoveChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasChild
struct UVerticalBox_HasChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.HasAnyChildren
struct UVerticalBox_HasAnyChildren_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildrenCount
struct UVerticalBox_GetChildrenCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildIndex
struct UVerticalBox_GetChildIndex_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.GetChildAt
struct UVerticalBox_GetChildAt_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.PanelWidget.ClearChildren
struct UVerticalBox_ClearChildren_Params
{
};

// Function UMG.PanelWidget.AddChild
struct UVerticalBox_AddChild_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPanelSlot*                                  ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
struct UWidgetSwitcher_SetActiveWidgetIndex_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WidgetSwitcher.SetActiveWidget
struct UWidgetSwitcher_SetActiveWidget_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.WidgetSwitcher.GetWidgetAtIndex
struct UWidgetSwitcher_GetWidgetAtIndex_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.WidgetSwitcher.GetNumWidgets
struct UWidgetSwitcher_GetNumWidgets_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
struct UWidgetSwitcher_GetActiveWidgetIndex_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WrapBox.SetInnerSlotPadding
struct UWrapBox_SetInnerSlotPadding_Params
{
	struct FVector2D                                   InPadding;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.WrapBox.AddChildWrapBox
struct UWrapBox_AddChildWrapBox_Params
{
	class UWidget*                                     Content;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWrapBoxSlot*                                ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.ProgressBar.SetPercent
struct UProgressBar_SetPercent_Params
{
	float                                              InPercent;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ProgressBar.SetIsMarquee
struct UProgressBar_SetIsMarquee_Params
{
	bool                                               InbIsMarquee;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.ProgressBar.SetFillColorAndOpacity
struct UProgressBar_SetFillColorAndOpacity_Params
{
	struct FLinearColor                                InColor;                                                  // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.ScrollBar.SetState
struct UScrollBar_SetState_Params
{
	float                                              InOffsetFraction;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InThumbSizeFraction;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Slider.SetValue
struct USlider_SetValue_Params
{
	float                                              InValue;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Slider.SetStepSize
struct USlider_SetStepSize_Params
{
	float                                              InValue;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Slider.SetSliderHandleColor
struct USlider_SetSliderHandleColor_Params
{
	struct FLinearColor                                InValue;                                                  // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Slider.SetSliderBarColor
struct USlider_SetSliderBarColor_Params
{
	struct FLinearColor                                InValue;                                                  // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Slider.SetLocked
struct USlider_SetLocked_Params
{
	bool                                               InValue;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Slider.SetIndentHandle
struct USlider_SetIndentHandle_Params
{
	bool                                               InValue;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Slider.GetValue
struct USlider_GetValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Spacer.SetSize
struct USpacer_SetSize_Params
{
	struct FVector2D                                   InSize;                                                   // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.SpinBox.SetValue
struct USpinBox_SetValue_Params
{
	float                                              NewValue;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SpinBox.SetMinValue
struct USpinBox_SetMinValue_Params
{
	float                                              NewValue;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SpinBox.SetMinSliderValue
struct USpinBox_SetMinSliderValue_Params
{
	float                                              NewValue;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SpinBox.SetMaxValue
struct USpinBox_SetMaxValue_Params
{
	float                                              NewValue;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SpinBox.SetMaxSliderValue
struct USpinBox_SetMaxSliderValue_Params
{
	float                                              NewValue;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.SpinBox.SetForegroundColor
struct USpinBox_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                        // (CPF_Parm)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
struct USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
struct USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params
{
	float                                              InValue;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
struct USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params
{
};

// Function UMG.SpinBox.GetValue
struct USpinBox_GetValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.SpinBox.GetMinValue
struct USpinBox_GetMinValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.SpinBox.GetMinSliderValue
struct USpinBox_GetMinSliderValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.SpinBox.GetMaxValue
struct USpinBox_GetMaxValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.SpinBox.GetMaxSliderValue
struct USpinBox_GetMaxSliderValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.SpinBox.ClearMinValue
struct USpinBox_ClearMinValue_Params
{
};

// Function UMG.SpinBox.ClearMinSliderValue
struct USpinBox_ClearMinSliderValue_Params
{
};

// Function UMG.SpinBox.ClearMaxValue
struct USpinBox_ClearMaxValue_Params
{
};

// Function UMG.SpinBox.ClearMaxSliderValue
struct USpinBox_ClearMaxSliderValue_Params
{
};

// Function UMG.Widget.SetVisibility
struct UTableViewBase_SetVisibility_Params
{
};

// Function UMG.Widget.SetUserFocus
struct UTableViewBase_SetUserFocus_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetToolTipText
struct UTableViewBase_SetToolTipText_Params
{
	struct FText                                       InToolTipText;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.Widget.SetToolTip
struct UTableViewBase_SetToolTip_Params
{
	class UWidget*                                     Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderTranslation
struct UTableViewBase_SetRenderTranslation_Params
{
	struct FVector2D                                   Translation;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderTransformPivot
struct UTableViewBase_SetRenderTransformPivot_Params
{
	struct FVector2D                                   Pivot;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderTransform
struct UTableViewBase_SetRenderTransform_Params
{
	struct FWidgetTransform                            InTransform;                                              // (CPF_Parm)
};

// Function UMG.Widget.SetRenderShear
struct UTableViewBase_SetRenderShear_Params
{
	struct FVector2D                                   Shear;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderScale
struct UTableViewBase_SetRenderScale_Params
{
	struct FVector2D                                   Scale;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetRenderAngle
struct UTableViewBase_SetRenderAngle_Params
{
	float                                              Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetNavigationRule
struct UTableViewBase_SetNavigationRule_Params
{
	struct FName                                       WidgetToFocus;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetKeyboardFocus
struct UTableViewBase_SetKeyboardFocus_Params
{
};

// Function UMG.Widget.SetIsEnabled
struct UTableViewBase_SetIsEnabled_Params
{
	bool                                               bInIsEnabled;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetCursor
struct UTableViewBase_SetCursor_Params
{
	TEnumAsByte<EMouseCursor>                          InCursor;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.SetAllNavigationRules
struct UTableViewBase_SetAllNavigationRules_Params
{
	struct FName                                       WidgetToFocus;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.ResetCursor
struct UTableViewBase_ResetCursor_Params
{
};

// Function UMG.Widget.RemoveFromParent
struct UTableViewBase_RemoveFromParent_Params
{
};

// DelegateFunction UMG.Widget.OnReply__DelegateSignature
struct UTableViewBase_OnReply__DelegateSignature_Params
{
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
struct UTableViewBase_OnPointerEvent__DelegateSignature_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.Widget.IsVisible
struct UTableViewBase_IsVisible_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.IsHovered
struct UTableViewBase_IsHovered_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.InvalidateLayoutAndVolatility
struct UTableViewBase_InvalidateLayoutAndVolatility_Params
{
};

// Function UMG.Widget.HasUserFocusedDescendants
struct UTableViewBase_HasUserFocusedDescendants_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasUserFocus
struct UTableViewBase_HasUserFocus_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasMouseCapture
struct UTableViewBase_HasMouseCapture_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasKeyboardFocus
struct UTableViewBase_HasKeyboardFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasFocusedDescendants
struct UTableViewBase_HasFocusedDescendants_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.HasAnyUserFocus
struct UTableViewBase_HasAnyUserFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
struct UTableViewBase_GetWidget__DelegateSignature_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.Widget.GetVisibility
struct UTableViewBase_GetVisibility_Params
{
};

// DelegateFunction UMG.Widget.GetText__DelegateSignature
struct UTableViewBase_GetText__DelegateSignature_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
struct UTableViewBase_GetSlateVisibility__DelegateSignature_Params
{
};

// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
struct UTableViewBase_GetSlateColor__DelegateSignature_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
struct UTableViewBase_GetSlateBrush__DelegateSignature_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.Widget.GetParent
struct UTableViewBase_GetParent_Params
{
	class UPanelWidget*                                ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.Widget.GetOwningPlayer
struct UTableViewBase_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
struct UTableViewBase_GetMouseCursor__DelegateSignature_Params
{
	TEnumAsByte<EMouseCursor>                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
struct UTableViewBase_GetLinearColor__DelegateSignature_Params
{
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.GetIsEnabled
struct UTableViewBase_GetIsEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
struct UTableViewBase_GetInt32__DelegateSignature_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
struct UTableViewBase_GetFloat__DelegateSignature_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.Widget.GetDesiredSize
struct UTableViewBase_GetDesiredSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
struct UTableViewBase_GetCheckBoxState__DelegateSignature_Params
{
};

// Function UMG.Widget.GetCachedGeometry
struct UTableViewBase_GetCachedGeometry_Params
{
	struct FGeometry                                   ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GetBool__DelegateSignature
struct UTableViewBase_GetBool__DelegateSignature_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
struct UTableViewBase_GenerateWidgetForString__DelegateSignature_Params
{
	struct FString                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
struct UTableViewBase_GenerateWidgetForObject__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UWidget*                                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.Widget.ForceVolatile
struct UTableViewBase_ForceVolatile_Params
{
	bool                                               bForce;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Widget.ForceLayoutPrepass
struct UTableViewBase_ForceLayoutPrepass_Params
{
};

// DelegateFunction UMG.Widget.EventForWidget__DelegateSignature
struct UTableViewBase_EventForWidget__DelegateSignature_Params
{
	class UWidget*                                     BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.TileView.SetItemWidth
struct UTileView_SetItemWidth_Params
{
	float                                              Width;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.TileView.SetItemHeight
struct UTileView_SetItemHeight_Params
{
	float                                              Height;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.TileView.RequestListRefresh
struct UTileView_RequestListRefresh_Params
{
};

// Function UMG.MultiLineEditableText.SetText
struct UMultiLineEditableText_SetText_Params
{
	struct FText                                       InText;                                                   // (CPF_Parm)
};

// Function UMG.MultiLineEditableText.SetIsReadOnly
struct UMultiLineEditableText_SetIsReadOnly_Params
{
	bool                                               bReadOnly;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
struct UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
struct UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.MultiLineEditableText.GetText
struct UMultiLineEditableText_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.MultiLineEditableTextBox.SetText
struct UMultiLineEditableTextBox_SetText_Params
{
	struct FText                                       InText;                                                   // (CPF_Parm)
};

// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
struct UMultiLineEditableTextBox_SetIsReadOnly_Params
{
	bool                                               bReadOnly;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.MultiLineEditableTextBox.SetError
struct UMultiLineEditableTextBox_SetError_Params
{
	struct FText                                       InError;                                                  // (CPF_Parm)
};

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	TEnumAsByte<ETextCommit>                           CommitMethod;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
struct UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.MultiLineEditableTextBox.GetText
struct UMultiLineEditableTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.TextBlock.SetWrapTextAt
struct UTextBlock_SetWrapTextAt_Params
{
	float                                              InWrapTextAt;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.TextBlock.SetText
struct UTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   // (CPF_Parm)
};

// Function UMG.TextBlock.SetShadowOffset
struct UTextBlock_SetShadowOffset_Params
{
	struct FVector2D                                   InShadowOffset;                                           // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.TextBlock.SetShadowColorAndOpacity
struct UTextBlock_SetShadowColorAndOpacity_Params
{
	struct FLinearColor                                InShadowColorAndOpacity;                                  // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.TextBlock.SetOpacity
struct UTextBlock_SetOpacity_Params
{
	float                                              InOpacity;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.TextBlock.SetMinDesiredWidth
struct UTextBlock_SetMinDesiredWidth_Params
{
	float                                              InMinDesiredWidth;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.TextBlock.SetJustification
struct UTextBlock_SetJustification_Params
{
	TEnumAsByte<ETextJustify>                          InJustification;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.TextBlock.SetFont
struct UTextBlock_SetFont_Params
{
	struct FSlateFontInfo                              InFontInfo;                                               // (CPF_Parm)
};

// Function UMG.TextBlock.SetColorAndOpacity
struct UTextBlock_SetColorAndOpacity_Params
{
	struct FSlateColor                                 InColorAndOpacity;                                        // (CPF_Parm)
};

// Function UMG.TextBlock.GetText
struct UTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.Throbber.SetNumberOfPieces
struct UThrobber_SetNumberOfPieces_Params
{
	int                                                InNumberOfPieces;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Throbber.SetAnimateVertically
struct UThrobber_SetAnimateVertically_Params
{
	bool                                               bInAnimateVertically;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Throbber.SetAnimateOpacity
struct UThrobber_SetAnimateOpacity_Params
{
	bool                                               bInAnimateOpacity;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.Throbber.SetAnimateHorizontally
struct UThrobber_SetAnimateHorizontally_Params
{
	bool                                               bInAnimateHorizontally;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WidgetAnimation.GetStartTime
struct UWidgetAnimation_GetStartTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetAnimation.GetEndTime
struct UWidgetAnimation_GetEndTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetComponent.SetWidget
struct UWidgetComponent_SetWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.WidgetComponent.SetOwnerPlayer
struct UWidgetComponent_SetOwnerPlayer_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WidgetComponent.SetDrawSize
struct UWidgetComponent_SetDrawSize_Params
{
	struct FVector2D                                   Size;                                                     // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.WidgetComponent.SetBackgroundColor
struct UWidgetComponent_SetBackgroundColor_Params
{
	struct FLinearColor                                NewBackgroundColor;                                       // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.WidgetComponent.RequestRedraw
struct UWidgetComponent_RequestRedraw_Params
{
};

// Function UMG.WidgetComponent.GetUserWidgetObject
struct UWidgetComponent_GetUserWidgetObject_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.WidgetComponent.GetRenderTarget
struct UWidgetComponent_GetRenderTarget_Params
{
	class UTextureRenderTarget2D*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetComponent.GetOwnerPlayer
struct UWidgetComponent_GetOwnerPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetComponent.GetMaterialInstance
struct UWidgetComponent_GetMaterialInstance_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetComponent.GetDrawSize
struct UWidgetComponent_GetDrawSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.SetCustomHitResult
struct UWidgetInteractionComponent_SetCustomHitResult_Params
{
	struct FHitResult                                  HitResult;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.SendKeyChar
struct UWidgetInteractionComponent_SendKeyChar_Params
{
	struct FString                                     Characters;                                               // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bRepeat;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.ScrollWheel
struct UWidgetInteractionComponent_ScrollWheel_Params
{
	float                                              ScrollDelta;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.ReleasePointerKey
struct UWidgetInteractionComponent_ReleasePointerKey_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function UMG.WidgetInteractionComponent.ReleaseKey
struct UWidgetInteractionComponent_ReleaseKey_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.PressPointerKey
struct UWidgetInteractionComponent_PressPointerKey_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
};

// Function UMG.WidgetInteractionComponent.PressKey
struct UWidgetInteractionComponent_PressKey_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
	bool                                               bRepeat;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
struct UWidgetInteractionComponent_PressAndReleaseKey_Params
{
	struct FKey                                        Key;                                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
struct UWidgetInteractionComponent_IsOverInteractableWidget_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
struct UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
struct UWidgetInteractionComponent_IsOverFocusableWidget_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.GetLastHitResult
struct UWidgetInteractionComponent_GetLastHitResult_Params
{
	struct FHitResult                                  ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
struct UWidgetInteractionComponent_GetHoveredWidgetComponent_Params
{
	class UWidgetComponent*                            ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.WidgetInteractionComponent.Get2DHitLocation
struct UWidgetInteractionComponent_Get2DHitLocation_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.UnregisterInputComponent
struct UUserWidget_UnregisterInputComponent_Params
{
};

// Function UMG.UserWidget.Tick
struct UUserWidget_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float                                              InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForInputAction
struct UUserWidget_StopListeningForInputAction_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.StopListeningForAllInputActions
struct UUserWidget_StopListeningForAllInputActions_Params
{
};

// Function UMG.UserWidget.StopAnimation
struct UUserWidget_StopAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.StopAllAnimations
struct UUserWidget_StopAllAnimations_Params
{
};

// Function UMG.UserWidget.SetPositionInViewport
struct UUserWidget_SetPositionInViewport_Params
{
	struct FVector2D                                   Position;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bRemoveDPIScale;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetPlaybackSpeed
struct UUserWidget_SetPlaybackSpeed_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetPadding
struct UUserWidget_SetPadding_Params
{
	struct FMargin                                     InPadding;                                                // (CPF_Parm)
};

// Function UMG.UserWidget.SetOwningPlayer
struct UUserWidget_SetOwningPlayer_Params
{
	class APlayerController*                           LocalPlayerController;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetOwningLocalPlayer
struct UUserWidget_SetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                LocalPlayer;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetNumLoopsToPlay
struct UUserWidget_SetNumLoopsToPlay_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionPriority
struct UUserWidget_SetInputActionPriority_Params
{
	int                                                NewPriority;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetInputActionBlocking
struct UUserWidget_SetInputActionBlocking_Params
{
	bool                                               bShouldBlock;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetForegroundColor
struct UUserWidget_SetForegroundColor_Params
{
	struct FSlateColor                                 InForegroundColor;                                        // (CPF_Parm)
};

// Function UMG.UserWidget.SetDesiredSizeInViewport
struct UUserWidget_SetDesiredSizeInViewport_Params
{
	struct FVector2D                                   Size;                                                     // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetColorAndOpacity
struct UUserWidget_SetColorAndOpacity_Params
{
	struct FLinearColor                                InColorAndOpacity;                                        // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.SetAnchorsInViewport
struct UUserWidget_SetAnchorsInViewport_Params
{
	struct FAnchors                                    Anchors;                                                  // (CPF_Parm)
};

// Function UMG.UserWidget.SetAlignmentInViewport
struct UUserWidget_SetAlignmentInViewport_Params
{
	struct FVector2D                                   Alignment;                                                // (CPF_Parm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.ReverseAnimation
struct UUserWidget_ReverseAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.RemoveFromViewport
struct UUserWidget_RemoveFromViewport_Params
{
};

// Function UMG.UserWidget.RegisterInputComponent
struct UUserWidget_RegisterInputComponent_Params
{
};

// Function UMG.UserWidget.PreConstruct
struct UUserWidget_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.PlaySound
struct UUserWidget_PlaySound_Params
{
	class USoundBase*                                  SoundToPlay;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimationTo
struct UUserWidget_PlayAnimationTo_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              StartAtTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndAtTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.PlayAnimation
struct UUserWidget_PlayAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              StartAtTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumLoopsToPlay;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EUMGSequencePlayMode>                  PlayMode;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlaybackSpeed;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.PauseAnimation
struct UUserWidget_PauseAnimation_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnTouchStarted
struct UUserWidget_OnTouchStarted_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnTouchMoved
struct UUserWidget_OnTouchMoved_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnTouchGesture
struct UUserWidget_OnTouchGesture_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               GestureEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnTouchEnded
struct UUserWidget_OnTouchEnded_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               InTouchEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnPreviewMouseButtonDown
struct UUserWidget_OnPreviewMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnPreviewKeyDown
struct UUserWidget_OnPreviewKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnPaint
struct UUserWidget_OnPaint_Params
{
	struct FPaintContext                               Context;                                                  // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.UserWidget.OnMouseWheel
struct UUserWidget_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnMouseMove
struct UUserWidget_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnMouseLeave
struct UUserWidget_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.UserWidget.OnMouseEnter
struct UUserWidget_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.UserWidget.OnMouseButtonUp
struct UUserWidget_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDown
struct UUserWidget_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnMouseButtonDoubleClick
struct UUserWidget_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                             // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               InMouseEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnMotionDetected
struct UUserWidget_OnMotionDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FMotionEvent                                InMotionEvent;                                            // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnKeyUp
struct UUserWidget_OnKeyUp_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnKeyDown
struct UUserWidget_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FKeyEvent                                   InKeyEvent;                                               // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnKeyChar
struct UUserWidget_OnKeyChar_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FCharacterEvent                             InCharacterEvent;                                         // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnFocusReceived
struct UUserWidget_OnFocusReceived_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FFocusEvent                                 InFocusEvent;                                             // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnFocusLost
struct UUserWidget_OnFocusLost_Params
{
	struct FFocusEvent                                 InFocusEvent;                                             // (CPF_Parm)
};

// Function UMG.UserWidget.OnDrop
struct UUserWidget_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnDragOver
struct UUserWidget_OnDragOver_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnDragLeave
struct UUserWidget_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnDragEnter
struct UUserWidget_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (CPF_Parm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnDragDetected
struct UUserWidget_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent                               PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnDragCancelled
struct UUserWidget_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UDragDropOperation*                          Operation;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnControllerButtonReleased
struct UUserWidget_OnControllerButtonReleased_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FControllerEvent                            ControllerEvent;                                          // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnControllerButtonPressed
struct UUserWidget_OnControllerButtonPressed_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FControllerEvent                            ControllerEvent;                                          // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnControllerAnalogValueChanged
struct UUserWidget_OnControllerAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FControllerEvent                            ControllerEvent;                                          // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.OnAnimationStarted
struct UUserWidget_OnAnimationStarted_Params
{
	class UWidgetAnimation*                            Animation;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnAnimationFinished
struct UUserWidget_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.OnAnalogValueChanged
struct UUserWidget_OnAnalogValueChanged_Params
{
	struct FGeometry                                   MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FAnalogInputEvent                           InAnalogInputEvent;                                       // (CPF_Parm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.ListenForInputAction
struct UUserWidget_ListenForInputAction_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EInputEvent>                           EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bConsume;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_ZeroConstructor)
};

// Function UMG.UserWidget.IsPlayingAnimation
struct UUserWidget_IsPlayingAnimation_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.IsListeningForInputAction
struct UUserWidget_IsListeningForInputAction_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.IsInViewport
struct UUserWidget_IsInViewport_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.IsInteractable
struct UUserWidget_IsInteractable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.IsAnyAnimationPlaying
struct UUserWidget_IsAnyAnimationPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.IsAnimationPlaying
struct UUserWidget_IsAnimationPlaying_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningPlayerPawn
struct UUserWidget_GetOwningPlayerPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningPlayer
struct UUserWidget_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.GetOwningLocalPlayer
struct UUserWidget_GetOwningLocalPlayer_Params
{
	class ULocalPlayer*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.GetIsVisible
struct UUserWidget_GetIsVisible_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.GetAnimationCurrentTime
struct UUserWidget_GetAnimationCurrentTime_Params
{
	class UWidgetAnimation*                            InAnimation;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.GetAnchorsInViewport
struct UUserWidget_GetAnchorsInViewport_Params
{
	struct FAnchors                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function UMG.UserWidget.GetAlignmentInViewport
struct UUserWidget_GetAlignmentInViewport_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.FinishStoppedSequencePlayers
struct UUserWidget_FinishStoppedSequencePlayers_Params
{
};

// Function UMG.UserWidget.Destruct
struct UUserWidget_Destruct_Params
{
};

// Function UMG.UserWidget.Construct
struct UUserWidget_Construct_Params
{
};

// Function UMG.UserWidget.AddToViewport
struct UUserWidget_AddToViewport_Params
{
	int                                                ZOrder;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UMG.UserWidget.AddToPlayerScreen
struct UUserWidget_AddToPlayerScreen_Params
{
	int                                                ZOrder;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.AsyncTaskDownloadImage.DownloadImage
struct UAsyncTaskDownloadImage_DownloadImage_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_ZeroConstructor)
	class UAsyncTaskDownloadImage*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function UMG.DragDropOperation.Drop
struct UDragDropOperation_Drop_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.DragDropOperation.Dragged
struct UDragDropOperation_Dragged_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function UMG.DragDropOperation.DragCancelled
struct UDragDropOperation_DragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif