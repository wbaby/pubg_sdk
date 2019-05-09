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

// Function ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.SetActiveWidget
// (FUNC_RequiredAPI)

void UConsoleGuideWidget_v3_C::SetActiveWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.SetActiveWidget");

	UConsoleGuideWidget_v3_C_SetActiveWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.ExecuteUbergraph_ConsoleGuideWidget_v3
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UConsoleGuideWidget_v3_C::ExecuteUbergraph_ConsoleGuideWidget_v3(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.ExecuteUbergraph_ConsoleGuideWidget_v3");

	UConsoleGuideWidget_v3_C_ExecuteUbergraph_ConsoleGuideWidget_v3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
