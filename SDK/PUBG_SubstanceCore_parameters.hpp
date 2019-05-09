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

// Function SubstanceCore.SubstanceGraphInstance.SetInputString
struct USubstanceGraphInstance_SetInputString_Params
{
	struct FString                                     Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_ZeroConstructor)
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputInt
struct USubstanceGraphInstance_SetInputInt_Params
{
	struct FString                                     Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor)
	TArray<int>                                        InputValues;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputImg
struct USubstanceGraphInstance_SetInputImg_Params
{
	struct FString                                     InputName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	class UObject*                                     Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputFloat
struct USubstanceGraphInstance_SetInputFloat_Params
{
	struct FString                                     Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor)
	TArray<float>                                      InputValues;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputColor
struct USubstanceGraphInstance_SetInputColor_Params
{
	struct FString                                     Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor)
	struct FLinearColor                                Color;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function SubstanceCore.SubstanceGraphInstance.SetInputBool
struct USubstanceGraphInstance_SetInputBool_Params
{
	struct FString                                     Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               Bool;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
struct USubstanceGraphInstance_GetIntInputDesc_Params
{
	struct FString                                     Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor)
	struct FSubstanceIntInputDesc                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
struct USubstanceGraphInstance_GetInstanceDesc_Params
{
	struct FSubstanceInstanceDesc                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputType
struct USubstanceGraphInstance_GetInputType_Params
{
	struct FString                                     InputName;                                                // (CPF_Parm, CPF_ZeroConstructor)
	TEnumAsByte<ESubstanceInputType>                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputString
struct USubstanceGraphInstance_GetInputString_Params
{
	struct FString                                     Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputNames
struct USubstanceGraphInstance_GetInputNames_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputInt
struct USubstanceGraphInstance_GetInputInt_Params
{
	struct FString                                     Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor)
	TArray<int>                                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputFloat
struct USubstanceGraphInstance_GetInputFloat_Params
{
	struct FString                                     Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor)
	TArray<float>                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputColor
struct USubstanceGraphInstance_GetInputColor_Params
{
	struct FString                                     Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor)
	struct FLinearColor                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SubstanceCore.SubstanceGraphInstance.GetInputBool
struct USubstanceGraphInstance_GetInputBool_Params
{
	struct FString                                     Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
struct USubstanceGraphInstance_GetFloatInputDesc_Params
{
	struct FString                                     Identifier;                                               // (CPF_Parm, CPF_ZeroConstructor)
	struct FSubstanceFloatInputDesc                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function SubstanceCore.SubstanceTexture2D.GetChannel
struct USubstanceTexture2D_GetChannel_Params
{
	TEnumAsByte<ESubChannelType>                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
