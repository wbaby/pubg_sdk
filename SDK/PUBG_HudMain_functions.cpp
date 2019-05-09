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

// Function HudMain.HudMain_C.OnKey_ThrowableItemWheelReleased
// ()

void UHudMain_C::OnKey_ThrowableItemWheelReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_ThrowableItemWheelReleased");

	UHudMain_C_OnKey_ThrowableItemWheelReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_ThrowableItemWheelPressed
// ()

void UHudMain_C::OnKey_ThrowableItemWheelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_ThrowableItemWheelPressed");

	UHudMain_C_OnKey_ThrowableItemWheelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_HealItemWheelReleased
// ()

void UHudMain_C::OnKey_HealItemWheelReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_HealItemWheelReleased");

	UHudMain_C_OnKey_HealItemWheelReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_HealItemWheelPressed
// ()

void UHudMain_C::OnKey_HealItemWheelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_HealItemWheelPressed");

	UHudMain_C_OnKey_HealItemWheelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.MapIconShowNameOnly
// ()

void UHudMain_C::MapIconShowNameOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.MapIconShowNameOnly");

	UHudMain_C_MapIconShowNameOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.MapIconShowIconOnly
// ()

void UHudMain_C::MapIconShowIconOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.MapIconShowIconOnly");

	UHudMain_C_MapIconShowIconOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.MapIconShowBoth
// ()

void UHudMain_C::MapIconShowBoth()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.MapIconShowBoth");

	UHudMain_C_MapIconShowBoth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.MapIconShow
// (FUNC_RequiredAPI)
// Parameters:
// bool*                          bShowIcon                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool*                          bShowName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::MapIconShow(bool* bShowIcon, bool* bShowName)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.MapIconShow");

	UHudMain_C_MapIconShow_Params params;
	params.bShowIcon = bShowIcon;
	params.bShowName = bShowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleAnticheatCenterBar
// ()

void UHudMain_C::OnToggleAnticheatCenterBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnToggleAnticheatCenterBar");

	UHudMain_C_OnToggleAnticheatCenterBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_EmoteWheelReleased
// ()

void UHudMain_C::OnKey_EmoteWheelReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_EmoteWheelReleased");

	UHudMain_C_OnKey_EmoteWheelReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_EmoteWheelPressed
// ()

void UHudMain_C::OnKey_EmoteWheelPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_EmoteWheelPressed");

	UHudMain_C_OnKey_EmoteWheelPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnInit_Delegate
// (FUNC_Final, FUNC_BlueprintCosmetic)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHudMain_C::OnInit_Delegate(class ATslBaseHUD** TslBaseHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnInit_Delegate");

	UHudMain_C_OnInit_Delegate_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnInit_Replay
// (FUNC_Final, FUNC_BlueprintCosmetic)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHudMain_C::OnInit_Replay(class ATslBaseHUD** TslBaseHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnInit_Replay");

	UHudMain_C_OnInit_Replay_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnInit_Input
// (FUNC_Final, FUNC_BlueprintCosmetic)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHudMain_C::OnInit_Input(class ATslBaseHUD** TslBaseHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnInit_Input");

	UHudMain_C_OnInit_Input_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnInit_Widget
// (FUNC_Final, FUNC_BlueprintCosmetic)
// Parameters:
// class ATslBaseHUD**            TslBaseHUD                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UHudMain_C::OnInit_Widget(class ATslBaseHUD** TslBaseHUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnInit_Widget");

	UHudMain_C_OnInit_Widget_Params params;
	params.TslBaseHUD = TslBaseHUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.OnMouseMove
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetRequest)
// Parameters:
// struct FGeometry*              MyGeometry                     (CPF_Parm, CPF_IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UHudMain_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnMouseMove");

	UHudMain_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function HudMain.HudMain_C.SetObserverSpectatingUp
// ()

void UHudMain_C::SetObserverSpectatingUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.SetObserverSpectatingUp");

	UHudMain_C_SetObserverSpectatingUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.SetObserverSpectatingDown
// ()

void UHudMain_C::SetObserverSpectatingDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.SetObserverSpectatingDown");

	UHudMain_C_SetObserverSpectatingDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ShouldShowReplayMenu
// (FUNC_Final)
// Parameters:
// bool                           bShow                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::ShouldShowReplayMenu(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.ShouldShowReplayMenu");

	UHudMain_C_ShouldShowReplayMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bShow != nullptr)
		*bShow = params.bShow;
}


// Function HudMain.HudMain_C.BindEventForShowReplayTimeline
// ()

void UHudMain_C::BindEventForShowReplayTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.BindEventForShowReplayTimeline");

	UHudMain_C_BindEventForShowReplayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ShowReplayTimeLine
// (FUNC_Final)
// Parameters:
// bool*                          bShow                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::ShowReplayTimeLine(bool* bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.ShowReplayTimeLine");

	UHudMain_C_ShowReplayTimeLine_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.SetHUDForIngameReplayMenu
// ()

void UHudMain_C::SetHUDForIngameReplayMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.SetHUDForIngameReplayMenu");

	UHudMain_C_SetHUDForIngameReplayMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.BindEventForMapClosing
// ()

void UHudMain_C::BindEventForMapClosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.BindEventForMapClosing");

	UHudMain_C_BindEventForMapClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_ReplayMenuOrEscape
// ()

void UHudMain_C::OnKey_ReplayMenuOrEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_ReplayMenuOrEscape");

	UHudMain_C_OnKey_ReplayMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.InitForReplay
// ()

void UHudMain_C::InitForReplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.InitForReplay");

	UHudMain_C_InitForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleOption
// ()

void UHudMain_C::OnToggleOption()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnToggleOption");

	UHudMain_C_OnToggleOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnMapHide
// ()

void UHudMain_C::OnMapHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnMapHide");

	UHudMain_C_OnMapHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnMapShow
// ()

void UHudMain_C::OnMapShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnMapShow");

	UHudMain_C_OnMapShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_MapReleased
// ()

void UHudMain_C::OnKey_MapReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_MapReleased");

	UHudMain_C_OnKey_MapReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_MapPressed
// ()

void UHudMain_C::OnKey_MapPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_MapPressed");

	UHudMain_C_OnKey_MapPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnShowCarePackageItemList
// ()

void UHudMain_C::OnShowCarePackageItemList()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnShowCarePackageItemList");

	UHudMain_C_OnShowCarePackageItemList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.IsShowMapOrInventory
// (FUNC_Final)
// Parameters:
// bool                           bIsShow                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::IsShowMapOrInventory(bool* bIsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.IsShowMapOrInventory");

	UHudMain_C_IsShowMapOrInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsShow != nullptr)
		*bIsShow = params.bIsShow;
}


// Function HudMain.HudMain_C.OnTogglePlayerList
// ()

void UHudMain_C::OnTogglePlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnTogglePlayerList");

	UHudMain_C_OnTogglePlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.IsCharacterAlive
// (FUNC_Final)
// Parameters:
// bool                           IsAlive                        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::IsCharacterAlive(bool* IsAlive)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.IsCharacterAlive");

	UHudMain_C_IsCharacterAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAlive != nullptr)
		*IsAlive = params.IsAlive;
}


// Function HudMain.HudMain_C.OnNitifyHit
// (FUNC_Final, FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         DamagePercent                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::OnNitifyHit(float* DamagePercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnNitifyHit");

	UHudMain_C_OnNitifyHit_Params params;
	params.DamagePercent = DamagePercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnKey_SystemMenuOrEscape
// ()

void UHudMain_C::OnKey_SystemMenuOrEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnKey_SystemMenuOrEscape");

	UHudMain_C_OnKey_SystemMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnToggleMap
// ()

void UHudMain_C::OnToggleMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnToggleMap");

	UHudMain_C_OnToggleMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.OnPossessPawnChange
// ()

void UHudMain_C::OnPossessPawnChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.OnPossessPawnChange");

	UHudMain_C_OnPossessPawnChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.Construct
// ()

void UHudMain_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.Construct");

	UHudMain_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.HideMapForReplay
// ()

void UHudMain_C::HideMapForReplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.HideMapForReplay");

	UHudMain_C_HideMapForReplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.CheckReplayTimer
// ()

void UHudMain_C::CheckReplayTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.CheckReplayTimer");

	UHudMain_C_CheckReplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.CreateCheckReplayTimer
// ()

void UHudMain_C::CreateCheckReplayTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.CreateCheckReplayTimer");

	UHudMain_C_CreateCheckReplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ExecuteUbergraph_HudMain
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UHudMain_C::ExecuteUbergraph_HudMain(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.ExecuteUbergraph_HudMain");

	UHudMain_C_ExecuteUbergraph_HudMain_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HudMain.HudMain_C.ButtonClickedDispatcher__DelegateSignature
// ()

void UHudMain_C::ButtonClickedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HudMain.HudMain_C.ButtonClickedDispatcher__DelegateSignature");

	UHudMain_C_ButtonClickedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
