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

// Function HitNotifyWidget.HitNotifyWidget_C.GetBloodSpotWidget
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UBloodSpotWidget_C*      return                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::GetBloodSpotWidget(class UBloodSpotWidget_C** return)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.GetBloodSpotWidget");

	UHitNotifyWidget_C_GetBloodSpotWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return != nullptr)
		*return = params.return;
}


// Function HitNotifyWidget.HitNotifyWidget_C.InitializeBloodSpotWidgets
// ()

void UHitNotifyWidget_C::InitializeBloodSpotWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.InitializeBloodSpotWidgets");

	UHitNotifyWidget_C_InitializeBloodSpotWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.InitializeKoreanRating
// ()

void UHitNotifyWidget_C::InitializeKoreanRating()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.InitializeKoreanRating");

	UHitNotifyWidget_C_InitializeKoreanRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.InitializeChineseLicensing
// ()

void UHitNotifyWidget_C::InitializeChineseLicensing()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.InitializeChineseLicensing");

	UHitNotifyWidget_C_InitializeChineseLicensing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamage
// (FUNC_BlueprintCosmetic)
// Parameters:
// float*                         DamagedPercent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Damage                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::DamagedPercentToDamage(float* DamagedPercent, float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamage");

	UHitNotifyWidget_C_DamagedPercentToDamage_Params params;
	params.DamagedPercent = DamagedPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetPlayerHealthPercent
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float                          HealthPercent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::GetPlayerHealthPercent(float* HealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.GetPlayerHealthPercent");

	UHitNotifyWidget_C_GetPlayerHealthPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthPercent != nullptr)
		*HealthPercent = params.HealthPercent;
}


// Function HitNotifyWidget.HitNotifyWidget_C.PostAkEvent
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UAkAudioEvent**          AkEvent                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::PostAkEvent(class UAkAudioEvent** AkEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.PostAkEvent");

	UHitNotifyWidget_C_PostAkEvent_Params params;
	params.AkEvent = AkEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.SetRTPCValue
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// struct FString*                RTPC                           (CPF_Parm, CPF_ZeroConstructor)
// float*                         Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::SetRTPCValue(struct FString* RTPC, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.SetRTPCValue");

	UHitNotifyWidget_C_SetRTPCValue_Params params;
	params.RTPC = RTPC;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamagePercent
// (FUNC_BlueprintCosmetic)
// Parameters:
// float*                         DamagedPercent                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamagePercent                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::DamagedPercentToDamagePercent(float* DamagedPercent, float* DamagePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.DamagedPercentToDamagePercent");

	UHitNotifyWidget_C_DamagedPercentToDamagePercent_Params params;
	params.DamagedPercent = DamagedPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamagePercent != nullptr)
		*DamagePercent = params.DamagePercent;
}


// Function HitNotifyWidget.HitNotifyWidget_C.PlayHitNotifySound
// ()

void UHitNotifyWidget_C::PlayHitNotifySound()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.PlayHitNotifySound");

	UHitNotifyWidget_C_PlayHitNotifySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomScale
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FVector2D               Scale                          (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UHitNotifyWidget_C::GetRandomScale(struct FVector2D* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.GetRandomScale");

	UHitNotifyWidget_C_GetRandomScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function HitNotifyWidget.HitNotifyWidget_C.GetRandomTranslation
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FVector2D               Translation                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UHitNotifyWidget_C::GetRandomTranslation(struct FVector2D* Translation)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.GetRandomTranslation");

	UHitNotifyWidget_C_GetRandomTranslation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Translation != nullptr)
		*Translation = params.Translation;
}


// Function HitNotifyWidget.HitNotifyWidget_C.OnHitNotify
// (FUNC_Final, FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         DamagePercent                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::OnHitNotify(float* DamagePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.OnHitNotify");

	UHitNotifyWidget_C_OnHitNotify_Params params;
	params.DamagePercent = DamagePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.Construct
// ()

void UHitNotifyWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.Construct");

	UHitNotifyWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitNotifyWidget.HitNotifyWidget_C.ExecuteUbergraph_HitNotifyWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHitNotifyWidget_C::ExecuteUbergraph_HitNotifyWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitNotifyWidget.HitNotifyWidget_C.ExecuteUbergraph_HitNotifyWidget");

	UHitNotifyWidget_C_ExecuteUbergraph_HitNotifyWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
