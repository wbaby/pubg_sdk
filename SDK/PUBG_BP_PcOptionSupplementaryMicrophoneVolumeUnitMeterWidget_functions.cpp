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

// Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.GetGamePadHelpWidgetClass
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UClass*                  GuideClass                     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C::GetGamePadHelpWidgetClass(class UClass** GuideClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.GetGamePadHelpWidgetClass");

	UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C_GetGamePadHelpWidgetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GuideClass != nullptr)
		*GuideClass = params.GuideClass;
}


// Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.OnAnimFinish
// ()

void UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C::OnAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.OnAnimFinish");

	UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C_OnAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeMeterValue
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         Volume_Level_in_Decimal        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C::UpdateVolumeMeterValue(float* Volume_Level_in_Decimal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeMeterValue");

	UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C_UpdateVolumeMeterValue_Params params;
	params.Volume_Level_in_Decimal = Volume_Level_in_Decimal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.Construct
// ()

void UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.Construct");

	UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeUnitMeter
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         Energy                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C::UpdateVolumeUnitMeter(float* Energy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.UpdateVolumeUnitMeter");

	UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C_UpdateVolumeUnitMeter_Params params;
	params.Energy = Energy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C::ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget.BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C.ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget");

	UBP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_C_ExecuteUbergraph_BP_PcOptionSupplementaryMicrophoneVolumeUnitMeterWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
