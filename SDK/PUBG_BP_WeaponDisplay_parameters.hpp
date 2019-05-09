#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.AreComponentMaterialsLoaded
struct ABP_WeaponDisplay_C_AreComponentMaterialsLoaded_Params
{
	bool                                               Loaded;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.SetComponentMeshVisibility
struct ABP_WeaponDisplay_C_SetComponentMeshVisibility_Params
{
	bool*                                              visible;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int*                                               Limit;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.GetTransitionOrigin
struct ABP_WeaponDisplay_C_GetTransitionOrigin_Params
{
	struct FVector                                     TransitionOrigin;                                         // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.CompareRotations
struct ABP_WeaponDisplay_C_CompareRotations_Params
{
	struct FRotator*                                   RotA;                                                     // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator*                                   RotB;                                                     // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.UserConstructionScript
struct ABP_WeaponDisplay_C_UserConstructionScript_Params
{
};

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.ReceiveBeginPlay
struct ABP_WeaponDisplay_C_ReceiveBeginPlay_Params
{
};

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.ReceiveTick
struct ABP_WeaponDisplay_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.Update Effect
struct ABP_WeaponDisplay_C_Update_Effect_Params
{
	float*                                             Delta_Seconds;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.OnPlayAnimation
struct ABP_WeaponDisplay_C_OnPlayAnimation_Params
{
};

// Function BP_WeaponDisplay.BP_WeaponDisplay_C.ExecuteUbergraph_BP_WeaponDisplay
struct ABP_WeaponDisplay_C_ExecuteUbergraph_BP_WeaponDisplay_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
