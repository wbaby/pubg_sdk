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

// Function LobbyWebView.LobbyWebView_C.OnKeyDown
// (FUNC_NetRequest)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply ULobbyWebView_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.OnKeyDown");

	ULobbyWebView_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LobbyWebView.LobbyWebView_C.OnPreviewMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetRequest)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply ULobbyWebView_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.OnPreviewMouseButtonDown");

	ULobbyWebView_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LobbyWebView.LobbyWebView_C.GetMainCoherentWidget
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UCoherentUIGTWidget*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UCoherentUIGTWidget* ULobbyWebView_C::GetMainCoherentWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.GetMainCoherentWidget");

	ULobbyWebView_C_GetMainCoherentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LobbyWebView.LobbyWebView_C.OnPreviewKeyDown
// (FUNC_NetRequest)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (CPF_Parm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply ULobbyWebView_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.OnPreviewKeyDown");

	ULobbyWebView_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LobbyWebView.LobbyWebView_C.WebViewBroadcast
// ()
// Parameters:
// struct FString*                EventName                      (CPF_Parm, CPF_ZeroConstructor)
// struct FString*                Parameter                      (CPF_Parm, CPF_ZeroConstructor)

void ULobbyWebView_C::WebViewBroadcast(struct FString* EventName, struct FString* Parameter)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewBroadcast");

	ULobbyWebView_C_WebViewBroadcast_Params params;
	params.EventName = EventName;
	params.Parameter = Parameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewUnload
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           ViewIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::WebViewUnload(int* ViewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewUnload");

	ULobbyWebView_C_WebViewUnload_Params params;
	params.ViewIndex = ViewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewShow
// (FUNC_Final, FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           VeiwIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          visible                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::WebViewShow(int* VeiwIndex, bool* visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewShow");

	ULobbyWebView_C_WebViewShow_Params params;
	params.VeiwIndex = VeiwIndex;
	params.visible = visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.HandleEventFromWeb
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UCoherentUIGTJSPayload** payload                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::HandleEventFromWeb(class UCoherentUIGTJSPayload** payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.HandleEventFromWeb");

	ULobbyWebView_C_HandleEventFromWeb_Params params;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewInputFocus
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           ViewIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::WebViewInputFocus(int* ViewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewInputFocus");

	ULobbyWebView_C_WebViewInputFocus_Params params;
	params.ViewIndex = ViewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.WebViewLoad
// (FUNC_BlueprintCosmetic)
// Parameters:
// int*                           ViewIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FString*                URL                            (CPF_Parm, CPF_ZeroConstructor)

void ULobbyWebView_C::WebViewLoad(int* ViewIndex, struct FString* URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.WebViewLoad");

	ULobbyWebView_C_WebViewLoad_Params params;
	params.ViewIndex = ViewIndex;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.J_1
// (FUNC_BlueprintCosmetic)
// Parameters:
// class UCoherentUIGTJSPayload** payload                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::J_1(class UCoherentUIGTJSPayload** payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.J_1");

	ULobbyWebView_C_J_1_Params params;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Construct
// ()

void ULobbyWebView_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.Construct");

	ULobbyWebView_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Tick
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// float*                         InDeltaTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.Tick");

	ULobbyWebView_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature
// ()

void ULobbyWebView_C::BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature");

	ULobbyWebView_C_BndEvt__CoherentUIGTWidget_0_K2Node_ComponentBoundEvent_383_UIGTReadyForBindingsSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.Destruct
// ()

void ULobbyWebView_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.Destruct");

	ULobbyWebView_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.BndEvt__WebView_0_K2Node_ComponentBoundEvent_2_UIGTBindingsReleasedSignature__DelegateSignature
// ()

void ULobbyWebView_C::BndEvt__WebView_0_K2Node_ComponentBoundEvent_2_UIGTBindingsReleasedSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.BndEvt__WebView_0_K2Node_ComponentBoundEvent_2_UIGTBindingsReleasedSignature__DelegateSignature");

	ULobbyWebView_C_BndEvt__WebView_0_K2Node_ComponentBoundEvent_2_UIGTBindingsReleasedSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.CustomEvent_1
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         Scale                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::CustomEvent_1(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.CustomEvent_1");

	ULobbyWebView_C_CustomEvent_1_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.CustomEvent_2
// ()

void ULobbyWebView_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.CustomEvent_2");

	ULobbyWebView_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.CustomEvent_3
// ()

void ULobbyWebView_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.CustomEvent_3");

	ULobbyWebView_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LobbyWebView.LobbyWebView_C.ExecuteUbergraph_LobbyWebView
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULobbyWebView_C::ExecuteUbergraph_LobbyWebView(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyWebView.LobbyWebView_C.ExecuteUbergraph_LobbyWebView");

	ULobbyWebView_C_ExecuteUbergraph_LobbyWebView_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
