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

// Function ToolTipGaugeWidget_Bp.ToolTipGaugeWidget_Bp_C.Construct
// ()

void UToolTipGaugeWidget_Bp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipGaugeWidget_Bp.ToolTipGaugeWidget_Bp_C.Construct");

	UToolTipGaugeWidget_Bp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ToolTipGaugeWidget_Bp.ToolTipGaugeWidget_Bp_C.ExecuteUbergraph_ToolTipGaugeWidget_Bp
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UToolTipGaugeWidget_Bp_C::ExecuteUbergraph_ToolTipGaugeWidget_Bp(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ToolTipGaugeWidget_Bp.ToolTipGaugeWidget_Bp_C.ExecuteUbergraph_ToolTipGaugeWidget_Bp");

	UToolTipGaugeWidget_Bp_C_ExecuteUbergraph_ToolTipGaugeWidget_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
