#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WebPopup.WebPopup_C.UpdateButtonGroupVisibility_BP
struct UWebPopup_C_UpdateButtonGroupVisibility_BP_Params
{
	struct FWebPopupParam*                             WebPopupParam;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function WebPopup.WebPopup_C.UpdateBackgroundColor_BP
struct UWebPopup_C_UpdateBackgroundColor_BP_Params
{
	struct FWebPopupParam*                             WebPopupParam;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function WebPopup.WebPopup_C.PreSetting_BP
struct UWebPopup_C_PreSetting_BP_Params
{
	struct FWebPopupParam*                             Param;                                                    // (CPF_Parm)
};

// Function WebPopup.WebPopup_C.SetPopupData
struct UWebPopup_C_SetPopupData_Params
{
	struct FString*                                    PopupId;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	struct FString*                                    Uri;                                                      // (CPF_Parm, CPF_ZeroConstructor)
	bool*                                              UseBackgroundColor;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor*                               BackgroundColor;                                          // (CPF_Parm, CPF_IsPlainOldData)
	bool*                                              bShowButtonGroup;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WebPopup.WebPopup_C.Destruct
struct UWebPopup_C_Destruct_Params
{
};

// Function WebPopup.WebPopup_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWebPopup_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WebPopup.WebPopup_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
struct UWebPopup_C_BndEvt__Button_Reload_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WebPopup.WebPopup_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
struct UWebPopup_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature
struct UWebPopup_C_BndEvt__WebView_K2Node_ComponentBoundEvent_18_UIGTFinishLoadSignature__DelegateSignature_Params
{
	struct FString*                                    path;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	bool*                                              isMainFrame;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WebPopup.WebPopup_C.OnUpdateWebPopup
struct UWebPopup_C_OnUpdateWebPopup_Params
{
	struct FWebPopupParam*                             WebPopupParam;                                            // (CPF_Parm)
};

// Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature
struct UWebPopup_C_BndEvt__WebView_K2Node_ComponentBoundEvent_49_UIGTStartLoadingSignature__DelegateSignature_Params
{
	struct FString*                                    path;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	bool*                                              isMainFrame;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WebPopup.WebPopup_C.BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature
struct UWebPopup_C_BndEvt__WebView_K2Node_ComponentBoundEvent_67_UIGTFailLoadSignature__DelegateSignature_Params
{
	struct FString*                                    path;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	struct FString*                                    Error;                                                    // (CPF_Parm, CPF_ZeroConstructor)
	bool*                                              isMainFrame;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup
struct UWebPopup_C_ExecuteUbergraph_WebPopup_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WebPopup.WebPopup_C.OnClosePopup__DelegateSignature
struct UWebPopup_C_OnClosePopup__DelegateSignature_Params
{
	class UWebPopup_C**                                Widget;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
