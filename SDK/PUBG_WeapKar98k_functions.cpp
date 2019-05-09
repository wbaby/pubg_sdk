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

// Function WeapKar98k.WeapKar98k_C.UserConstructionScript
// ()

void AWeapKar98k_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapKar98k.WeapKar98k_C.UserConstructionScript");

	AWeapKar98k_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapKar98k.WeapKar98k_C.ReceiveBeginPlay
// ()

void AWeapKar98k_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapKar98k.WeapKar98k_C.ReceiveBeginPlay");

	AWeapKar98k_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapKar98k.WeapKar98k_C.ExecuteUbergraph_WeapKar98k
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeapKar98k_C::ExecuteUbergraph_WeapKar98k(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapKar98k.WeapKar98k_C.ExecuteUbergraph_WeapKar98k");

	AWeapKar98k_C_ExecuteUbergraph_WeapKar98k_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
