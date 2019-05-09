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

// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotItem
// ()
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotItem");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotContainer
// ()
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotContainer");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.CanHandleInput
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::CanHandleInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.CanHandleInput");

	UWeaponAttachmentSlotWidget_Gamepad_C_CanHandleInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetBackgroundState
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          State                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetBackgroundState(float* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetBackgroundState");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetBackgroundState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotSelected_Bp
// (FUNC_Final)
// Parameters:
// bool                           res                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::IsSlotSelected_Bp(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotSelected_Bp");

	UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotSelected_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotSubOn_Bp
// (FUNC_Final)
// Parameters:
// bool                           SubOn                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::IsSlotSubOn_Bp(bool* SubOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotSubOn_Bp");

	UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotSubOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubOn != nullptr)
		*SubOn = params.SubOn;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputY
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::InputY()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputY");

	UWeaponAttachmentSlotWidget_Gamepad_C_InputY_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputX
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::InputX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputX");

	UWeaponAttachmentSlotWidget_Gamepad_C_InputX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetInventoryWidgetGamepad
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UInventoryWidget_Gamepad_C* NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetInventoryWidgetGamepad(class UInventoryWidget_Gamepad_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetInventoryWidgetGamepad");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetInventoryWidgetGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.On_AttachmentSlotBackground_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::On_AttachmentSlotBackground_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.On_AttachmentSlotBackground_Prepass_1");

	UWeaponAttachmentSlotWidget_Gamepad_C_On_AttachmentSlotBackground_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsFocusable
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::IsFocusable()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsFocusable");

	UWeaponAttachmentSlotWidget_Gamepad_C_IsFocusable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsFocus
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::IsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsFocus");

	UWeaponAttachmentSlotWidget_Gamepad_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputB
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::InputB()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputB");

	UWeaponAttachmentSlotWidget_Gamepad_C_InputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputA
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::InputA()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.InputA");

	UWeaponAttachmentSlotWidget_Gamepad_C_InputA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.SetFocus
// (FUNC_RequiredAPI)
// Parameters:
// bool*                          NewFocus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UWeaponAttachmentSlotWidget_Gamepad_C::SetFocus(bool* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.SetFocus");

	UWeaponAttachmentSlotWidget_Gamepad_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetDragDroppingAttachableItem
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UAttachableItem*         DragDroppingAttachableItem     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetDragDroppingAttachableItem(class UAttachableItem** DragDroppingAttachableItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetDragDroppingAttachableItem");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetDragDroppingAttachableItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DragDroppingAttachableItem != nullptr)
		*DragDroppingAttachableItem = params.DragDroppingAttachableItem;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnPrepass_2
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::OnPrepass_2(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnPrepass_2");

	UWeaponAttachmentSlotWidget_Gamepad_C_OnPrepass_2_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.On_AttachmentIcon_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::On_AttachmentIcon_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.On_AttachmentIcon_Prepass_1");

	UWeaponAttachmentSlotWidget_Gamepad_C_On_AttachmentIcon_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotMouseOver_Bp
// (FUNC_Final)
// Parameters:
// bool                           IsMouseOver                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::IsSlotMouseOver_Bp(bool* IsMouseOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotMouseOver_Bp");

	UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotMouseOver_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMouseOver != nullptr)
		*IsMouseOver = params.IsMouseOver;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnPrepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::OnPrepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnPrepass_1");

	UWeaponAttachmentSlotWidget_Gamepad_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetItem_Bp
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetItem_Bp(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetItem_Bp");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotOn_Bp
// (FUNC_Final)
// Parameters:
// bool                           IsOn                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::IsSlotOn_Bp(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.IsSlotOn_Bp");

	UWeaponAttachmentSlotWidget_Gamepad_C_IsSlotOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetAttachmentItem
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UAttachableItem*         AttachmentItem                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetAttachmentItem(class UAttachableItem** AttachmentItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetAttachmentItem");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetAttachmentItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachmentItem != nullptr)
		*AttachmentItem = params.AttachmentItem;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.HasAttachmentSlot
// (FUNC_Final)
// Parameters:
// bool                           HasAttachmentSlot              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::HasAttachmentSlot(bool* HasAttachmentSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.HasAttachmentSlot");

	UWeaponAttachmentSlotWidget_Gamepad_C_HasAttachmentSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasAttachmentSlot != nullptr)
		*HasAttachmentSlot = params.HasAttachmentSlot;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.MainPrepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::MainPrepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.MainPrepass_1");

	UWeaponAttachmentSlotWidget_Gamepad_C_MainPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotVisibility
// (FUNC_Final)

void UWeaponAttachmentSlotWidget_Gamepad_C::GetSlotVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotVisibility");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotIcon
// (FUNC_NetReliable)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UWeaponAttachmentSlotWidget_Gamepad_C::GetSlotIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetSlotIcon");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetSlotIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetAttachmentNameText
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UWeaponAttachmentSlotWidget_Gamepad_C::GetAttachmentNameText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.GetAttachmentNameText");

	UWeaponAttachmentSlotWidget_Gamepad_C_GetAttachmentNameText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.Construct
// ()

void UWeaponAttachmentSlotWidget_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.Construct");

	UWeaponAttachmentSlotWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad");

	UWeaponAttachmentSlotWidget_Gamepad_C_ExecuteUbergraph_WeaponAttachmentSlotWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnAttachmentChanged__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::OnAttachmentChanged__DelegateSignature(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnAttachmentChanged__DelegateSignature");

	UWeaponAttachmentSlotWidget_Gamepad_C_OnAttachmentChanged__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnAttachmentFocused__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainerInterface         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWeaponAttachmentSlotWidget_Gamepad_C::OnAttachmentFocused__DelegateSignature(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponAttachmentSlotWidget_Gamepad.WeaponAttachmentSlotWidget_Gamepad_C.OnAttachmentFocused__DelegateSignature");

	UWeaponAttachmentSlotWidget_Gamepad_C_OnAttachmentFocused__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainerInterface = SlotContainerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
