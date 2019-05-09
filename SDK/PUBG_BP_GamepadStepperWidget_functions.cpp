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

// Function BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.UpdateDesign_Normal
// ()

void UBP_GamepadStepperWidget_C::UpdateDesign_Normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.UpdateDesign_Normal");

	UBP_GamepadStepperWidget_C_UpdateDesign_Normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.UpdateDesign_Focused
// ()

void UBP_GamepadStepperWidget_C::UpdateDesign_Focused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.UpdateDesign_Focused");

	UBP_GamepadStepperWidget_C_UpdateDesign_Focused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.ExecuteUbergraph_BP_GamepadStepperWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadStepperWidget_C::ExecuteUbergraph_BP_GamepadStepperWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadStepperWidget.BP_GamepadStepperWidget_C.ExecuteUbergraph_BP_GamepadStepperWidget");

	UBP_GamepadStepperWidget_C_ExecuteUbergraph_BP_GamepadStepperWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
