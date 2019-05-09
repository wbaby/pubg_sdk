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

// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotItem
// ()
// Parameters:
// TScriptInterface<class USlotInterface> SlotItem                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotItem");

	UBigEquipmentSlotWidget_C_GetSlotItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotItem != nullptr)
		*SlotItem = params.SlotItem;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotContainer
// ()
// Parameters:
// TScriptInterface<class USlotContainerInterface> SlotContainer                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotContainer");

	UBigEquipmentSlotWidget_C_GetSlotContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotContainer != nullptr)
		*SlotContainer = params.SlotContainer;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.IsSkinInteractionSlot
// (FUNC_Final)
// Parameters:
// bool                           bResult                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::IsSkinInteractionSlot(bool* bResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.IsSkinInteractionSlot");

	UBigEquipmentSlotWidget_C_IsSkinInteractionSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bResult != nullptr)
		*bResult = params.bResult;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.IsFocus
// (FUNC_Final)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBigEquipmentSlotWidget_C::IsFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.IsFocus");

	UBigEquipmentSlotWidget_C_IsFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.SetFocus
// (FUNC_RequiredAPI)
// Parameters:
// bool                           NewFocus                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UBigEquipmentSlotWidget_C::SetFocus(bool NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.SetFocus");

	UBigEquipmentSlotWidget_C_SetFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.On_FocusColorBG_Prepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::On_FocusColorBG_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.On_FocusColorBG_Prepass_1");

	UBigEquipmentSlotWidget_C_On_FocusColorBG_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetItem_Bp
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UItem*                   Item                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::GetItem_Bp(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetItem_Bp");

	UBigEquipmentSlotWidget_C_GetItem_Bp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetDurability
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          Durability                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::GetDurability(float* Durability)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetDurability");

	UBigEquipmentSlotWidget_C_GetDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Durability != nullptr)
		*Durability = params.Durability;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurationNumber
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::UpdateDurationNumber(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurationNumber");

	UBigEquipmentSlotWidget_C_UpdateDurationNumber_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurabilityGauge
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::UpdateDurabilityGauge(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurabilityGauge");

	UBigEquipmentSlotWidget_C_UpdateDurabilityGauge_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurabilityVisibility
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::UpdateDurabilityVisibility(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.UpdateDurabilityVisibility");

	UBigEquipmentSlotWidget_C_UpdateDurabilityVisibility_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnPreviewMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetRequest)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBigEquipmentSlotWidget_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnPreviewMouseButtonDown");

	UBigEquipmentSlotWidget_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.HaveDurability
// (FUNC_Final)
// Parameters:
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::HaveDurability(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.HaveDurability");

	UBigEquipmentSlotWidget_C_HaveDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetDurabilityPercent
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          DurabilityPercent              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::GetDurabilityPercent(float* DurabilityPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetDurabilityPercent");

	UBigEquipmentSlotWidget_C_GetDurabilityPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DurabilityPercent != nullptr)
		*DurabilityPercent = params.DurabilityPercent;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnDragDetected
// (FUNC_BlueprintCosmetic, FUNC_NetReliable)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          PointerEvent                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UDragDropOperation*      Operation                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent, class UDragDropOperation** Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnDragDetected");

	UBigEquipmentSlotWidget_C_OnDragDetected_Params params;
	params.MyGeometry = MyGeometry;
	params.PointerEvent = PointerEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Operation != nullptr)
		*Operation = params.Operation;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotName
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UBigEquipmentSlotWidget_C::GetSlotName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.GetSlotName");

	UBigEquipmentSlotWidget_C_GetSlotName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnUpdateItem
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UItem**                  Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::OnUpdateItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.OnUpdateItem");

	UBigEquipmentSlotWidget_C_OnUpdateItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.Construct
// ()

void UBigEquipmentSlotWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.Construct");

	UBigEquipmentSlotWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.ExecuteUbergraph_BigEquipmentSlotWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBigEquipmentSlotWidget_C::ExecuteUbergraph_BigEquipmentSlotWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BigEquipmentSlotWidget.BigEquipmentSlotWidget_C.ExecuteUbergraph_BigEquipmentSlotWidget");

	UBigEquipmentSlotWidget_C_ExecuteUbergraph_BigEquipmentSlotWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
