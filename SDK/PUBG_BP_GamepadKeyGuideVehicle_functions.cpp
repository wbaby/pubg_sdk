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

// Function BP_GamepadKeyGuideVehicle.BP_GamepadKeyGuideVehicle_C.Construct
// ()

void UBP_GamepadKeyGuideVehicle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadKeyGuideVehicle.BP_GamepadKeyGuideVehicle_C.Construct");

	UBP_GamepadKeyGuideVehicle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadKeyGuideVehicle.BP_GamepadKeyGuideVehicle_C.ExecuteUbergraph_BP_GamepadKeyGuideVehicle
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadKeyGuideVehicle_C::ExecuteUbergraph_BP_GamepadKeyGuideVehicle(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadKeyGuideVehicle.BP_GamepadKeyGuideVehicle_C.ExecuteUbergraph_BP_GamepadKeyGuideVehicle");

	UBP_GamepadKeyGuideVehicle_C_ExecuteUbergraph_BP_GamepadKeyGuideVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
