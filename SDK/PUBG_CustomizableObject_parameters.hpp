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

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
struct UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params
{
	bool                                               bNeverSkipUpdate;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
struct UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Params
{
	bool                                               bIgnoreCloseDist;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bForceHighPriority;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
struct UCustomizableObjectInstance_SetVectorParameterSelectedOption_Params
{
	struct FString                                     VectorParamName;                                          // (CPF_Parm, CPF_ZeroConstructor)
	struct FLinearColor                                VectorValue;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
struct UCustomizableObjectInstance_SetRandomValues_Params
{
};

// Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue
struct UCustomizableObjectInstance_SetProjectorValue_Params
{
	struct FString                                     ProjectorParamName;                                       // (CPF_Parm, CPF_ZeroConstructor)
	float                                              posX;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              posY;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              posZ;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              dirX;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              dirY;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              dirZ;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              upX;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              upY;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              upZ;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScaleX;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScaleY;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ScaleZ;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Angle;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetProjectorParameterType
struct UCustomizableObjectInstance_SetProjectorParameterType_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
struct UCustomizableObjectInstance_SetIntParameterSelectedOption_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     SelectedOptionName;                                       // (CPF_Parm, CPF_ZeroConstructor)
};

// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
struct UCustomizableObjectInstance_SetFloatParameterSelectedOption_Params
{
	struct FString                                     FloatParamName;                                           // (CPF_Parm, CPF_ZeroConstructor)
	float                                              FloatValue;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.SetCurrentState
struct UCustomizableObjectInstance_SetCurrentState_Params
{
	struct FString                                     StateName;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
struct UCustomizableObjectInstance_SetBoolParameterSelectedOption_Params
{
	struct FString                                     BoolParamName;                                            // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               BoolValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
struct UCustomizableObjectInstance_IsParameterRelevant_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
struct UCustomizableObjectInstance_GetProjectorParameterType_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription
struct UCustomizableObjectInstance_GetParameterDescription_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	int                                                DescIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
struct UCustomizableObjectInstance_GetIntParameterSelectedOption_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
struct UCustomizableObjectInstance_GetFloatParameterSelectedOption_Params
{
	struct FString                                     FloatParamName;                                           // (CPF_Parm, CPF_ZeroConstructor)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.GetCurrentState
struct UCustomizableObjectInstance_GetCurrentState_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
struct UCustomizableObjectInstance_GetBoolParameterSelectedOption_Params
{
	struct FString                                     BoolParamName;                                            // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
struct UCustomizableObjectInstance_FindVectorParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
struct UCustomizableObjectInstance_FindProjectorParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
struct UCustomizableObjectInstance_FindIntParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
struct UCustomizableObjectInstance_FindFloatParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
struct UCustomizableObjectInstance_FindBoolParameterNameIndex_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
struct UCustomizableObject_GetStateUIMetadataFromIndex_Params
{
	int                                                StateIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FParameterUIData                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetStateUIMetadata
struct UCustomizableObject_GetStateUIMetadata_Params
{
	struct FString                                     StateName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	struct FParameterUIData                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetStateParameterName
struct UCustomizableObject_GetStateParameterName_Params
{
	struct FString                                     StateName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ParameterIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetStateParameterCount
struct UCustomizableObject_GetStateParameterCount_Params
{
	struct FString                                     StateName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetStateName
struct UCustomizableObject_GetStateName_Params
{
	int                                                StateIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetStateCount
struct UCustomizableObject_GetStateCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
struct UCustomizableObject_GetParameterUIMetadataFromIndex_Params
{
	int                                                ParamIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FParameterUIData                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetParameterUIMetadata
struct UCustomizableObject_GetParameterUIMetadata_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	struct FParameterUIData                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetParameterTypeByName
struct UCustomizableObject_GetParameterTypeByName_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function CustomizableObject.CustomizableObject.GetParameterType
struct UCustomizableObject_GetParameterType_Params
{
	int                                                ParamIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetParameterName
struct UCustomizableObject_GetParameterName_Params
{
	int                                                ParamIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount
struct UCustomizableObject_GetParameterDescriptionCount_Params
{
	struct FString                                     ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetParameterCount
struct UCustomizableObject_GetParameterCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions
struct UCustomizableObject_GetIntParameterNumOptions_Params
{
	int                                                ParamIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
struct UCustomizableObject_GetIntParameterAvailableOption_Params
{
	int                                                ParamIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                K;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function CustomizableObject.CustomizableObject.FindParameter
struct UCustomizableObject_FindParameter_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
