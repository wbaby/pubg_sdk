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

// Function Engine.CameraShake.ReceiveStopShake
struct UCS_WeapGun_Pistol_M9_C_ReceiveStopShake_Params
{
	bool                                               bImmediately;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.CameraShake.ReceivePlayShake
struct UCS_WeapGun_Pistol_M9_C_ReceivePlayShake_Params
{
	float                                              Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.CameraShake.ReceiveIsFinished
struct UCS_WeapGun_Pistol_M9_C_ReceiveIsFinished_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.CameraShake.BlueprintUpdateCameraShake
struct UCS_WeapGun_Pistol_M9_C_BlueprintUpdateCameraShake_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ALPHA;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMinimalViewInfo                            POV;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FMinimalViewInfo                            ModifiedPOV;                                              // (CPF_Parm, CPF_OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
