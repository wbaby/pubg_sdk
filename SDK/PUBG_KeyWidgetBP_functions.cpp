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

// Function KeyWidgetBP.KeyWidgetBP_C.PreConstruct
// (FUNC_Final)
// Parameters:
// bool                           IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyWidgetBP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidgetBP.KeyWidgetBP_C.PreConstruct");

	UKeyWidgetBP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyWidgetBP.KeyWidgetBP_C.ExecuteUbergraph_KeyWidgetBP
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyWidgetBP_C::ExecuteUbergraph_KeyWidgetBP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyWidgetBP.KeyWidgetBP_C.ExecuteUbergraph_KeyWidgetBP");

	UKeyWidgetBP_C_ExecuteUbergraph_KeyWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
