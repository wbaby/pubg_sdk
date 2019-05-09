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

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotItem
// ()
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotItem");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotContainer
// ()
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotContainer");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsBodyFocused
// (FUNC_Final)
// Parameters:
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsBodyFocused(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsBodyFocused");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsBodyFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsAttachmentSlotFocused
// (FUNC_Final)
// Parameters:
// bool                           res                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsAttachmentSlotFocused(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsAttachmentSlotFocused");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsAttachmentSlotFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsWeaponExist
// (FUNC_Final)
// Parameters:
// bool                           res                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsWeaponExist(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsWeaponExist");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsWeaponExist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.CanHandleInput
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_ver2_C::CanHandleInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.CanHandleInput");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_CanHandleInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ContainFocus
// (FUNC_Final)
// Parameters:
// bool                           res                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ContainFocus(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ContainFocus");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ContainFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocusToAttachment
// (FUNC_RequiredAPI)
// Parameters:
// bool*                          bFocus                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::SetFocusToAttachment(bool* bFocus, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocusToAttachment");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetFocusToAttachment_Params params;
	params.bFocus = bFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocusToBody
// (FUNC_RequiredAPI)
// Parameters:
// bool                           bFocus                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::SetFocusToBody(bool bFocus, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocusToBody");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetFocusToBody_Params params;
	params.bFocus = bFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetBackgroundState
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          State                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetBackgroundState(float* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetBackgroundState");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetBackgroundState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotSelected_Bp
// (FUNC_Final)
// Parameters:
// bool                           res                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsSlotSelected_Bp(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotSelected_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotSelected_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnSwap
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnSwap");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessSwap
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ProcessSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessSwap");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ProcessSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnPressedSwap
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnPressedSwap()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnPressedSwap");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnPressedSwap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessDrop
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ProcessDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessDrop");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ProcessDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.DropOrUnequipItem
// (FUNC_Final)
// Parameters:
// bool*                          bDrop                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::DropOrUnequipItem(bool* bDrop)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.DropOrUnequipItem");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DropOrUnequipItem_Params params;
	params.bDrop = bDrop;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDeatchOrDropAttachment
// (FUNC_RequiredAPI)
// Parameters:
// bool*                          bDetach                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          bAll                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnDeatchOrDropAttachment(bool* bDetach, bool* bAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDeatchOrDropAttachment");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDeatchOrDropAttachment_Params params;
	params.bDetach = bDetach;
	params.bAll = bAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ReleasedDropInput
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ReleasedDropInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ReleasedDropInput");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ReleasedDropInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedDropInput
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::PressedDropInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedDropInput");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_PressedDropInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessDetach
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ProcessDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessDetach");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ProcessDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ReleaseDetachInput
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ReleaseDetachInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ReleaseDetachInput");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ReleaseDetachInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedDetachInput
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::PressedDetachInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedDetachInput");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_PressedDetachInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetInventoryWidgetGamepad
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UInventoryWidget_Gamepad_C* NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetInventoryWidgetGamepad(class UInventoryWidget_Gamepad_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetInventoryWidgetGamepad");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetInventoryWidgetGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_BackgroundSlot_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::On_BackgroundSlot_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_BackgroundSlot_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_On_BackgroundSlot_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindLastFocusableWidget
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UUserWidget*             Widget                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::FindLastFocusableWidget(class UUserWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindLastFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_FindLastFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.HandleWidgetMoveRight
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::HandleWidgetMoveRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.HandleWidgetMoveRight");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_HandleWidgetMoveRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.HandleWidgetMoveLeft
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::HandleWidgetMoveLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.HandleWidgetMoveLeft");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_HandleWidgetMoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetFocusingChildWidget
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UUserWidget*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UUserWidget* UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetFocusingChildWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetFocusingChildWidget");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetFocusingChildWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetChildRightFocusableWidget
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UUserWidget*             RightWidget                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetChildRightFocusableWidget(class UUserWidget** RightWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetChildRightFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetChildRightFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RightWidget != nullptr)
		*RightWidget = params.RightWidget;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetChildLeftFocusableWidget
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UUserWidget*             Left_Widget                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetChildLeftFocusableWidget(class UUserWidget** Left_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetChildLeftFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetChildLeftFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Left_Widget != nullptr)
		*Left_Widget = params.Left_Widget;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsFocusable
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsFocusable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsFocusable");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindFirstFocusableWidget
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UUserWidget*             FocusableWidget                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::FindFirstFocusableWidget(class UUserWidget** FocusableWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindFirstFocusableWidget");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_FindFirstFocusableWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusableWidget != nullptr)
		*FocusableWidget = params.FocusableWidget;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsFocus
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsFocus");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocus
// (FUNC_RequiredAPI)
// Parameters:
// bool*                          NewFocus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponEquipmentSlotWidget_Gamepad_ver2_C::SetFocus(bool* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocus");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetDragDroppingEquipableItem
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UEquipableItem*          EquipableItem                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetDragDroppingEquipableItem(class UEquipableItem** EquipableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetDragDroppingEquipableItem");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetDragDroppingEquipableItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquipableItem != nullptr)
		*EquipableItem = params.EquipableItem;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindEquipableWeaponPosition
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FEquipPosition          WeaponPosition                 (CPF_Parm, CPF_OutParm)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::FindEquipableWeaponPosition(struct FEquipPosition* WeaponPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindEquipableWeaponPosition");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_FindEquipableWeaponPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponPosition != nullptr)
		*WeaponPosition = params.WeaponPosition;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.UpdateWeaponGunInfo
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::UpdateWeaponGunInfo(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.UpdateWeaponGunInfo");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_UpdateWeaponGunInfo_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetAmmoName
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FText                   ItemName                       (CPF_Parm, CPF_OutParm)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetAmmoName(struct FText* ItemName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetAmmoName");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetAmmoName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemName != nullptr)
		*ItemName = params.ItemName;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetAmmoIcon
// (FUNC_NetReliable)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetAmmoIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetAmmoIcon");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetAmmoIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetHandOnUnLoadedAmmoCount
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetHandOnUnLoadedAmmoCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetHandOnUnLoadedAmmoCount");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetHandOnUnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetHandOnLoadedAmmoCount
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            Count                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetHandOnLoadedAmmoCount(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetHandOnLoadedAmmoCount");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetHandOnLoadedAmmoCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_AmmoInfoLayer_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::On_AmmoInfoLayer_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_AmmoInfoLayer_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_On_AmmoInfoLayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnUpdateWeapon
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnUpdateWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnUpdateWeapon");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnUpdateWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_WeaponCaptureImage_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::On_WeaponCaptureImage_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_WeaponCaptureImage_Prepass_1");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_On_WeaponCaptureImage_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetItem_Bp
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetItem_Bp(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetItem_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotMouseOver_Bp
// (FUNC_Final)
// Parameters:
// bool                           IsMouseOver                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsSlotMouseOver_Bp(bool* IsMouseOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotMouseOver_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotMouseOver_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMouseOver != nullptr)
		*IsMouseOver = params.IsMouseOver;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotSubOn_Bp
// (FUNC_Final)
// Parameters:
// bool                           SubOn                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsSlotSubOn_Bp(bool* SubOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotSubOn_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotSubOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubOn != nullptr)
		*SubOn = params.SubOn;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotOn_Bp
// (FUNC_Final)
// Parameters:
// bool                           IsOn                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::IsSlotOn_Bp(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotOn_Bp");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetWeaponSlotEquipId
// (FUNC_Final)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetWeaponSlotEquipId()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetWeaponSlotEquipId");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetWeaponSlotEquipId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.InitializeWeaponEquipSlot
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::InitializeWeaponEquipSlot()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.InitializeWeaponEquipSlot");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_InitializeWeaponEquipSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotVisibility
// (FUNC_Final)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetSlotVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotVisibility");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetSlotVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetWeaponInfoText
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWeaponEquipmentSlotWidget_Gamepad_ver2_C::GetWeaponInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetWeaponInfoText");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetWeaponInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Construct
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Construct");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnUpdateItem
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UItem**                  Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnUpdateItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnUpdateItem");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnUpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetInventory
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UInventoryWidget_C**     InventoryWidget                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::SetInventory(class UInventoryWidget_C** InventoryWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetInventory");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetInventory_Params params;
	params.InventoryWidget = InventoryWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Tick
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Tick");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused_Event_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnAttachmentFocused_Event_1(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused_Event_1");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnAttachmentFocused_Event_1_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_17_OnAttachmentChanged__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::BndEvt__Muzzle_K2Node_ComponentBoundEvent_17_OnAttachmentChanged__DelegateSignature(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_17_OnAttachmentChanged__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BndEvt__Muzzle_K2Node_ComponentBoundEvent_17_OnAttachmentChanged__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::BndEvt__LowerRail_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BndEvt__LowerRail_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_102_OnAttachmentChanged__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::BndEvt__Magazine_K2Node_ComponentBoundEvent_102_OnAttachmentChanged__DelegateSignature(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_102_OnAttachmentChanged__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BndEvt__Magazine_K2Node_ComponentBoundEvent_102_OnAttachmentChanged__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_129_OnAttachmentChanged__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::BndEvt__UpperRail_K2Node_ComponentBoundEvent_129_OnAttachmentChanged__DelegateSignature(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_129_OnAttachmentChanged__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BndEvt__UpperRail_K2Node_ComponentBoundEvent_129_OnAttachmentChanged__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__Stock_K2Node_ComponentBoundEvent_157_OnAttachmentChanged__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::BndEvt__Stock_K2Node_ComponentBoundEvent_157_OnAttachmentChanged__DelegateSignature(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__Stock_K2Node_ComponentBoundEvent_157_OnAttachmentChanged__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BndEvt__Stock_K2Node_ComponentBoundEvent_157_OnAttachmentChanged__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__CantedSight_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::BndEvt__CantedSight_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__CantedSight_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BndEvt__CantedSight_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentChanged__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnAttachmentChanged__DelegateSignature(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentChanged__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnAttachmentChanged__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnWeaponEquipmentFocused__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnWeaponEquipmentFocused__DelegateSignature(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnWeaponEquipmentFocused__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnWeaponEquipmentFocused__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnAttachmentFocused__DelegateSignature(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnAttachmentFocused__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragLeaveWeaponSlot__DelegateSignature
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnDragLeaveWeaponSlot__DelegateSignature(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragLeaveWeaponSlot__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDragLeaveWeaponSlot__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragEnterWeaponSlot__DelegateSignature
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnDragEnterWeaponSlot__DelegateSignature(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragEnterWeaponSlot__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDragEnterWeaponSlot__DelegateSignature_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnReleased__DelegateSignature
// ()

void UWeaponEquipmentSlotWidget_Gamepad_ver2_C::OnReleased__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnReleased__DelegateSignature");

	UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnReleased__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
