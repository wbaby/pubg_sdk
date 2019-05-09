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

// Function GunImpact_Med.GunImpact_Med_C.GetAdjustedDecalEffectDataSet_BP
// (FUNC_Native)
// Parameters:
// struct FDecalEffectDataSet     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FDecalEffectDataSet AGunImpact_Med_C::GetAdjustedDecalEffectDataSet_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Med.GunImpact_Med_C.GetAdjustedDecalEffectDataSet_BP");

	AGunImpact_Med_C_GetAdjustedDecalEffectDataSet_BP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GunImpact_Med.GunImpact_Med_C.UserConstructionScript
// ()

void AGunImpact_Med_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Med.GunImpact_Med_C.UserConstructionScript");

	AGunImpact_Med_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.PreWakeUp_BP
// ()
// Parameters:
// struct FTransform*             InitialTransform               (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AGunImpact_Med_C::PreWakeUp_BP(struct FTransform* InitialTransform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Med.GunImpact_Med_C.PreWakeUp_BP");

	AGunImpact_Med_C_PreWakeUp_BP_Params params;
	params.InitialTransform = InitialTransform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.AdjustDecalEffectDataSet_BP
// ()

void AGunImpact_Med_C::AdjustDecalEffectDataSet_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Med.GunImpact_Med_C.AdjustDecalEffectDataSet_BP");

	AGunImpact_Med_C_AdjustDecalEffectDataSet_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GunImpact_Med.GunImpact_Med_C.ExecuteUbergraph_GunImpact_Med
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AGunImpact_Med_C::ExecuteUbergraph_GunImpact_Med(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GunImpact_Med.GunImpact_Med_C.ExecuteUbergraph_GunImpact_Med");

	AGunImpact_Med_C_ExecuteUbergraph_GunImpact_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
