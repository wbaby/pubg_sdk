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

// Function Engine.MeshComponent.SetVectorParameterValueOnMaterials
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   ParameterName                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ParameterValue                 (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)

void UCustomMeshComponent::SetVectorParameterValueOnMaterials(const struct FName& ParameterName, const struct FVector& ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.SetVectorParameterValueOnMaterials");

	UCustomMeshComponent_SetVectorParameterValueOnMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MeshComponent.SetScalarParameterValueOnMaterials
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   ParameterName                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ParameterValue                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCustomMeshComponent::SetScalarParameterValueOnMaterials(const struct FName& ParameterName, float ParameterValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.SetScalarParameterValueOnMaterials");

	UCustomMeshComponent_SetScalarParameterValueOnMaterials_Params params;
	params.ParameterName = ParameterName;
	params.ParameterValue = ParameterValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.MeshComponent.IsMaterialSlotNameValid
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   MaterialSlotName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCustomMeshComponent::IsMaterialSlotNameValid(const struct FName& MaterialSlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.IsMaterialSlotNameValid");

	UCustomMeshComponent_IsMaterialSlotNameValid_Params params;
	params.MaterialSlotName = MaterialSlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.GetMaterialSlotNames
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<struct FName> UCustomMeshComponent::GetMaterialSlotNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.GetMaterialSlotNames");

	UCustomMeshComponent_GetMaterialSlotNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.GetMaterials
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class UMaterialInterface*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UMaterialInterface*> UCustomMeshComponent::GetMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.GetMaterials");

	UCustomMeshComponent_GetMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.MeshComponent.GetMaterialIndex
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   MaterialSlotName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int UCustomMeshComponent::GetMaterialIndex(const struct FName& MaterialSlotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.MeshComponent.GetMaterialIndex");

	UCustomMeshComponent_GetMaterialIndex_Params params;
	params.MaterialSlotName = MaterialSlotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
