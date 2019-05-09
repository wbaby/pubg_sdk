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

// Function TslGame.TslParticle.SetParticleParameter
struct AP_Pistol_M1911_BP_C_SetParticleParameter_Params
{
	struct FName                                       Name;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Value;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bEnableRTPC;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.OnParticleFinish
struct AP_Pistol_M1911_BP_C_OnParticleFinish_Params
{
	class UParticleSystemComponent*                    PSystem;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.OnParticleCollide
struct AP_Pistol_M1911_BP_C_OnParticleCollide_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EmitterTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ParticleTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Direction;                                                // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Normal;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           PhysMat;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.OnParameterUpdated
struct AP_Pistol_M1911_BP_C_OnParameterUpdated_Params
{
};

// Function TslGame.TslParticle.GetWaterVolumeHeight
struct AP_Pistol_M1911_BP_C_GetWaterVolumeHeight_Params
{
	bool                                               OutbIsInWater;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutWaterHeight;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.GetPhysicalSurfaceFromRay
struct AP_Pistol_M1911_BP_C_GetPhysicalSurfaceFromRay_Params
{
	struct FVector                                     StartActorOffset;                                         // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     TraceRay;                                                 // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.GetParticleVectorParamter
struct AP_Pistol_M1911_BP_C_GetParticleVectorParamter_Params
{
	struct FName                                       Name;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     DefaultValue;                                             // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.GetParticleParamterByName
struct AP_Pistol_M1911_BP_C_GetParticleParamterByName_Params
{
	struct FName                                       Name;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DefaultValue;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.GetParticleParamter
struct AP_Pistol_M1911_BP_C_GetParticleParamter_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	float                                              DefaultValue;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale
struct AP_Pistol_M1911_BP_C_GetEmitterGlobalSpawnRateScale_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.ForceSpawn
struct AP_Pistol_M1911_BP_C_ForceSpawn_Params
{
	int                                                emitterIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     InLocation;                                               // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslParticle.AttachToParent
struct AP_Pistol_M1911_BP_C_AttachToParent_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
