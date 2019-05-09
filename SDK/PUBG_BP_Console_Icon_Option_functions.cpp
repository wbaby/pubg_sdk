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

// Function BP_Console_Icon_Option.BP_Console_Icon_Option_C.PreConstruct
// (FUNC_Final)
// Parameters:
// bool                           IsDesignTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Console_Icon_Option_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Console_Icon_Option.BP_Console_Icon_Option_C.PreConstruct");

	UBP_Console_Icon_Option_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Console_Icon_Option.BP_Console_Icon_Option_C.Construct
// ()

void UBP_Console_Icon_Option_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Console_Icon_Option.BP_Console_Icon_Option_C.Construct");

	UBP_Console_Icon_Option_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Console_Icon_Option.BP_Console_Icon_Option_C.ExecuteUbergraph_BP_Console_Icon_Option
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_Console_Icon_Option_C::ExecuteUbergraph_BP_Console_Icon_Option(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Console_Icon_Option.BP_Console_Icon_Option_C.ExecuteUbergraph_BP_Console_Icon_Option");

	UBP_Console_Icon_Option_C_ExecuteUbergraph_BP_Console_Icon_Option_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
