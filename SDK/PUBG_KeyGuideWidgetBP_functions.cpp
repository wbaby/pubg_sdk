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

// Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.Construct
// ()

void UKeyGuideWidgetBP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.Construct");

	UKeyGuideWidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// ()

void UKeyGuideWidgetBP_C::BndEvt__ButtonBack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UKeyGuideWidgetBP_C_BndEvt__ButtonBack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.EscapeEvent
// ()

void UKeyGuideWidgetBP_C::EscapeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.EscapeEvent");

	UKeyGuideWidgetBP_C_EscapeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.Tick
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyGuideWidgetBP_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.Tick");

	UKeyGuideWidgetBP_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.ExecuteUbergraph_KeyGuideWidgetBP
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyGuideWidgetBP_C::ExecuteUbergraph_KeyGuideWidgetBP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyGuideWidgetBP.KeyGuideWidgetBP_C.ExecuteUbergraph_KeyGuideWidgetBP");

	UKeyGuideWidgetBP_C_ExecuteUbergraph_KeyGuideWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
