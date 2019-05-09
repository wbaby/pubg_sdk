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

// Function TslGame.TslGameOptionWidget.UpdateDefaultButtonTextColor
struct UBP_PcOptionWidget_C_UpdateDefaultButtonTextColor_Params
{
};

// Function TslGame.TslGameOptionWidget.UpdateCancelButtonTextColor
struct UBP_PcOptionWidget_C_UpdateCancelButtonTextColor_Params
{
};

// Function TslGame.TslGameOptionWidget.OnUnsavedChangesPopupButtonPressed
struct UBP_PcOptionWidget_C_OnUnsavedChangesPopupButtonPressed_Params
{
};

// Function TslGame.TslGameOptionWidget.OnTabLabelSelected
struct UBP_PcOptionWidget_C_OnTabLabelSelected_Params
{
	struct FName                                       SelectedTabName;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOptionWidget.OnStepperItemWidgetUpdate
struct UBP_PcOptionWidget_C_OnStepperItemWidgetUpdate_Params
{
	class UTslGameOptionItemWidget*                    Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bIsChanged;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsDefault;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StepperIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOptionWidget.OnSliderItemWidgetUpdate
struct UBP_PcOptionWidget_C_OnSliderItemWidgetUpdate_Params
{
	class UTslGameOptionItemWidget*                    Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bIsChanged;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsDefault;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RawValue;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOptionWidget.OnKeyBinderItemWidgetUpdate
struct UBP_PcOptionWidget_C_OnKeyBinderItemWidgetUpdate_Params
{
	class UTslGameOptionItemWidget*                    Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bIsChanged;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsDefault;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTslInputKey                                InputKey;                                                 // (CPF_Parm)
};

// Function TslGame.TslGameOptionWidget.OnDropDownListItemWidgetUpdate
struct UBP_PcOptionWidget_C_OnDropDownListItemWidgetUpdate_Params
{
	class UTslGameOptionItemWidget*                    Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bIsChanged;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsDefault;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ListIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslGameOptionWidget.OnDefaultButtonClicked
struct UBP_PcOptionWidget_C_OnDefaultButtonClicked_Params
{
};

// Function TslGame.TslGameOptionWidget.OnCancelButtonClicked
struct UBP_PcOptionWidget_C_OnCancelButtonClicked_Params
{
};

// Function TslGame.TslGameOptionWidget.OnApplyButtonClicked
struct UBP_PcOptionWidget_C_OnApplyButtonClicked_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
