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

// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Get_TextCancel_Text_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FText                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FText UPopupWidgetForReplay_C::Get_TextCancel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Get_TextCancel_Text_1");

	UPopupWidgetForReplay_C_Get_TextCancel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature
// ()

void UPopupWidgetForReplay_C::BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature");

	UPopupWidgetForReplay_C_BndEvt__ButtonOK_K2Node_ComponentBoundEvent_85_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// ()

void UPopupWidgetForReplay_C::BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature");

	UPopupWidgetForReplay_C_BndEvt__ButtonCancel_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Construct
// ()

void UPopupWidgetForReplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Construct");

	UPopupWidgetForReplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Custom Event_1
// ()

void UPopupWidgetForReplay_C::Custom_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Custom Event_1");

	UPopupWidgetForReplay_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Destruct
// ()

void UPopupWidgetForReplay_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Destruct");

	UPopupWidgetForReplay_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.XBoxOneOk
// ()

void UPopupWidgetForReplay_C::XBoxOneOk()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.XBoxOneOk");

	UPopupWidgetForReplay_C_XBoxOneOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.SetPopup
// (FUNC_BlueprintCosmetic, FUNC_Net)
// Parameters:
// struct FText*                  Title                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText*                  Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate*        PressedDelegate                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UPopupWidgetForReplay_C::SetPopup(struct FText* Title, struct FText* Message, struct FScriptDelegate* PressedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.SetPopup");

	UPopupWidgetForReplay_C_SetPopup_Params params;
	params.Title = Title;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.Tick
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupWidgetForReplay_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.Tick");

	UPopupWidgetForReplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.ExecuteUbergraph_PopupWidgetForReplay
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupWidgetForReplay_C::ExecuteUbergraph_PopupWidgetForReplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.ExecuteUbergraph_PopupWidgetForReplay");

	UPopupWidgetForReplay_C_ExecuteUbergraph_PopupWidgetForReplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.HideMyself__DelegateSignature
// ()

void UPopupWidgetForReplay_C::HideMyself__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.HideMyself__DelegateSignature");

	UPopupWidgetForReplay_C_HideMyself__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonClickDispatcher__DelegateSignature
// (FUNC_Final)

void UPopupWidgetForReplay_C::ButtonClickDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonClickDispatcher__DelegateSignature");

	UPopupWidgetForReplay_C_ButtonClickDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
