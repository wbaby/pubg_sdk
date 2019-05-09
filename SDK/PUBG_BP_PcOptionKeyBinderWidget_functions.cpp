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

// Function TslGame.TslGameOptionItemKeyBinderWidget.OnKeyBinderSlotValueChanged
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTslInputKey            InputKey                       (CPF_Parm)

void UBP_PcOptionKeyBinderWidget_C::OnKeyBinderSlotValueChanged(int SlotIndex, const struct FTslInputKey& InputKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionItemKeyBinderWidget.OnKeyBinderSlotValueChanged");

	UBP_PcOptionKeyBinderWidget_C_OnKeyBinderSlotValueChanged_Params params;
	params.SlotIndex = SlotIndex;
	params.InputKey = InputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
