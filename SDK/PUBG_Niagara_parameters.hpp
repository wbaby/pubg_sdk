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

// Function Niagara.NiagaraComponent.SetRenderingEnabled
struct UNiagaraComponent_SetRenderingEnabled_Params
{
	bool                                               bInRenderingEnabled;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec4
struct UNiagaraComponent_SetNiagaraVariableVec4_Params
{
	struct FString                                     InVariableName;                                           // (CPF_Parm, CPF_ZeroConstructor)
	struct FVector4                                    InValue;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec3
struct UNiagaraComponent_SetNiagaraVariableVec3_Params
{
	struct FString                                     InVariableName;                                           // (CPF_Parm, CPF_ZeroConstructor)
	struct FVector                                     InValue;                                                  // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableVec2
struct UNiagaraComponent_SetNiagaraVariableVec2_Params
{
	struct FString                                     InVariableName;                                           // (CPF_Parm, CPF_ZeroConstructor)
	struct FVector2D                                   InValue;                                                  // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableFloat
struct UNiagaraComponent_SetNiagaraVariableFloat_Params
{
	struct FString                                     InVariableName;                                           // (CPF_Parm, CPF_ZeroConstructor)
	float                                              InValue;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraVariableBool
struct UNiagaraComponent_SetNiagaraVariableBool_Params
{
	struct FString                                     InVariableName;                                           // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               InValue;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraStaticMeshDataInterfaceActor
struct UNiagaraComponent_SetNiagaraStaticMeshDataInterfaceActor_Params
{
	struct FString                                     InVariableName;                                           // (CPF_Parm, CPF_ZeroConstructor)
	class AActor*                                      InSource;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Niagara.NiagaraComponent.SetNiagaraEmitterSpawnRate
struct UNiagaraComponent_SetNiagaraEmitterSpawnRate_Params
{
	struct FString                                     InEmitterName;                                            // (CPF_Parm, CPF_ZeroConstructor)
	float                                              InValue;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Niagara.NiagaraComponent.ResetEffect
struct UNiagaraComponent_ResetEffect_Params
{
};

// Function Niagara.NiagaraComponent.ReinitializeEffect
struct UNiagaraComponent_ReinitializeEffect_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
