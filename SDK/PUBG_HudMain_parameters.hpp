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

// Function HudMain.HudMain_C.OnKey_ThrowableItemWheelReleased
struct UHudMain_C_OnKey_ThrowableItemWheelReleased_Params
{
};

// Function HudMain.HudMain_C.OnKey_ThrowableItemWheelPressed
struct UHudMain_C_OnKey_ThrowableItemWheelPressed_Params
{
};

// Function HudMain.HudMain_C.OnKey_HealItemWheelReleased
struct UHudMain_C_OnKey_HealItemWheelReleased_Params
{
};

// Function HudMain.HudMain_C.OnKey_HealItemWheelPressed
struct UHudMain_C_OnKey_HealItemWheelPressed_Params
{
};

// Function HudMain.HudMain_C.MapIconShowNameOnly
struct UHudMain_C_MapIconShowNameOnly_Params
{
};

// Function HudMain.HudMain_C.MapIconShowIconOnly
struct UHudMain_C_MapIconShowIconOnly_Params
{
};

// Function HudMain.HudMain_C.MapIconShowBoth
struct UHudMain_C_MapIconShowBoth_Params
{
};

// Function HudMain.HudMain_C.MapIconShow
struct UHudMain_C_MapIconShow_Params
{
	bool*                                              bShowIcon;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bShowName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HudMain.HudMain_C.OnToggleAnticheatCenterBar
struct UHudMain_C_OnToggleAnticheatCenterBar_Params
{
};

// Function HudMain.HudMain_C.OnKey_EmoteWheelReleased
struct UHudMain_C_OnKey_EmoteWheelReleased_Params
{
};

// Function HudMain.HudMain_C.OnKey_EmoteWheelPressed
struct UHudMain_C_OnKey_EmoteWheelPressed_Params
{
};

// Function HudMain.HudMain_C.OnInit_Delegate
struct UHudMain_C_OnInit_Delegate_Params
{
	class ATslBaseHUD**                                TslBaseHUD;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function HudMain.HudMain_C.OnInit_Replay
struct UHudMain_C_OnInit_Replay_Params
{
	class ATslBaseHUD**                                TslBaseHUD;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function HudMain.HudMain_C.OnInit_Input
struct UHudMain_C_OnInit_Input_Params
{
	class ATslBaseHUD**                                TslBaseHUD;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function HudMain.HudMain_C.OnInit_Widget
struct UHudMain_C_OnInit_Widget_Params
{
	class ATslBaseHUD**                                TslBaseHUD;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function HudMain.HudMain_C.OnMouseMove
struct UHudMain_C_OnMouseMove_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function HudMain.HudMain_C.SetObserverSpectatingUp
struct UHudMain_C_SetObserverSpectatingUp_Params
{
};

// Function HudMain.HudMain_C.SetObserverSpectatingDown
struct UHudMain_C_SetObserverSpectatingDown_Params
{
};

// Function HudMain.HudMain_C.ShouldShowReplayMenu
struct UHudMain_C_ShouldShowReplayMenu_Params
{
	bool                                               bShow;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HudMain.HudMain_C.BindEventForShowReplayTimeline
struct UHudMain_C_BindEventForShowReplayTimeline_Params
{
};

// Function HudMain.HudMain_C.ShowReplayTimeLine
struct UHudMain_C_ShowReplayTimeLine_Params
{
	bool*                                              bShow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HudMain.HudMain_C.SetHUDForIngameReplayMenu
struct UHudMain_C_SetHUDForIngameReplayMenu_Params
{
};

// Function HudMain.HudMain_C.BindEventForMapClosing
struct UHudMain_C_BindEventForMapClosing_Params
{
};

// Function HudMain.HudMain_C.OnKey_ReplayMenuOrEscape
struct UHudMain_C_OnKey_ReplayMenuOrEscape_Params
{
};

// Function HudMain.HudMain_C.InitForReplay
struct UHudMain_C_InitForReplay_Params
{
};

// Function HudMain.HudMain_C.OnToggleOption
struct UHudMain_C_OnToggleOption_Params
{
};

// Function HudMain.HudMain_C.OnMapHide
struct UHudMain_C_OnMapHide_Params
{
};

// Function HudMain.HudMain_C.OnMapShow
struct UHudMain_C_OnMapShow_Params
{
};

// Function HudMain.HudMain_C.OnKey_MapReleased
struct UHudMain_C_OnKey_MapReleased_Params
{
};

// Function HudMain.HudMain_C.OnKey_MapPressed
struct UHudMain_C_OnKey_MapPressed_Params
{
};

// Function HudMain.HudMain_C.OnShowCarePackageItemList
struct UHudMain_C_OnShowCarePackageItemList_Params
{
};

// Function HudMain.HudMain_C.IsShowMapOrInventory
struct UHudMain_C_IsShowMapOrInventory_Params
{
	bool                                               bIsShow;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HudMain.HudMain_C.OnTogglePlayerList
struct UHudMain_C_OnTogglePlayerList_Params
{
};

// Function HudMain.HudMain_C.IsCharacterAlive
struct UHudMain_C_IsCharacterAlive_Params
{
	bool                                               IsAlive;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HudMain.HudMain_C.OnNitifyHit
struct UHudMain_C_OnNitifyHit_Params
{
	float*                                             DamagePercent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HudMain.HudMain_C.OnKey_SystemMenuOrEscape
struct UHudMain_C_OnKey_SystemMenuOrEscape_Params
{
};

// Function HudMain.HudMain_C.OnToggleMap
struct UHudMain_C_OnToggleMap_Params
{
};

// Function HudMain.HudMain_C.OnPossessPawnChange
struct UHudMain_C_OnPossessPawnChange_Params
{
};

// Function HudMain.HudMain_C.Construct
struct UHudMain_C_Construct_Params
{
};

// Function HudMain.HudMain_C.HideMapForReplay
struct UHudMain_C_HideMapForReplay_Params
{
};

// Function HudMain.HudMain_C.CheckReplayTimer
struct UHudMain_C_CheckReplayTimer_Params
{
};

// Function HudMain.HudMain_C.CreateCheckReplayTimer
struct UHudMain_C_CreateCheckReplayTimer_Params
{
};

// Function HudMain.HudMain_C.ExecuteUbergraph_HudMain
struct UHudMain_C_ExecuteUbergraph_HudMain_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HudMain.HudMain_C.ButtonClickedDispatcher__DelegateSignature
struct UHudMain_C_ButtonClickedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif