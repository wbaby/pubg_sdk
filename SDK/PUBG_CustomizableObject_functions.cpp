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

// Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bNeverSkipUpdate               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCustomizableSkeletalComponent::UpdateSkeletalMeshAsync(bool bNeverSkipUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync");

	UCustomizableSkeletalComponent_UpdateSkeletalMeshAsync_Params params;
	params.bNeverSkipUpdate = bNeverSkipUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bIgnoreCloseDist               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bForceHighPriority             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCustomizableObjectInstance::UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync");

	UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Params params;
	params.bIgnoreCloseDist = bIgnoreCloseDist;
	params.bForceHighPriority = bForceHighPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 VectorParamName                (CPF_Parm, CPF_ZeroConstructor)
// struct FLinearColor            VectorValue                    (CPF_Parm, CPF_IsPlainOldData)

void UCustomizableObjectInstance::SetVectorParameterSelectedOption(const struct FString& VectorParamName, const struct FLinearColor& VectorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetVectorParameterSelectedOption");

	UCustomizableObjectInstance_SetVectorParameterSelectedOption_Params params;
	params.VectorParamName = VectorParamName;
	params.VectorValue = VectorValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetRandomValues
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UCustomizableObjectInstance::SetRandomValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetRandomValues");

	UCustomizableObjectInstance_SetRandomValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ProjectorParamName             (CPF_Parm, CPF_ZeroConstructor)
// float                          posX                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          posY                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          posZ                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          dirX                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          dirY                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          dirZ                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          upX                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          upY                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          upZ                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ScaleX                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ScaleY                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ScaleZ                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Angle                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCustomizableObjectInstance::SetProjectorValue(const struct FString& ProjectorParamName, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float upX, float upY, float upZ, float ScaleX, float ScaleY, float ScaleZ, float Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetProjectorValue");

	UCustomizableObjectInstance_SetProjectorValue_Params params;
	params.ProjectorParamName = ProjectorParamName;
	params.posX = posX;
	params.posY = posY;
	params.posZ = posZ;
	params.dirX = dirX;
	params.dirY = dirY;
	params.dirZ = dirZ;
	params.upX = upX;
	params.upY = upY;
	params.upZ = upZ;
	params.ScaleX = ScaleX;
	params.ScaleY = ScaleY;
	params.ScaleZ = ScaleZ;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetProjectorParameterType
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)

void UCustomizableObjectInstance::SetProjectorParameterType(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetProjectorParameterType");

	UCustomizableObjectInstance_SetProjectorParameterType_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 SelectedOptionName             (CPF_Parm, CPF_ZeroConstructor)

void UCustomizableObjectInstance::SetIntParameterSelectedOption(const struct FString& ParamName, const struct FString& SelectedOptionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetIntParameterSelectedOption");

	UCustomizableObjectInstance_SetIntParameterSelectedOption_Params params;
	params.ParamName = ParamName;
	params.SelectedOptionName = SelectedOptionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 FloatParamName                 (CPF_Parm, CPF_ZeroConstructor)
// float                          FloatValue                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCustomizableObjectInstance::SetFloatParameterSelectedOption(const struct FString& FloatParamName, float FloatValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetFloatParameterSelectedOption");

	UCustomizableObjectInstance_SetFloatParameterSelectedOption_Params params;
	params.FloatParamName = FloatParamName;
	params.FloatValue = FloatValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetCurrentState
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 StateName                      (CPF_Parm, CPF_ZeroConstructor)

void UCustomizableObjectInstance::SetCurrentState(const struct FString& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetCurrentState");

	UCustomizableObjectInstance_SetCurrentState_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 BoolParamName                  (CPF_Parm, CPF_ZeroConstructor)
// bool                           BoolValue                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCustomizableObjectInstance::SetBoolParameterSelectedOption(const struct FString& BoolParamName, bool BoolValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.SetBoolParameterSelectedOption");

	UCustomizableObjectInstance_SetBoolParameterSelectedOption_Params params;
	params.BoolParamName = BoolParamName;
	params.BoolValue = BoolValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCustomizableObjectInstance::IsParameterRelevant(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.IsParameterRelevant");

	UCustomizableObjectInstance_IsParameterRelevant_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)

void UCustomizableObjectInstance::GetProjectorParameterType(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetProjectorParameterType");

	UCustomizableObjectInstance_GetProjectorParameterType_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)
// int                            DescIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTexture2D*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UTexture2D* UCustomizableObjectInstance::GetParameterDescription(const struct FString& ParamName, int DescIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetParameterDescription");

	UCustomizableObjectInstance_GetParameterDescription_Params params;
	params.ParamName = ParamName;
	params.DescIndex = DescIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UCustomizableObjectInstance::GetIntParameterSelectedOption(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetIntParameterSelectedOption");

	UCustomizableObjectInstance_GetIntParameterSelectedOption_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 FloatParamName                 (CPF_Parm, CPF_ZeroConstructor)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UCustomizableObjectInstance::GetFloatParameterSelectedOption(const struct FString& FloatParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetFloatParameterSelectedOption");

	UCustomizableObjectInstance_GetFloatParameterSelectedOption_Params params;
	params.FloatParamName = FloatParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetCurrentState
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UCustomizableObjectInstance::GetCurrentState()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetCurrentState");

	UCustomizableObjectInstance_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 BoolParamName                  (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCustomizableObjectInstance::GetBoolParameterSelectedOption(const struct FString& BoolParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.GetBoolParameterSelectedOption");

	UCustomizableObjectInstance_GetBoolParameterSelectedOption_Params params;
	params.BoolParamName = BoolParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomizableObjectInstance::FindVectorParameterNameIndex(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindVectorParameterNameIndex");

	UCustomizableObjectInstance_FindVectorParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomizableObjectInstance::FindProjectorParameterNameIndex(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindProjectorParameterNameIndex");

	UCustomizableObjectInstance_FindProjectorParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomizableObjectInstance::FindIntParameterNameIndex(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindIntParameterNameIndex");

	UCustomizableObjectInstance_FindIntParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomizableObjectInstance::FindFloatParameterNameIndex(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindFloatParameterNameIndex");

	UCustomizableObjectInstance_FindFloatParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomizableObjectInstance::FindBoolParameterNameIndex(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObjectInstance.FindBoolParameterNameIndex");

	UCustomizableObjectInstance_FindBoolParameterNameIndex_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex
// (FUNC_NetRequest, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            StateIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FParameterUIData        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FParameterUIData UCustomizableObject::GetStateUIMetadataFromIndex(int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex");

	UCustomizableObject_GetStateUIMetadataFromIndex_Params params;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateUIMetadata
// (FUNC_BlueprintCosmetic, FUNC_NetRequest, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 StateName                      (CPF_Parm, CPF_ZeroConstructor)
// struct FParameterUIData        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FParameterUIData UCustomizableObject::GetStateUIMetadata(const struct FString& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateUIMetadata");

	UCustomizableObject_GetStateUIMetadata_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateParameterName
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 StateName                      (CPF_Parm, CPF_ZeroConstructor)
// int                            ParameterIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UCustomizableObject::GetStateParameterName(const struct FString& StateName, int ParameterIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateParameterName");

	UCustomizableObject_GetStateParameterName_Params params;
	params.StateName = StateName;
	params.ParameterIndex = ParameterIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateParameterCount
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 StateName                      (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomizableObject::GetStateParameterCount(const struct FString& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateParameterCount");

	UCustomizableObject_GetStateParameterCount_Params params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateName
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            StateIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UCustomizableObject::GetStateName(int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateName");

	UCustomizableObject_GetStateName_Params params;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetStateCount
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomizableObject::GetStateCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetStateCount");

	UCustomizableObject_GetStateCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex
// (FUNC_NetRequest, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ParamIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FParameterUIData        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FParameterUIData UCustomizableObject::GetParameterUIMetadataFromIndex(int ParamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex");

	UCustomizableObject_GetParameterUIMetadataFromIndex_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterUIMetadata
// (FUNC_BlueprintCosmetic, FUNC_NetRequest, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)
// struct FParameterUIData        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FParameterUIData UCustomizableObject::GetParameterUIMetadata(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterUIMetadata");

	UCustomizableObject_GetParameterUIMetadata_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterTypeByName
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)

void UCustomizableObject::GetParameterTypeByName(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterTypeByName");

	UCustomizableObject_GetParameterTypeByName_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObject.GetParameterType
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ParamIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCustomizableObject::GetParameterType(int ParamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterType");

	UCustomizableObject_GetParameterType_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CustomizableObject.CustomizableObject.GetParameterName
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ParamIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UCustomizableObject::GetParameterName(int ParamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterName");

	UCustomizableObject_GetParameterName_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 ParamName                      (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomizableObject::GetParameterDescriptionCount(const struct FString& ParamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterDescriptionCount");

	UCustomizableObject_GetParameterDescriptionCount_Params params;
	params.ParamName = ParamName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetParameterCount
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomizableObject::GetParameterCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetParameterCount");

	UCustomizableObject_GetParameterCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ParamIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomizableObject::GetIntParameterNumOptions(int ParamIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetIntParameterNumOptions");

	UCustomizableObject_GetIntParameterNumOptions_Params params;
	params.ParamIndex = ParamIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ParamIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            K                              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString UCustomizableObject::GetIntParameterAvailableOption(int ParamIndex, int K)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.GetIntParameterAvailableOption");

	UCustomizableObject_GetIntParameterAvailableOption_Params params;
	params.ParamIndex = ParamIndex;
	params.K = K;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CustomizableObject.CustomizableObject.FindParameter
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomizableObject::FindParameter(const struct FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function CustomizableObject.CustomizableObject.FindParameter");

	UCustomizableObject_FindParameter_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
