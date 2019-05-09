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

// Function MapStatAnalyzer.MapStatAnalyzer_C.EqualsFloatArray
struct AMapStatAnalyzer_C_EqualsFloatArray_Params
{
	TArray<float>                                      NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<float>                                      NewParam1;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	float*                                             NewParam2;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               NewParam3;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.DelayTimeToDelayFrames
struct AMapStatAnalyzer_C_DelayTimeToDelayFrames_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetAltSharedPresetDir
struct AMapStatAnalyzer_C_GetAltSharedPresetDir_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelSize
struct AMapStatAnalyzer_C_GetCurrentLevelSize_Params
{
	float                                              NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetExpectedMapSize
struct AMapStatAnalyzer_C_GetExpectedMapSize_Params
{
	float*                                             MapStride;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetSharedPresetDir
struct AMapStatAnalyzer_C_GetSharedPresetDir_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetSavedDir
struct AMapStatAnalyzer_C_GetSavedDir_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.LoadStringFromFile
struct AMapStatAnalyzer_C_LoadStringFromFile_Params
{
	struct FString*                                    FullFilePath;                                             // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bSuccess;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     NewVar_1;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelMinimapURL
struct AMapStatAnalyzer_C_GetCurrentLevelMinimapURL_Params
{
	struct FString*                                    PresetDir;                                                // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.FloatArrayToNewlinedString
struct AMapStatAnalyzer_C_FloatArrayToNewlinedString_Params
{
	TArray<float>                                      Array;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FString*                                    NewlinedString;                                           // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     NewVar_1;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.StingArrayToNewlinedString
struct AMapStatAnalyzer_C_StingArrayToNewlinedString_Params
{
	TArray<struct FString>                             Array;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FString*                                    NewlinedString;                                           // (CPF_Parm, CPF_ZeroConstructor)
	struct FString                                     NewVar_1;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.HitchFrameStatsThreshold
struct AMapStatAnalyzer_C_HitchFrameStatsThreshold_Params
{
	TArray<float>                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.GetAvgOnArray
struct AMapStatAnalyzer_C_GetAvgOnArray_Params
{
	TArray<float>                                      NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	float                                              OutAvg;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutMin;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutMax;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.DateTimeToString
struct AMapStatAnalyzer_C_DateTimeToString_Params
{
	struct FDateTime*                                  NewParam;                                                 // (CPF_Parm)
	struct FString                                     NewParam1;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize
struct AMapStatAnalyzer_C_ComputeWorldSize_Params
{
	struct FVector*                                    Min;                                                      // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector*                                    Max;                                                      // (CPF_Parm, CPF_IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript
struct AMapStatAnalyzer_C_UserConstructionScript_Params
{
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay
struct AMapStatAnalyzer_C_ReceiveBeginPlay_Params
{
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveEndPlay
struct AMapStatAnalyzer_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer
struct AMapStatAnalyzer_C_ExecuteUbergraph_MapStatAnalyzer_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
