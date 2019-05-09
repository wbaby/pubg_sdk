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

// Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.PreConstruct
// (FUNC_Final)
// Parameters:
// bool                           IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcSystemMenuButtonWidget_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.PreConstruct");

	UBP_PcSystemMenuButtonWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.BndEvt__Button_Internal_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// ()

void UBP_PcSystemMenuButtonWidget_C::BndEvt__Button_Internal_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.BndEvt__Button_Internal_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_PcSystemMenuButtonWidget_C_BndEvt__Button_Internal_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.ExecuteUbergraph_BP_PcSystemMenuButtonWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcSystemMenuButtonWidget_C::ExecuteUbergraph_BP_PcSystemMenuButtonWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.ExecuteUbergraph_BP_PcSystemMenuButtonWidget");

	UBP_PcSystemMenuButtonWidget_C_ExecuteUbergraph_BP_PcSystemMenuButtonWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.OnClicked__DelegateSignature
// ()

void UBP_PcSystemMenuButtonWidget_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcSystemMenuButtonWidget.BP_PcSystemMenuButtonWidget_C.OnClicked__DelegateSignature");

	UBP_PcSystemMenuButtonWidget_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
