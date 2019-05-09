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

// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.UserConstructionScript
// ()

void AM_ElectricWall_Inside_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.UserConstructionScript");

	AM_ElectricWall_Inside_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.타임라인_0__FinishedFunc
// ()

void AM_ElectricWall_Inside_BP_C::타임라인_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.타임라인_0__FinishedFunc");

	AM_ElectricWall_Inside_BP_C_타임라인_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.타임라인_0__UpdateFunc
// ()

void AM_ElectricWall_Inside_BP_C::타임라인_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.타임라인_0__UpdateFunc");

	AM_ElectricWall_Inside_BP_C_타임라인_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ReceiveBeginPlay
// ()

void AM_ElectricWall_Inside_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ReceiveBeginPlay");

	AM_ElectricWall_Inside_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.Custom Event_1
// ()

void AM_ElectricWall_Inside_BP_C::Custom_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.Custom Event_1");

	AM_ElectricWall_Inside_BP_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.OnSetEffectParameter
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// struct FString*                ParameterName                  (CPF_Parm, CPF_ZeroConstructor)
// float*                         Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AM_ElectricWall_Inside_BP_C::OnSetEffectParameter(struct FString* ParameterName, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.OnSetEffectParameter");

	AM_ElectricWall_Inside_BP_C_OnSetEffectParameter_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ExecuteUbergraph_M_ElectricWall_Inside_BP
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AM_ElectricWall_Inside_BP_C::ExecuteUbergraph_M_ElectricWall_Inside_BP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ExecuteUbergraph_M_ElectricWall_Inside_BP");

	AM_ElectricWall_Inside_BP_C_ExecuteUbergraph_M_ElectricWall_Inside_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
