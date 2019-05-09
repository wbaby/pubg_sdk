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

// Function PopupWidget.PopupWidget_C.OnGamepadButtonVisibilityPrepass
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWidget**                BoundWidget                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupWidget_C::OnGamepadButtonVisibilityPrepass(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidget.PopupWidget_C.OnGamepadButtonVisibilityPrepass");

	UPopupWidget_C_OnGamepadButtonVisibilityPrepass_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.SetPopup
// (FUNC_BlueprintCosmetic, FUNC_Net)
// Parameters:
// struct FText*                  Title                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FText*                  Message                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FScriptDelegate*        PressedDelegate                (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void UPopupWidget_C::SetPopup(struct FText* Title, struct FText* Message, struct FScriptDelegate* PressedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidget.PopupWidget_C.SetPopup");

	UPopupWidget_C_SetPopup_Params params;
	params.Title = Title;
	params.Message = Message;
	params.PressedDelegate = PressedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.Construct
// ()

void UPopupWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidget.PopupWidget_C.Construct");

	UPopupWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.Destruct
// ()

void UPopupWidget_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidget.PopupWidget_C.Destruct");

	UPopupWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.CustomEvent_1
// ()

void UPopupWidget_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidget.PopupWidget_C.CustomEvent_1");

	UPopupWidget_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPopupWidget_C::ExecuteUbergraph_PopupWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PopupWidget.PopupWidget_C.ExecuteUbergraph_PopupWidget");

	UPopupWidget_C_ExecuteUbergraph_PopupWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
