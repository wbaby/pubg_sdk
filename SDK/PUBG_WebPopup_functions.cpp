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

// Function WebPopup.WebPopup_C.UpdateButtonGroupVisibility_BP
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FWebPopupParam*         WebPopupParam                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWebPopup_C::UpdateButtonGroupVisibility_BP(struct FWebPopupParam* WebPopupParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.UpdateButtonGroupVisibility_BP");

	UWebPopup_C_UpdateButtonGroupVisibility_BP_Params params;
	params.WebPopupParam = WebPopupParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.UpdateBackgroundColor_BP
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FWebPopupParam*         WebPopupParam                  (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWebPopup_C::UpdateBackgroundColor_BP(struct FWebPopupParam* WebPopupParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.UpdateBackgroundColor_BP");

	UWebPopup_C_UpdateBackgroundColor_BP_Params params;
	params.WebPopupParam = WebPopupParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.PreSetting_BP
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FWebPopupParam*         Param                          (CPF_Parm)

void UWebPopup_C::PreSetting_BP(struct FWebPopupParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.PreSetting_BP");

	UWebPopup_C_PreSetting_BP_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.SetPopupData
// (FUNC_Final, FUNC_BlueprintAuthorityOnly)
// Parameters:
// struct FString*                PopupId                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString*                Uri                            (CPF_Parm, CPF_ZeroConstructor)
// bool*                          UseBackgroundColor             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FLinearColor*           BackgroundColor                (CPF_Parm, CPF_IsPlainOldData)
// bool*                          bShowButtonGroup               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWebPopup_C::SetPopupData(struct FString* PopupId, struct FString* Uri, bool* UseBackgroundColor, struct FLinearColor* BackgroundColor, bool* bShowButtonGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.SetPopupData");

	UWebPopup_C_SetPopupData_Params params;
	params.PopupId = PopupId;
	params.Uri = Uri;
	params.UseBackgroundColor = UseBackgroundColor;
	params.BackgroundColor = BackgroundColor;
	params.bShowButtonGroup = bShowButtonGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.Destruct
// ()

void UWebPopup_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.Destruct");

	UWebPopup_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// ()

void UWebPopup_C::BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWebPopup_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// ()

void UWebPopup_C::BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");

	UWebPopup_C_BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
// ()

void UWebPopup_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature");

	UWebPopup_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature
// (FUNC_Final)
// Parameters:
// struct FString*                path                           (CPF_Parm, CPF_ZeroConstructor)
// bool*                          isMainFrame                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWebPopup_C::BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature(struct FString* path, bool* isMainFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature");

	UWebPopup_C_BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature_Params params;
	params.path = path;
	params.isMainFrame = isMainFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.OnUpdateWebPopup
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FWebPopupParam*         WebPopupParam                  (CPF_Parm)

void UWebPopup_C::OnUpdateWebPopup(struct FWebPopupParam* WebPopupParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.OnUpdateWebPopup");

	UWebPopup_C_OnUpdateWebPopup_Params params;
	params.WebPopupParam = WebPopupParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature
// (FUNC_Final)
// Parameters:
// struct FString*                path                           (CPF_Parm, CPF_ZeroConstructor)
// bool*                          isMainFrame                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWebPopup_C::BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature(struct FString* path, bool* isMainFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature");

	UWebPopup_C_BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature_Params params;
	params.path = path;
	params.isMainFrame = isMainFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature
// (FUNC_Final)
// Parameters:
// struct FString*                path                           (CPF_Parm, CPF_ZeroConstructor)
// struct FString*                Error                          (CPF_Parm, CPF_ZeroConstructor)
// bool*                          isMainFrame                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWebPopup_C::BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature(struct FString* path, struct FString* Error, bool* isMainFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature");

	UWebPopup_C_BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature_Params params;
	params.path = path;
	params.Error = Error;
	params.isMainFrame = isMainFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWebPopup_C::ExecuteUbergraph_WebPopup(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup");

	UWebPopup_C_ExecuteUbergraph_WebPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebPopup.WebPopup_C.OnClosePopup__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UWebPopup_C**            Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UWebPopup_C::OnClosePopup__DelegateSignature(class UWebPopup_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.OnClosePopup__DelegateSignature");

	UWebPopup_C_OnClosePopup__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
