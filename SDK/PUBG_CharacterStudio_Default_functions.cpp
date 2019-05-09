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

// Function CharacterStudio_Default.CharacterStudio_Default_C.UserConstructionScript
// ()

void ACharacterStudio_Default_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterStudio_Default.CharacterStudio_Default_C.UserConstructionScript");

	ACharacterStudio_Default_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStudio_Default.CharacterStudio_Default_C.ReceiveTick
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterStudio_Default_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterStudio_Default.CharacterStudio_Default_C.ReceiveTick");

	ACharacterStudio_Default_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStudio_Default.CharacterStudio_Default_C.ReceiveDestroyed
// ()

void ACharacterStudio_Default_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterStudio_Default.CharacterStudio_Default_C.ReceiveDestroyed");

	ACharacterStudio_Default_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStudio_Default.CharacterStudio_Default_C.ExecuteUbergraph_CharacterStudio_Default
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACharacterStudio_Default_C::ExecuteUbergraph_CharacterStudio_Default(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterStudio_Default.CharacterStudio_Default_C.ExecuteUbergraph_CharacterStudio_Default");

	ACharacterStudio_Default_C_ExecuteUbergraph_CharacterStudio_Default_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif