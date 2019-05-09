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

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.AreComponentMaterialsLoaded
// (FUNC_Final)
// Parameters:
// bool                           Loaded                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_WeaponDisplay_C::AreComponentMaterialsLoaded(bool* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDisplay.BP_WeaponDisplay_C.AreComponentMaterialsLoaded");

	ABP_WeaponDisplay_C_AreComponentMaterialsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loaded != nullptr)
		*Loaded = params.Loaded;
}


// Function BP_WeaponDisplay.BP_WeaponDisplay_C.SetComponentMeshVisibility
// (FUNC_BlueprintCosmetic)
// Parameters:
// bool*                          visible                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int*                           Limit                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_WeaponDisplay_C::SetComponentMeshVisibility(bool* visible, int* Limit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDisplay.BP_WeaponDisplay_C.SetComponentMeshVisibility");

	ABP_WeaponDisplay_C_SetComponentMeshVisibility_Params params;
	params.visible = visible;
	params.Limit = Limit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponDisplay.BP_WeaponDisplay_C.GetTransitionOrigin
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic)
// Parameters:
// struct FVector                 TransitionOrigin               (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void ABP_WeaponDisplay_C::GetTransitionOrigin(struct FVector* TransitionOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDisplay.BP_WeaponDisplay_C.GetTransitionOrigin");

	ABP_WeaponDisplay_C_GetTransitionOrigin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TransitionOrigin != nullptr)
		*TransitionOrigin = params.TransitionOrigin;
}


// Function BP_WeaponDisplay.BP_WeaponDisplay_C.CompareRotations
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic)
// Parameters:
// struct FRotator*               RotA                           (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator*               RotB                           (CPF_Parm, CPF_IsPlainOldData)
// float                          Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_WeaponDisplay_C::CompareRotations(struct FRotator* RotA, struct FRotator* RotB, float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDisplay.BP_WeaponDisplay_C.CompareRotations");

	ABP_WeaponDisplay_C_CompareRotations_Params params;
	params.RotA = RotA;
	params.RotB = RotB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_WeaponDisplay.BP_WeaponDisplay_C.UserConstructionScript
// ()

void ABP_WeaponDisplay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDisplay.BP_WeaponDisplay_C.UserConstructionScript");

	ABP_WeaponDisplay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponDisplay.BP_WeaponDisplay_C.ReceiveBeginPlay
// ()

void ABP_WeaponDisplay_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDisplay.BP_WeaponDisplay_C.ReceiveBeginPlay");

	ABP_WeaponDisplay_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponDisplay.BP_WeaponDisplay_C.ReceiveTick
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_WeaponDisplay_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDisplay.BP_WeaponDisplay_C.ReceiveTick");

	ABP_WeaponDisplay_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponDisplay.BP_WeaponDisplay_C.Update Effect
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         Delta_Seconds                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_WeaponDisplay_C::Update_Effect(float* Delta_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDisplay.BP_WeaponDisplay_C.Update Effect");

	ABP_WeaponDisplay_C_Update_Effect_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponDisplay.BP_WeaponDisplay_C.OnPlayAnimation
// ()

void ABP_WeaponDisplay_C::OnPlayAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDisplay.BP_WeaponDisplay_C.OnPlayAnimation");

	ABP_WeaponDisplay_C_OnPlayAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WeaponDisplay.BP_WeaponDisplay_C.ExecuteUbergraph_BP_WeaponDisplay
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABP_WeaponDisplay_C::ExecuteUbergraph_BP_WeaponDisplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WeaponDisplay.BP_WeaponDisplay_C.ExecuteUbergraph_BP_WeaponDisplay");

	ABP_WeaponDisplay_C_ExecuteUbergraph_BP_WeaponDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
