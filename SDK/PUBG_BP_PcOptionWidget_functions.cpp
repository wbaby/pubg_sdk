// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGame.TslGameOptionWidget.UpdateDefaultButtonTextColor
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_PcOptionWidget_C::UpdateDefaultButtonTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionWidget.UpdateDefaultButtonTextColor");

	UBP_PcOptionWidget_C_UpdateDefaultButtonTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionWidget.UpdateCancelButtonTextColor
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_PcOptionWidget_C::UpdateCancelButtonTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionWidget.UpdateCancelButtonTextColor");

	UBP_PcOptionWidget_C_UpdateCancelButtonTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionWidget.OnUnsavedChangesPopupButtonPressed
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_PcOptionWidget_C::OnUnsavedChangesPopupButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionWidget.OnUnsavedChangesPopupButtonPressed");

	UBP_PcOptionWidget_C_OnUnsavedChangesPopupButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionWidget.OnTabLabelSelected
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   SelectedTabName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionWidget_C::OnTabLabelSelected(const struct FName& SelectedTabName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionWidget.OnTabLabelSelected");

	UBP_PcOptionWidget_C_OnTabLabelSelected_Params params;
	params.SelectedTabName = SelectedTabName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionWidget.OnStepperItemWidgetUpdate
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UTslGameOptionItemWidget* Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bIsChanged                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsDefault                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StepperIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionWidget_C::OnStepperItemWidgetUpdate(class UTslGameOptionItemWidget* Widget, bool bIsChanged, bool bIsDefault, int StepperIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionWidget.OnStepperItemWidgetUpdate");

	UBP_PcOptionWidget_C_OnStepperItemWidgetUpdate_Params params;
	params.Widget = Widget;
	params.bIsChanged = bIsChanged;
	params.bIsDefault = bIsDefault;
	params.StepperIndex = StepperIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionWidget.OnSliderItemWidgetUpdate
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UTslGameOptionItemWidget* Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bIsChanged                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsDefault                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          RawValue                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionWidget_C::OnSliderItemWidgetUpdate(class UTslGameOptionItemWidget* Widget, bool bIsChanged, bool bIsDefault, float RawValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionWidget.OnSliderItemWidgetUpdate");

	UBP_PcOptionWidget_C_OnSliderItemWidgetUpdate_Params params;
	params.Widget = Widget;
	params.bIsChanged = bIsChanged;
	params.bIsDefault = bIsDefault;
	params.RawValue = RawValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionWidget.OnKeyBinderItemWidgetUpdate
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UTslGameOptionItemWidget* Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bIsChanged                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsDefault                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            InputKey                       (CPF_Parm)

void UBP_PcOptionWidget_C::OnKeyBinderItemWidgetUpdate(class UTslGameOptionItemWidget* Widget, bool bIsChanged, bool bIsDefault, int SlotIndex, const struct FTslInputKey& InputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionWidget.OnKeyBinderItemWidgetUpdate");

	UBP_PcOptionWidget_C_OnKeyBinderItemWidgetUpdate_Params params;
	params.Widget = Widget;
	params.bIsChanged = bIsChanged;
	params.bIsDefault = bIsDefault;
	params.SlotIndex = SlotIndex;
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionWidget.OnDropDownListItemWidgetUpdate
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UTslGameOptionItemWidget* Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bIsChanged                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsDefault                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ListIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionWidget_C::OnDropDownListItemWidgetUpdate(class UTslGameOptionItemWidget* Widget, bool bIsChanged, bool bIsDefault, int ListIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionWidget.OnDropDownListItemWidgetUpdate");

	UBP_PcOptionWidget_C_OnDropDownListItemWidgetUpdate_Params params;
	params.Widget = Widget;
	params.bIsChanged = bIsChanged;
	params.bIsDefault = bIsDefault;
	params.ListIndex = ListIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionWidget.OnDefaultButtonClicked
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_PcOptionWidget_C::OnDefaultButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionWidget.OnDefaultButtonClicked");

	UBP_PcOptionWidget_C_OnDefaultButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionWidget.OnCancelButtonClicked
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_PcOptionWidget_C::OnCancelButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionWidget.OnCancelButtonClicked");

	UBP_PcOptionWidget_C_OnCancelButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionWidget.OnApplyButtonClicked
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_PcOptionWidget_C::OnApplyButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionWidget.OnApplyButtonClicked");

	UBP_PcOptionWidget_C_OnApplyButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
