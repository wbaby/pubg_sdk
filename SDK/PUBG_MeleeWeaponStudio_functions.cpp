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

// Function MeleeWeaponStudio.MeleeWeaponStudio_C.UpdateMaterial
// ()

void AMeleeWeaponStudio_C::UpdateMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponStudio.MeleeWeaponStudio_C.UpdateMaterial");

	AMeleeWeaponStudio_C_UpdateMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponStudio.MeleeWeaponStudio_C.OnLoaded
// ()

void AMeleeWeaponStudio_C::OnLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponStudio.MeleeWeaponStudio_C.OnLoaded");

	AMeleeWeaponStudio_C_OnLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponStudio.MeleeWeaponStudio_C.UserConstructionScript
// ()

void AMeleeWeaponStudio_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponStudio.MeleeWeaponStudio_C.UserConstructionScript");

	AMeleeWeaponStudio_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponStudio.MeleeWeaponStudio_C.SetItem
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UItem**                  Item                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMeleeWeaponStudio_C::SetItem(class UItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponStudio.MeleeWeaponStudio_C.SetItem");

	AMeleeWeaponStudio_C_SetItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MeleeWeaponStudio.MeleeWeaponStudio_C.ExecuteUbergraph_MeleeWeaponStudio
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMeleeWeaponStudio_C::ExecuteUbergraph_MeleeWeaponStudio(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MeleeWeaponStudio.MeleeWeaponStudio_C.ExecuteUbergraph_MeleeWeaponStudio");

	AMeleeWeaponStudio_C_ExecuteUbergraph_MeleeWeaponStudio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
