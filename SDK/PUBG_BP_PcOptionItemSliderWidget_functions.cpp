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

// Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueTextCommitted
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionItemSliderWidget_C::OnSliderValueTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueTextCommitted");

	UBP_PcOptionItemSliderWidget_C_OnSliderValueTextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueTextChanged
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FText                   Text                           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UBP_PcOptionItemSliderWidget_C::OnSliderValueTextChanged(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueTextChanged");

	UBP_PcOptionItemSliderWidget_C_OnSliderValueTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueChanged
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          MappedValue                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UBP_PcOptionItemSliderWidget_C::OnSliderValueChanged(float MappedValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionItemSliderWidget.OnSliderValueChanged");

	UBP_PcOptionItemSliderWidget_C_OnSliderValueChanged_Params params;
	params.MappedValue = MappedValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionItemSliderWidget.OnSliderAdjustmentEnd
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_PcOptionItemSliderWidget_C::OnSliderAdjustmentEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionItemSliderWidget.OnSliderAdjustmentEnd");

	UBP_PcOptionItemSliderWidget_C_OnSliderAdjustmentEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslGameOptionItemSliderWidget.OnSliderAdjustmentBegin
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UBP_PcOptionItemSliderWidget_C::OnSliderAdjustmentBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslGameOptionItemSliderWidget.OnSliderAdjustmentBegin");

	UBP_PcOptionItemSliderWidget_C_OnSliderAdjustmentBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
