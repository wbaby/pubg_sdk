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

// Function WeaponStudio.WeaponStudio_C.UserConstructionScript
// ()

void AWeaponStudio_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.UserConstructionScript");

	AWeaponStudio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.SetMeshTransform
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UMeshComponent**         Mesh                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeaponStudio_C::SetMeshTransform(class UMeshComponent** Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.SetMeshTransform");

	AWeaponStudio_C_SetMeshTransform_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponStudio.WeaponStudio_C.ExecuteUbergraph_WeaponStudio
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeaponStudio_C::ExecuteUbergraph_WeaponStudio(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponStudio.WeaponStudio_C.ExecuteUbergraph_WeaponStudio");

	AWeaponStudio_C_ExecuteUbergraph_WeaponStudio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
