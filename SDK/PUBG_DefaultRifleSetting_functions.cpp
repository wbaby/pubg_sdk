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

// Function DefaultRifleSetting.DefaultRifleSetting_C.UserConstructionScript
// ()

void ADefaultRifleSetting_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultRifleSetting.DefaultRifleSetting_C.UserConstructionScript");

	ADefaultRifleSetting_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultRifleSetting.DefaultRifleSetting_C.ExecuteUbergraph_DefaultRifleSetting
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ADefaultRifleSetting_C::ExecuteUbergraph_DefaultRifleSetting(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultRifleSetting.DefaultRifleSetting_C.ExecuteUbergraph_DefaultRifleSetting");

	ADefaultRifleSetting_C_ExecuteUbergraph_DefaultRifleSetting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
