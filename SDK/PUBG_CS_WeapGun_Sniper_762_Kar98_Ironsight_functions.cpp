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

// Function Engine.CameraShake.ReceiveStopShake
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bImmediately                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCS_WeapGun_Sniper_762_Kar98_Ironsight_C::ReceiveStopShake(bool bImmediately)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CameraShake.ReceiveStopShake");

	UCS_WeapGun_Sniper_762_Kar98_Ironsight_C_ReceiveStopShake_Params params;
	params.bImmediately = bImmediately;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CameraShake.ReceivePlayShake
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UCS_WeapGun_Sniper_762_Kar98_Ironsight_C::ReceivePlayShake(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CameraShake.ReceivePlayShake");

	UCS_WeapGun_Sniper_762_Kar98_Ironsight_C_ReceivePlayShake_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.CameraShake.ReceiveIsFinished
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UCS_WeapGun_Sniper_762_Kar98_Ironsight_C::ReceiveIsFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CameraShake.ReceiveIsFinished");

	UCS_WeapGun_Sniper_762_Kar98_Ironsight_C_ReceiveIsFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.CameraShake.BlueprintUpdateCameraShake
// (FUNC_NetRequest, FUNC_Exec, FUNC_Event, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ALPHA                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FMinimalViewInfo        POV                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FMinimalViewInfo        ModifiedPOV                    (CPF_Parm, CPF_OutParm)

void UCS_WeapGun_Sniper_762_Kar98_Ironsight_C::BlueprintUpdateCameraShake(float DeltaTime, float ALPHA, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.CameraShake.BlueprintUpdateCameraShake");

	UCS_WeapGun_Sniper_762_Kar98_Ironsight_C_BlueprintUpdateCameraShake_Params params;
	params.DeltaTime = DeltaTime;
	params.ALPHA = ALPHA;
	params.POV = POV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedPOV != nullptr)
		*ModifiedPOV = params.ModifiedPOV;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
