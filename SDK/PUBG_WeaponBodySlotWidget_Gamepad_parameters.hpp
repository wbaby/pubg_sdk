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

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetSlotItem
struct UWeaponBodySlotWidget_Gamepad_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetSlotContainer
struct UWeaponBodySlotWidget_Gamepad_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateWeaponItem
struct UWeaponBodySlotWidget_Gamepad_C_OnUpdateWeaponItem_Params
{
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.DestroyItemStudio
struct UWeaponBodySlotWidget_Gamepad_C_DestroyItemStudio_Params
{
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_AmmoName_Prepass_1
struct UWeaponBodySlotWidget_Gamepad_C_On_AmmoName_Prepass_1_Params
{
	class UWidget**                                    BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetAmmoName
struct UWeaponBodySlotWidget_Gamepad_C_GetAmmoName_Params
{
	struct FText                                       ItemName;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.InitBody
struct UWeaponBodySlotWidget_Gamepad_C_InitBody_Params
{
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.CanHandleInput
struct UWeaponBodySlotWidget_Gamepad_C_CanHandleInput_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsFocus
struct UWeaponBodySlotWidget_Gamepad_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotSelected_Bp
struct UWeaponBodySlotWidget_Gamepad_C_IsSlotSelected_Bp_Params
{
	bool                                               res;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetBackgroundState
struct UWeaponBodySlotWidget_Gamepad_C_GetBackgroundState_Params
{
	float                                              State;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.SetFocus
struct UWeaponBodySlotWidget_Gamepad_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotMouseOver_Bp
struct UWeaponBodySlotWidget_Gamepad_C_IsSlotMouseOver_Bp_Params
{
	bool                                               IsMouseOver;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotOn_Bp
struct UWeaponBodySlotWidget_Gamepad_C_IsSlotOn_Bp_Params
{
	bool                                               IsOn;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.IsSlotSubOn_Bp
struct UWeaponBodySlotWidget_Gamepad_C_IsSlotSubOn_Bp_Params
{
	bool                                               SubOn;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetInventoryWidgetGamepad
struct UWeaponBodySlotWidget_Gamepad_C_GetInventoryWidgetGamepad_Params
{
	class UInventoryWidget_Gamepad_C*                  NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_BackgroundBorder_Prepass_1
struct UWeaponBodySlotWidget_Gamepad_C_On_BackgroundBorder_Prepass_1_Params
{
	class UWidget**                                    BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetItem_Bp
struct UWeaponBodySlotWidget_Gamepad_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponCaptureImage_Prepass_1
struct UWeaponBodySlotWidget_Gamepad_C_On_WeaponCaptureImage_Prepass_1_Params
{
	class UWidget**                                    BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetAmmoIcon
struct UWeaponBodySlotWidget_Gamepad_C_GetAmmoIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_AmmoIcon_Prepass_1
struct UWeaponBodySlotWidget_Gamepad_C_On_AmmoIcon_Prepass_1_Params
{
	class UWidget**                                    BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetHandOnUnLoadedAmmoCount
struct UWeaponBodySlotWidget_Gamepad_C_GetHandOnUnLoadedAmmoCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponHandsOnUnloadedAmmoCount_Prepass_1
struct UWeaponBodySlotWidget_Gamepad_C_On_WeaponHandsOnUnloadedAmmoCount_Prepass_1_Params
{
	class UWidget**                                    BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnSpawnActorInSceneCaptureWorld
struct UWeaponBodySlotWidget_Gamepad_C_OnSpawnActorInSceneCaptureWorld_Params
{
	class AActor**                                     SpawnedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateWeapon
struct UWeaponBodySlotWidget_Gamepad_C_OnUpdateWeapon_Params
{
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.GetHandOnLoadedAmmoCount
struct UWeaponBodySlotWidget_Gamepad_C_GetHandOnLoadedAmmoCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponHandsOnLoadedAmmoCount_Prepass_1
struct UWeaponBodySlotWidget_Gamepad_C_On_WeaponHandsOnLoadedAmmoCount_Prepass_1_Params
{
	class UWidget**                                    BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.On_WeaponName_Prepass_1
struct UWeaponBodySlotWidget_Gamepad_C_On_WeaponName_Prepass_1_Params
{
	class UWidget**                                    BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.Construct
struct UWeaponBodySlotWidget_Gamepad_C_Construct_Params
{
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.OnUpdateItem
struct UWeaponBodySlotWidget_Gamepad_C_OnUpdateItem_Params
{
	class UItem**                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponBodySlotWidget_Gamepad.WeaponBodySlotWidget_Gamepad_C.ExecuteUbergraph_WeaponBodySlotWidget_Gamepad
struct UWeaponBodySlotWidget_Gamepad_C_ExecuteUbergraph_WeaponBodySlotWidget_Gamepad_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
