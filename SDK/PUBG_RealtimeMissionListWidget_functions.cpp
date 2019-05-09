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

// Function RealtimeMissionListWidget.RealtimeMissionListWidget_C.Construct
// ()

void URealtimeMissionListWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RealtimeMissionListWidget.RealtimeMissionListWidget_C.Construct");

	URealtimeMissionListWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RealtimeMissionListWidget.RealtimeMissionListWidget_C.ExecuteUbergraph_RealtimeMissionListWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void URealtimeMissionListWidget_C::ExecuteUbergraph_RealtimeMissionListWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RealtimeMissionListWidget.RealtimeMissionListWidget_C.ExecuteUbergraph_RealtimeMissionListWidget");

	URealtimeMissionListWidget_C_ExecuteUbergraph_RealtimeMissionListWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
