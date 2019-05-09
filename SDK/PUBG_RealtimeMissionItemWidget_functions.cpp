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

// Function RealtimeMissionItemWidget.RealtimeMissionItemWidget_C.Construct
// ()

void URealtimeMissionItemWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RealtimeMissionItemWidget.RealtimeMissionItemWidget_C.Construct");

	URealtimeMissionItemWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RealtimeMissionItemWidget.RealtimeMissionItemWidget_C.ExecuteUbergraph_RealtimeMissionItemWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URealtimeMissionItemWidget_C::ExecuteUbergraph_RealtimeMissionItemWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RealtimeMissionItemWidget.RealtimeMissionItemWidget_C.ExecuteUbergraph_RealtimeMissionItemWidget");

	URealtimeMissionItemWidget_C_ExecuteUbergraph_RealtimeMissionItemWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
