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

// Function GunImpact_Med.GunImpact_Med_C.GetAdjustedDecalEffectDataSet_BP
struct AGunImpact_Med_C_GetAdjustedDecalEffectDataSet_BP_Params
{
	struct FDecalEffectDataSet                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function GunImpact_Med.GunImpact_Med_C.UserConstructionScript
struct AGunImpact_Med_C_UserConstructionScript_Params
{
};

// Function GunImpact_Med.GunImpact_Med_C.PreWakeUp_BP
struct AGunImpact_Med_C_PreWakeUp_BP_Params
{
	struct FTransform*                                 InitialTransform;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function GunImpact_Med.GunImpact_Med_C.AdjustDecalEffectDataSet_BP
struct AGunImpact_Med_C_AdjustDecalEffectDataSet_BP_Params
{
};

// Function GunImpact_Med.GunImpact_Med_C.ExecuteUbergraph_GunImpact_Med
struct AGunImpact_Med_C_ExecuteUbergraph_GunImpact_Med_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
