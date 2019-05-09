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

// Function SubstanceCore.SubstanceGraphInstance.SetInputString
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Identifier                     (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 Value                          (CPF_Parm, CPF_ZeroConstructor)

void USubstanceGraphInstance::SetInputString(const struct FString& Identifier, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputString");

	USubstanceGraphInstance_SetInputString_Params params;
	params.Identifier = Identifier;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputInt
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Identifier                     (CPF_Parm, CPF_ZeroConstructor)
// TArray<int>                    InputValues                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void USubstanceGraphInstance::SetInputInt(const struct FString& Identifier, TArray<int> InputValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputInt");

	USubstanceGraphInstance_SetInputInt_Params params;
	params.Identifier = Identifier;
	params.InputValues = InputValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputImg
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 InputName                      (CPF_Parm, CPF_ZeroConstructor)
// class UObject*                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USubstanceGraphInstance::SetInputImg(const struct FString& InputName, class UObject* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputImg");

	USubstanceGraphInstance_SetInputImg_Params params;
	params.InputName = InputName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputFloat
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Identifier                     (CPF_Parm, CPF_ZeroConstructor)
// TArray<float>                  InputValues                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)

void USubstanceGraphInstance::SetInputFloat(const struct FString& Identifier, TArray<float> InputValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputFloat");

	USubstanceGraphInstance_SetInputFloat_Params params;
	params.Identifier = Identifier;
	params.InputValues = InputValues;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputColor
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Identifier                     (CPF_Parm, CPF_ZeroConstructor)
// struct FLinearColor            Color                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void USubstanceGraphInstance::SetInputColor(const struct FString& Identifier, const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputColor");

	USubstanceGraphInstance_SetInputColor_Params params;
	params.Identifier = Identifier;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceGraphInstance.SetInputBool
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Identifier                     (CPF_Parm, CPF_ZeroConstructor)
// bool                           Bool                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void USubstanceGraphInstance::SetInputBool(const struct FString& Identifier, bool Bool)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.SetInputBool");

	USubstanceGraphInstance_SetInputBool_Params params;
	params.Identifier = Identifier;
	params.Bool = Bool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Identifier                     (CPF_Parm, CPF_ZeroConstructor)
// struct FSubstanceIntInputDesc  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSubstanceIntInputDesc USubstanceGraphInstance::GetIntInputDesc(const struct FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetIntInputDesc");

	USubstanceGraphInstance_GetIntInputDesc_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FSubstanceInstanceDesc  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSubstanceInstanceDesc USubstanceGraphInstance::GetInstanceDesc()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInstanceDesc");

	USubstanceGraphInstance_GetInstanceDesc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputType
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 InputName                      (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<ESubstanceInputType> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESubstanceInputType> USubstanceGraphInstance::GetInputType(const struct FString& InputName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputType");

	USubstanceGraphInstance_GetInputType_Params params;
	params.InputName = InputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputString
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Identifier                     (CPF_Parm, CPF_ZeroConstructor)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

struct FString USubstanceGraphInstance::GetInputString(const struct FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputString");

	USubstanceGraphInstance_GetInputString_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputNames
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<struct FString>         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FString> USubstanceGraphInstance::GetInputNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputNames");

	USubstanceGraphInstance_GetInputNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputInt
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Identifier                     (CPF_Parm, CPF_ZeroConstructor)
// TArray<int>                    ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<int> USubstanceGraphInstance::GetInputInt(const struct FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputInt");

	USubstanceGraphInstance_GetInputInt_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputFloat
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Identifier                     (CPF_Parm, CPF_ZeroConstructor)
// TArray<float>                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<float> USubstanceGraphInstance::GetInputFloat(const struct FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputFloat");

	USubstanceGraphInstance_GetInputFloat_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputColor
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Identifier                     (CPF_Parm, CPF_ZeroConstructor)
// struct FLinearColor            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FLinearColor USubstanceGraphInstance::GetInputColor(const struct FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputColor");

	USubstanceGraphInstance_GetInputColor_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetInputBool
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Identifier                     (CPF_Parm, CPF_ZeroConstructor)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool USubstanceGraphInstance::GetInputBool(const struct FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetInputBool");

	USubstanceGraphInstance_GetInputBool_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Identifier                     (CPF_Parm, CPF_ZeroConstructor)
// struct FSubstanceFloatInputDesc ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSubstanceFloatInputDesc USubstanceGraphInstance::GetFloatInputDesc(const struct FString& Identifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceGraphInstance.GetFloatInputDesc");

	USubstanceGraphInstance_GetFloatInputDesc_Params params;
	params.Identifier = Identifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SubstanceCore.SubstanceTexture2D.GetChannel
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ESubChannelType>   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ESubChannelType> USubstanceTexture2D::GetChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function SubstanceCore.SubstanceTexture2D.GetChannel");

	USubstanceTexture2D_GetChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
