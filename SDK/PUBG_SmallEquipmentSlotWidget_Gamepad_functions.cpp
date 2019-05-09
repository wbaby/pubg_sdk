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

// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetSlotItem
// ()
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USmallEquipmentSlotWidget_Gamepad_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetSlotItem");

	USmallEquipmentSlotWidget_Gamepad_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetSlotContainer
// ()
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USmallEquipmentSlotWidget_Gamepad_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetSlotContainer");

	USmallEquipmentSlotWidget_Gamepad_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.IsSlotOn_Bp
// (FUNC_Final)
// Parameters:
// bool                           IsOn                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USmallEquipmentSlotWidget_Gamepad_C::IsSlotOn_Bp(bool* IsOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.IsSlotOn_Bp");

	USmallEquipmentSlotWidget_Gamepad_C_IsSlotOn_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOn != nullptr)
		*IsOn = params.IsOn;
}


// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.IsFocus
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USmallEquipmentSlotWidget_Gamepad_C::IsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.IsFocus");

	USmallEquipmentSlotWidget_Gamepad_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.SetFocus
// (FUNC_RequiredAPI)
// Parameters:
// bool                           NewFocus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USmallEquipmentSlotWidget_Gamepad_C::SetFocus(bool NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.SetFocus");

	USmallEquipmentSlotWidget_Gamepad_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetItem_Bp
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USmallEquipmentSlotWidget_Gamepad_C::GetItem_Bp(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetItem_Bp");

	USmallEquipmentSlotWidget_Gamepad_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.OnPreviewMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetRequest)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply USmallEquipmentSlotWidget_Gamepad_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.OnPreviewMouseButtonDown");

	USmallEquipmentSlotWidget_Gamepad_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetIcon
// (FUNC_NetReliable)
// Parameters:
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush USmallEquipmentSlotWidget_Gamepad_C::GetIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetIcon");

	USmallEquipmentSlotWidget_Gamepad_C_GetIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_NetReliable)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USmallEquipmentSlotWidget_Gamepad_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.OnDragDetected");

	USmallEquipmentSlotWidget_Gamepad_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetSlotName
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText USmallEquipmentSlotWidget_Gamepad_C::GetSlotName()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.GetSlotName");

	USmallEquipmentSlotWidget_Gamepad_C_GetSlotName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.OnUpdateItem
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UItem**                  Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USmallEquipmentSlotWidget_Gamepad_C::OnUpdateItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.OnUpdateItem");

	USmallEquipmentSlotWidget_Gamepad_C_OnUpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.Construct
// ()

void USmallEquipmentSlotWidget_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.Construct");

	USmallEquipmentSlotWidget_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.ExecuteUbergraph_SmallEquipmentSlotWidget_Gamepad
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USmallEquipmentSlotWidget_Gamepad_C::ExecuteUbergraph_SmallEquipmentSlotWidget_Gamepad(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SmallEquipmentSlotWidget_Gamepad.SmallEquipmentSlotWidget_Gamepad_C.ExecuteUbergraph_SmallEquipmentSlotWidget_Gamepad");

	USmallEquipmentSlotWidget_Gamepad_C_ExecuteUbergraph_SmallEquipmentSlotWidget_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
