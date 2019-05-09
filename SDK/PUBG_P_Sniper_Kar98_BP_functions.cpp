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

// Function TslGame.TslParticle.SetParticleParameter
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   Name                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Value                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           bEnableRTPC                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AP_Sniper_Kar98_BP_C::SetParticleParameter(const struct FName& Name, const struct FVector& Value, bool bEnableRTPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.SetParticleParameter");

	AP_Sniper_Kar98_BP_C_SetParticleParameter_Params params;
	params.Name = Name;
	params.Value = Value;
	params.bEnableRTPC = bEnableRTPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParticleFinish
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UParticleSystemComponent* PSystem                        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AP_Sniper_Kar98_BP_C::OnParticleFinish(class UParticleSystemComponent* PSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.OnParticleFinish");

	AP_Sniper_Kar98_BP_C_OnParticleFinish_Params params;
	params.PSystem = PSystem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParticleCollide
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   EventName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EmitterTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ParticleTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Velocity                       (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Direction                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Normal                         (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPhysicalMaterial*       PhysMat                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AP_Sniper_Kar98_BP_C::OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.OnParticleCollide");

	AP_Sniper_Kar98_BP_C_OnParticleCollide_Params params;
	params.EventName = EventName;
	params.EmitterTime = EmitterTime;
	params.ParticleTime = ParticleTime;
	params.Location = Location;
	params.Velocity = Velocity;
	params.Direction = Direction;
	params.Normal = Normal;
	params.BoneName = BoneName;
	params.PhysMat = PhysMat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.OnParameterUpdated
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AP_Sniper_Kar98_BP_C::OnParameterUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.OnParameterUpdated");

	AP_Sniper_Kar98_BP_C_OnParameterUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.GetWaterVolumeHeight
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           OutbIsInWater                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OutWaterHeight                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AP_Sniper_Kar98_BP_C::GetWaterVolumeHeight(bool* OutbIsInWater, float* OutWaterHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.GetWaterVolumeHeight");

	AP_Sniper_Kar98_BP_C_GetWaterVolumeHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutbIsInWater != nullptr)
		*OutbIsInWater = params.OutbIsInWater;
	if (OutWaterHeight != nullptr)
		*OutWaterHeight = params.OutWaterHeight;
}


// Function TslGame.TslParticle.GetPhysicalSurfaceFromRay
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 StartActorOffset               (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 TraceRay                       (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// TEnumAsByte<EPhysicalSurface>  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<EPhysicalSurface> AP_Sniper_Kar98_BP_C::GetPhysicalSurfaceFromRay(const struct FVector& StartActorOffset, const struct FVector& TraceRay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.GetPhysicalSurfaceFromRay");

	AP_Sniper_Kar98_BP_C_GetPhysicalSurfaceFromRay_Params params;
	params.StartActorOffset = StartActorOffset;
	params.TraceRay = TraceRay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetParticleVectorParamter
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   Name                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 DefaultValue                   (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AP_Sniper_Kar98_BP_C::GetParticleVectorParamter(const struct FName& Name, const struct FVector& DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.GetParticleVectorParamter");

	AP_Sniper_Kar98_BP_C_GetParticleVectorParamter_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetParticleParamterByName
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   Name                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DefaultValue                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AP_Sniper_Kar98_BP_C::GetParticleParamterByName(const struct FName& Name, float DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.GetParticleParamterByName");

	AP_Sniper_Kar98_BP_C_GetParticleParamterByName_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetParticleParamter
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FString                 Name                           (CPF_Parm, CPF_ZeroConstructor)
// float                          DefaultValue                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AP_Sniper_Kar98_BP_C::GetParticleParamter(const struct FString& Name, float DefaultValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.GetParticleParamter");

	AP_Sniper_Kar98_BP_C_GetParticleParamter_Params params;
	params.Name = Name;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AP_Sniper_Kar98_BP_C::GetEmitterGlobalSpawnRateScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.GetEmitterGlobalSpawnRateScale");

	AP_Sniper_Kar98_BP_C_GetEmitterGlobalSpawnRateScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslParticle.ForceSpawn
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            emitterIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 InLocation                     (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)

void AP_Sniper_Kar98_BP_C::ForceSpawn(int emitterIndex, const struct FVector& InLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.ForceSpawn");

	AP_Sniper_Kar98_BP_C_ForceSpawn_Params params;
	params.emitterIndex = emitterIndex;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslParticle.AttachToParent
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AP_Sniper_Kar98_BP_C::AttachToParent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslParticle.AttachToParent");

	AP_Sniper_Kar98_BP_C_AttachToParent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
