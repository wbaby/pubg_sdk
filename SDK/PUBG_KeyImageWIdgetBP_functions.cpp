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

// Function KeyImageWIdgetBP.KeyImageWIdgetBP_C.PreConstruct
// (FUNC_Final)
// Parameters:
// bool                           IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyImageWIdgetBP_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWIdgetBP.KeyImageWIdgetBP_C.PreConstruct");

	UKeyImageWIdgetBP_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeyImageWIdgetBP.KeyImageWIdgetBP_C.ExecuteUbergraph_KeyImageWIdgetBP
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UKeyImageWIdgetBP_C::ExecuteUbergraph_KeyImageWIdgetBP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KeyImageWIdgetBP.KeyImageWIdgetBP_C.ExecuteUbergraph_KeyImageWIdgetBP");

	UKeyImageWIdgetBP_C_ExecuteUbergraph_KeyImageWIdgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
