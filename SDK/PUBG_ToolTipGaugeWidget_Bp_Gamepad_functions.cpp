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

// Function ToolTipGaugeWidget_Bp_Gamepad.ToolTipGaugeWidget_Bp_Gamepad_C.Construct
// ()

void UToolTipGaugeWidget_Bp_Gamepad_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipGaugeWidget_Bp_Gamepad.ToolTipGaugeWidget_Bp_Gamepad_C.Construct");

	UToolTipGaugeWidget_Bp_Gamepad_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTipGaugeWidget_Bp_Gamepad.ToolTipGaugeWidget_Bp_Gamepad_C.ExecuteUbergraph_ToolTipGaugeWidget_Bp_Gamepad
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UToolTipGaugeWidget_Bp_Gamepad_C::ExecuteUbergraph_ToolTipGaugeWidget_Bp_Gamepad(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipGaugeWidget_Bp_Gamepad.ToolTipGaugeWidget_Bp_Gamepad_C.ExecuteUbergraph_ToolTipGaugeWidget_Bp_Gamepad");

	UToolTipGaugeWidget_Bp_Gamepad_C_ExecuteUbergraph_ToolTipGaugeWidget_Bp_Gamepad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
