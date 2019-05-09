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

// Function TslGame.TslGamepadOptionGraphic.OnStepperChanged
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UTslGamepadStepperWidget* Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void UBP_GamepadOptionGraphic_C::OnStepperChanged(class UTslGamepadStepperWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGamepadOptionGraphic.OnStepperChanged");

	UBP_GamepadOptionGraphic_C_OnStepperChanged_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
