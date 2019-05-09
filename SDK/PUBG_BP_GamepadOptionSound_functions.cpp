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

// Function TslGame.TslGamepadOptionContentsWidget.HandleGamepadUpOfChild
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TScriptInterface<class UTslNaviWidgetInterface> Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionSound_C::HandleGamepadUpOfChild(const TScriptInterface<class UTslNaviWidgetInterface>& Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGamepadOptionContentsWidget.HandleGamepadUpOfChild");

	UBP_GamepadOptionSound_C_HandleGamepadUpOfChild_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGamepadOptionContentsWidget.HandleGamepadDownOfChild
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TScriptInterface<class UTslNaviWidgetInterface> Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionSound_C::HandleGamepadDownOfChild(const TScriptInterface<class UTslNaviWidgetInterface>& Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGamepadOptionContentsWidget.HandleGamepadDownOfChild");

	UBP_GamepadOptionSound_C_HandleGamepadDownOfChild_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGamepadOptionContentsWidget.HandleFocusReceivedOfChild
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TScriptInterface<class UTslNaviWidgetInterface> Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_GamepadOptionSound_C::HandleFocusReceivedOfChild(const TScriptInterface<class UTslNaviWidgetInterface>& Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGamepadOptionContentsWidget.HandleFocusReceivedOfChild");

	UBP_GamepadOptionSound_C_HandleFocusReceivedOfChild_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
