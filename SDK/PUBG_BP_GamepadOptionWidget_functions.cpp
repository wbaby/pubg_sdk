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

// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.UpdateCrosshairPreviewColor
// ()
// Parameters:
// struct FLinearColor*           InColor                        (CPF_Parm, CPF_IsPlainOldData)

void UBP_GamepadOptionWidget_C::UpdateCrosshairPreviewColor(struct FLinearColor* InColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.UpdateCrosshairPreviewColor");

	UBP_GamepadOptionWidget_C_UpdateCrosshairPreviewColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.IsChanged
// (FUNC_Final)
// Parameters:
// bool                           res                            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionWidget_C::IsChanged(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.IsChanged");

	UBP_GamepadOptionWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.ApplyOptions
// (FUNC_Final)
// Parameters:
// bool                           ApplyResult                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionWidget_C::ApplyOptions(bool* ApplyResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.ApplyOptions");

	UBP_GamepadOptionWidget_C_ApplyOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ApplyResult != nullptr)
		*ApplyResult = params.ApplyResult;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.ExitOption
// ()

void UBP_GamepadOptionWidget_C::ExitOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.ExitOption");

	UBP_GamepadOptionWidget_C_ExitOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.OnFocusReceived
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetReliable)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UBP_GamepadOptionWidget_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.OnFocusReceived");

	UBP_GamepadOptionWidget_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.Construct
// ()

void UBP_GamepadOptionWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.Construct");

	UBP_GamepadOptionWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__TabSelector_K2Node_ComponentBoundEvent_19_OnTabRotated__DelegateSignature
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           SelectedIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionWidget_C::BndEvt__TabSelector_K2Node_ComponentBoundEvent_19_OnTabRotated__DelegateSignature(int* SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__TabSelector_K2Node_ComponentBoundEvent_19_OnTabRotated__DelegateSignature");

	UBP_GamepadOptionWidget_C_BndEvt__TabSelector_K2Node_ComponentBoundEvent_19_OnTabRotated__DelegateSignature_Params params;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_1
// ()

void UBP_GamepadOptionWidget_C::CustomEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_1");

	UBP_GamepadOptionWidget_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_2
// ()

void UBP_GamepadOptionWidget_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_2");

	UBP_GamepadOptionWidget_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_3
// ()

void UBP_GamepadOptionWidget_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_3");

	UBP_GamepadOptionWidget_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_4
// ()

void UBP_GamepadOptionWidget_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_4");

	UBP_GamepadOptionWidget_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_5
// ()

void UBP_GamepadOptionWidget_C::CustomEvent_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.CustomEvent_5");

	UBP_GamepadOptionWidget_C_CustomEvent_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__BP_GamepadOptionGraphic_K2Node_ComponentBoundEvent_2_OnOptionContentButtonFocused__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UTslBaseOptionButtonWidget** Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionWidget_C::BndEvt__BP_GamepadOptionGraphic_K2Node_ComponentBoundEvent_2_OnOptionContentButtonFocused__DelegateSignature(class UTslBaseOptionButtonWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__BP_GamepadOptionGraphic_K2Node_ComponentBoundEvent_2_OnOptionContentButtonFocused__DelegateSignature");

	UBP_GamepadOptionWidget_C_BndEvt__BP_GamepadOptionGraphic_K2Node_ComponentBoundEvent_2_OnOptionContentButtonFocused__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__BP_GamepadOptionSound_K2Node_ComponentBoundEvent_4_OnOptionContentButtonFocused__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UTslBaseOptionButtonWidget** Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionWidget_C::BndEvt__BP_GamepadOptionSound_K2Node_ComponentBoundEvent_4_OnOptionContentButtonFocused__DelegateSignature(class UTslBaseOptionButtonWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__BP_GamepadOptionSound_K2Node_ComponentBoundEvent_4_OnOptionContentButtonFocused__DelegateSignature");

	UBP_GamepadOptionWidget_C_BndEvt__BP_GamepadOptionSound_K2Node_ComponentBoundEvent_4_OnOptionContentButtonFocused__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__BP_GamepadOptionControl_K2Node_ComponentBoundEvent_8_OnOptionContentButtonFocused__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UTslBaseOptionButtonWidget** Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionWidget_C::BndEvt__BP_GamepadOptionControl_K2Node_ComponentBoundEvent_8_OnOptionContentButtonFocused__DelegateSignature(class UTslBaseOptionButtonWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__BP_GamepadOptionControl_K2Node_ComponentBoundEvent_8_OnOptionContentButtonFocused__DelegateSignature");

	UBP_GamepadOptionWidget_C_BndEvt__BP_GamepadOptionControl_K2Node_ComponentBoundEvent_8_OnOptionContentButtonFocused__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__BP_GamepadOptionGameplay_K2Node_ComponentBoundEvent_12_OnOptionContentButtonFocused__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UTslBaseOptionButtonWidget** Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionWidget_C::BndEvt__BP_GamepadOptionGameplay_K2Node_ComponentBoundEvent_12_OnOptionContentButtonFocused__DelegateSignature(class UTslBaseOptionButtonWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.BndEvt__BP_GamepadOptionGameplay_K2Node_ComponentBoundEvent_12_OnOptionContentButtonFocused__DelegateSignature");

	UBP_GamepadOptionWidget_C_BndEvt__BP_GamepadOptionGameplay_K2Node_ComponentBoundEvent_12_OnOptionContentButtonFocused__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.Tick
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.Tick");

	UBP_GamepadOptionWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.Custom Event_1
// ()

void UBP_GamepadOptionWidget_C::Custom_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.Custom Event_1");

	UBP_GamepadOptionWidget_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.ExecuteUbergraph_BP_GamepadOptionWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionWidget_C::ExecuteUbergraph_BP_GamepadOptionWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionWidget.BP_GamepadOptionWidget_C.ExecuteUbergraph_BP_GamepadOptionWidget");

	UBP_GamepadOptionWidget_C_ExecuteUbergraph_BP_GamepadOptionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
