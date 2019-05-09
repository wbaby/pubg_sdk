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

// Function Engine.MeshComponent.SetVectorParameterValueOnMaterials
struct UCustomMeshComponent_SetVectorParameterValueOnMaterials_Params
{
	struct FName                                       ParameterName;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ParameterValue;                                           // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
};

// Function Engine.MeshComponent.SetScalarParameterValueOnMaterials
struct UCustomMeshComponent_SetScalarParameterValueOnMaterials_Params
{
	struct FName                                       ParameterName;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ParameterValue;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.MeshComponent.IsMaterialSlotNameValid
struct UCustomMeshComponent_IsMaterialSlotNameValid_Params
{
	struct FName                                       MaterialSlotName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.MeshComponent.GetMaterialSlotNames
struct UCustomMeshComponent_GetMaterialSlotNames_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.MeshComponent.GetMaterials
struct UCustomMeshComponent_GetMaterials_Params
{
	TArray<class UMaterialInterface*>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.MeshComponent.GetMaterialIndex
struct UCustomMeshComponent_GetMaterialIndex_Params
{
	struct FName                                       MaterialSlotName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
