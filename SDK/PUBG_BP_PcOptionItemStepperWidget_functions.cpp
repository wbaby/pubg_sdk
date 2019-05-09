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

// Function TslGame.TslGameOptionItemStepperWidget.OnRightArrowButtonClicked
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_PcOptionItemStepperWidget_C::OnRightArrowButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionItemStepperWidget.OnRightArrowButtonClicked");

	UBP_PcOptionItemStepperWidget_C_OnRightArrowButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionItemStepperWidget.OnLeftArrowButtonClicked
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_PcOptionItemStepperWidget_C::OnLeftArrowButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionItemStepperWidget.OnLeftArrowButtonClicked");

	UBP_PcOptionItemStepperWidget_C_OnLeftArrowButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
