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

// Function BP_StepperCounterContentWidget.BP_StepperCounterContentWidget_C.UpdateDesign_Selected
// ()

void UBP_StepperCounterContentWidget_C::UpdateDesign_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepperCounterContentWidget.BP_StepperCounterContentWidget_C.UpdateDesign_Selected");

	UBP_StepperCounterContentWidget_C_UpdateDesign_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepperCounterContentWidget.BP_StepperCounterContentWidget_C.UpdateDesign_Normal
// ()

void UBP_StepperCounterContentWidget_C::UpdateDesign_Normal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepperCounterContentWidget.BP_StepperCounterContentWidget_C.UpdateDesign_Normal");

	UBP_StepperCounterContentWidget_C_UpdateDesign_Normal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_StepperCounterContentWidget.BP_StepperCounterContentWidget_C.ExecuteUbergraph_BP_StepperCounterContentWidget
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_StepperCounterContentWidget_C::ExecuteUbergraph_BP_StepperCounterContentWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_StepperCounterContentWidget.BP_StepperCounterContentWidget_C.ExecuteUbergraph_BP_StepperCounterContentWidget");

	UBP_StepperCounterContentWidget_C_ExecuteUbergraph_BP_StepperCounterContentWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
