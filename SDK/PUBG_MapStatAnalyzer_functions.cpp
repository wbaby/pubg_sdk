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

// Function MapStatAnalyzer.MapStatAnalyzer_C.EqualsFloatArray
// (FUNC_Final, FUNC_BlueprintAuthorityOnly)
// Parameters:
// TArray<float>                  NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// TArray<float>                  NewParam1                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float*                         NewParam2                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           NewParam3                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMapStatAnalyzer_C::EqualsFloatArray(float* NewParam2, TArray<float>* NewParam, TArray<float>* NewParam1, bool* NewParam3)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.EqualsFloatArray");

	AMapStatAnalyzer_C_EqualsFloatArray_Params params;
	params.NewParam2 = NewParam2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
	if (NewParam3 != nullptr)
		*NewParam3 = params.NewParam3;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.DelayTimeToDelayFrames
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int AMapStatAnalyzer_C::DelayTimeToDelayFrames()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.DelayTimeToDelayFrames");

	AMapStatAnalyzer_C_DelayTimeToDelayFrames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetAltSharedPresetDir
// ()
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString AMapStatAnalyzer_C::GetAltSharedPresetDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.GetAltSharedPresetDir");

	AMapStatAnalyzer_C_GetAltSharedPresetDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelSize
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMapStatAnalyzer_C::GetCurrentLevelSize(float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelSize");

	AMapStatAnalyzer_C_GetCurrentLevelSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetExpectedMapSize
// (FUNC_BlueprintCosmetic)
// Parameters:
// float*                         MapStride                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMapStatAnalyzer_C::GetExpectedMapSize(float* MapStride, float* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.GetExpectedMapSize");

	AMapStatAnalyzer_C_GetExpectedMapSize_Params params;
	params.MapStride = MapStride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetSharedPresetDir
// ()
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString AMapStatAnalyzer_C::GetSharedPresetDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.GetSharedPresetDir");

	AMapStatAnalyzer_C_GetSharedPresetDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetSavedDir
// ()
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString AMapStatAnalyzer_C::GetSavedDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.GetSavedDir");

	AMapStatAnalyzer_C_GetSavedDir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.LoadStringFromFile
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FString*                FullFilePath                   (CPF_Parm, CPF_ZeroConstructor)
// bool                           bSuccess                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 NewVar_1                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void AMapStatAnalyzer_C::LoadStringFromFile(struct FString* FullFilePath, bool* bSuccess, struct FString* NewVar_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.LoadStringFromFile");

	AMapStatAnalyzer_C_LoadStringFromFile_Params params;
	params.FullFilePath = FullFilePath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;
	if (NewVar_1 != nullptr)
		*NewVar_1 = params.NewVar_1;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelMinimapURL
// ()
// Parameters:
// struct FString*                PresetDir                      (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void AMapStatAnalyzer_C::GetCurrentLevelMinimapURL(struct FString* PresetDir, struct FString* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.GetCurrentLevelMinimapURL");

	AMapStatAnalyzer_C_GetCurrentLevelMinimapURL_Params params;
	params.PresetDir = PresetDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.FloatArrayToNewlinedString
// ()
// Parameters:
// TArray<float>                  Array                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FString*                NewlinedString                 (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 NewVar_1                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void AMapStatAnalyzer_C::FloatArrayToNewlinedString(struct FString* NewlinedString, TArray<float>* Array, struct FString* NewVar_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.FloatArrayToNewlinedString");

	AMapStatAnalyzer_C_FloatArrayToNewlinedString_Params params;
	params.NewlinedString = NewlinedString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (NewVar_1 != nullptr)
		*NewVar_1 = params.NewVar_1;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.StingArrayToNewlinedString
// ()
// Parameters:
// TArray<struct FString>         Array                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FString*                NewlinedString                 (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 NewVar_1                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void AMapStatAnalyzer_C::StingArrayToNewlinedString(struct FString* NewlinedString, TArray<struct FString>* Array, struct FString* NewVar_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.StingArrayToNewlinedString");

	AMapStatAnalyzer_C_StingArrayToNewlinedString_Params params;
	params.NewlinedString = NewlinedString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (NewVar_1 != nullptr)
		*NewVar_1 = params.NewVar_1;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.HitchFrameStatsThreshold
// ()
// Parameters:
// TArray<float>                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<float> AMapStatAnalyzer_C::HitchFrameStatsThreshold()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.HitchFrameStatsThreshold");

	AMapStatAnalyzer_C_HitchFrameStatsThreshold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.GetAvgOnArray
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic)
// Parameters:
// TArray<float>                  NewParam                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
// float                          OutAvg                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OutMin                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OutMax                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMapStatAnalyzer_C::GetAvgOnArray(TArray<float>* NewParam, float* OutAvg, float* OutMin, float* OutMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.GetAvgOnArray");

	AMapStatAnalyzer_C_GetAvgOnArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
	if (OutAvg != nullptr)
		*OutAvg = params.OutAvg;
	if (OutMin != nullptr)
		*OutMin = params.OutMin;
	if (OutMax != nullptr)
		*OutMax = params.OutMax;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.DateTimeToString
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FDateTime*              NewParam                       (CPF_Parm)
// struct FString                 NewParam1                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void AMapStatAnalyzer_C::DateTimeToString(struct FDateTime* NewParam, struct FString* NewParam1)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.DateTimeToString");

	AMapStatAnalyzer_C_DateTimeToString_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam1 != nullptr)
		*NewParam1 = params.NewParam1;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FVector*                Min                            (CPF_Parm, CPF_IsPlainOldData)
// struct FVector*                Max                            (CPF_Parm, CPF_IsPlainOldData)

void AMapStatAnalyzer_C::ComputeWorldSize(struct FVector* Min, struct FVector* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize");

	AMapStatAnalyzer_C_ComputeWorldSize_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript
// ()

void AMapStatAnalyzer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript");

	AMapStatAnalyzer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay
// ()

void AMapStatAnalyzer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay");

	AMapStatAnalyzer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveEndPlay
// (FUNC_Final)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMapStatAnalyzer_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveEndPlay");

	AMapStatAnalyzer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AMapStatAnalyzer_C::ExecuteUbergraph_MapStatAnalyzer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer");

	AMapStatAnalyzer_C_ExecuteUbergraph_MapStatAnalyzer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
