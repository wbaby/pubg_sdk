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

// Function TslGame.TslLobbyNameTagHudWidget.SetNameTagWidget_Internal
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyNameTagHUD_C::SetNameTagWidget_Internal(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslLobbyNameTagHudWidget.SetNameTagWidget_Internal");

	ULobbyNameTagHUD_C_SetNameTagWidget_Internal_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslLobbyNameTagHudWidget.ResetNameTagWidget_Internal
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyNameTagHUD_C::ResetNameTagWidget_Internal(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslLobbyNameTagHudWidget.ResetNameTagWidget_Internal");

	ULobbyNameTagHUD_C_ResetNameTagWidget_Internal_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslLobbyNameTagHudWidget.GetNameTagWidget_Internal
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            SlotIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UTslLobbyNameTagWidget*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UTslLobbyNameTagWidget* ULobbyNameTagHUD_C::GetNameTagWidget_Internal(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslLobbyNameTagHudWidget.GetNameTagWidget_Internal");

	ULobbyNameTagHUD_C_GetNameTagWidget_Internal_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
