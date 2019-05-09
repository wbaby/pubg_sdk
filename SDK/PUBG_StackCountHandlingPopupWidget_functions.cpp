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

// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.NewFunction_1
// ()

void UStackCountHandlingPopupWidget_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.NewFunction_1");

	UStackCountHandlingPopupWidget_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.NotifyToCapacityWidget
// ()

void UStackCountHandlingPopupWidget_C::NotifyToCapacityWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.NotifyToCapacityWidget");

	UStackCountHandlingPopupWidget_C_NotifyToCapacityWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.NotifyStackCountUpdated
// ()

void UStackCountHandlingPopupWidget_C::NotifyStackCountUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.NotifyStackCountUpdated");

	UStackCountHandlingPopupWidget_C_NotifyStackCountUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.AddStackCount
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           AddCount                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::AddStackCount(int* AddCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.AddStackCount");

	UStackCountHandlingPopupWidget_C_AddStackCount_Params params;
	params.AddCount = AddCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnPrepass_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::OnPrepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnPrepass_1");

	UStackCountHandlingPopupWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.FocusOnInputAmountText
// ()

void UStackCountHandlingPopupWidget_C::FocusOnInputAmountText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.FocusOnInputAmountText");

	UStackCountHandlingPopupWidget_C_FocusOnInputAmountText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.On_InputAmountText_Prepass
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::On_InputAmountText_Prepass(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.On_InputAmountText_Prepass");

	UStackCountHandlingPopupWidget_C_On_InputAmountText_Prepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetMaxButtonText
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UStackCountHandlingPopupWidget_C::GetMaxButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetMaxButtonText");

	UStackCountHandlingPopupWidget_C_GetMaxButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetInventory
// (FUNC_BlueprintCosmetic)
// Parameters:
// class AInventory*              Inventory                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::GetInventory(class AInventory** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetInventory");

	UStackCountHandlingPopupWidget_C_GetInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.UpdateItemName
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::UpdateItemName(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.UpdateItemName");

	UStackCountHandlingPopupWidget_C_UpdateItemName_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetMaxCount
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UStackCountHandlingPopupWidget_C::GetMaxCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.GetMaxCount");

	UStackCountHandlingPopupWidget_C_GetMaxCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnItemDropOtherContainer
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UItem**                  Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::OnItemDropOtherContainer(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnItemDropOtherContainer");

	UStackCountHandlingPopupWidget_C_OnItemDropOtherContainer_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.SetPopup
// (FUNC_BlueprintCosmetic, FUNC_Net)
// Parameters:
// struct FText*                  Title                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText*                  Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate*        PressedDelegate                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UStackCountHandlingPopupWidget_C::SetPopup(struct FText* Title, struct FText* Message, struct FScriptDelegate* PressedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.SetPopup");

	UStackCountHandlingPopupWidget_C_SetPopup_Params params;
	params.Title = Title;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// ()

void UStackCountHandlingPopupWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStackCountHandlingPopupWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Construct
// ()

void UStackCountHandlingPopupWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Construct");

	UStackCountHandlingPopupWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_1
// ()
// Parameters:
// TScriptInterface<class USlotContainerInterface>* Container                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotInterface>* Slot                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* OtherContainer                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::CustomEvent_1(TScriptInterface<class USlotContainerInterface>* Container, TScriptInterface<class USlotInterface>* Slot, TScriptInterface<class USlotContainerInterface>* OtherContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_1");

	UStackCountHandlingPopupWidget_C_CustomEvent_1_Params params;
	params.Container = Container;
	params.Slot = Slot;
	params.OtherContainer = OtherContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// ()

void UStackCountHandlingPopupWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UStackCountHandlingPopupWidget_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// ()

void UStackCountHandlingPopupWidget_C::BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UStackCountHandlingPopupWidget_C_BndEvt__InputAmountButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// ()

void UStackCountHandlingPopupWidget_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UStackCountHandlingPopupWidget_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// ()

void UStackCountHandlingPopupWidget_C::BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UStackCountHandlingPopupWidget_C_BndEvt__OuterPopup_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// ()

void UStackCountHandlingPopupWidget_C::BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");

	UStackCountHandlingPopupWidget_C_BndEvt__MinButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// ()

void UStackCountHandlingPopupWidget_C::BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UStackCountHandlingPopupWidget_C_BndEvt__MaxButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.SubmitEvent
// (FUNC_Final, FUNC_BlueprintCosmetic)
// Parameters:
// struct FText*                  Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::SubmitEvent(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.SubmitEvent");

	UStackCountHandlingPopupWidget_C_SubmitEvent_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Close Popup
// ()

void UStackCountHandlingPopupWidget_C::Close_Popup()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Close Popup");

	UStackCountHandlingPopupWidget_C_Close_Popup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Destruct
// ()

void UStackCountHandlingPopupWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Destruct");

	UStackCountHandlingPopupWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Custom Event_1
// ()

void UStackCountHandlingPopupWidget_C::Custom_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Custom Event_1");

	UStackCountHandlingPopupWidget_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.XBoxOneOk
// ()

void UStackCountHandlingPopupWidget_C::XBoxOneOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.XBoxOneOk");

	UStackCountHandlingPopupWidget_C_XBoxOneOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Tick
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.Tick");

	UStackCountHandlingPopupWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.ONWidgetInputB
// ()

void UStackCountHandlingPopupWidget_C::ONWidgetInputB()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.ONWidgetInputB");

	UStackCountHandlingPopupWidget_C_ONWidgetInputB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnWidgetMoveLeft
// ()

void UStackCountHandlingPopupWidget_C::OnWidgetMoveLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnWidgetMoveLeft");

	UStackCountHandlingPopupWidget_C_OnWidgetMoveLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_3
// ()

void UStackCountHandlingPopupWidget_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_3");

	UStackCountHandlingPopupWidget_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_4
// ()

void UStackCountHandlingPopupWidget_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_4");

	UStackCountHandlingPopupWidget_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_5
// ()

void UStackCountHandlingPopupWidget_C::CustomEvent_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_5");

	UStackCountHandlingPopupWidget_C_CustomEvent_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__InputAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FText*                  Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UStackCountHandlingPopupWidget_C::BndEvt__InputAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.BndEvt__InputAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature");

	UStackCountHandlingPopupWidget_C_BndEvt__InputAmountText_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnStackCountActionPerformed
// ()

void UStackCountHandlingPopupWidget_C::OnStackCountActionPerformed()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnStackCountActionPerformed");

	UStackCountHandlingPopupWidget_C_OnStackCountActionPerformed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_2
// ()

void UStackCountHandlingPopupWidget_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.CustomEvent_2");

	UStackCountHandlingPopupWidget_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnClose
// ()

void UStackCountHandlingPopupWidget_C::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnClose");

	UStackCountHandlingPopupWidget_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnOk
// ()

void UStackCountHandlingPopupWidget_C::OnOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnOk");

	UStackCountHandlingPopupWidget_C_OnOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.ExecuteUbergraph_StackCountHandlingPopupWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::ExecuteUbergraph_StackCountHandlingPopupWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.ExecuteUbergraph_StackCountHandlingPopupWidget");

	UStackCountHandlingPopupWidget_C_ExecuteUbergraph_StackCountHandlingPopupWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnStackCountUpdated__DelegateSignature
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// TScriptInterface<class USlotInterface>* SlotInterface                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TScriptInterface<class USlotContainerInterface>* SlotContainer                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int*                           StackCount                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UStackCountHandlingPopupWidget_C::OnStackCountUpdated__DelegateSignature(TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainer, int* StackCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function StackCountHandlingPopupWidget.StackCountHandlingPopupWidget_C.OnStackCountUpdated__DelegateSignature");

	UStackCountHandlingPopupWidget_C_OnStackCountUpdated__DelegateSignature_Params params;
	params.SlotInterface = SlotInterface;
	params.SlotContainer = SlotContainer;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
