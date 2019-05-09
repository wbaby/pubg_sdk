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

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotItem
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetSlotItem_Params
{
	TScriptInterface<class USlotInterface>             SlotItem;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotContainer
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetSlotContainer_Params
{
	TScriptInterface<class USlotContainerInterface>    SlotContainer;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsBodyFocused
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsBodyFocused_Params
{
	bool                                               NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsAttachmentSlotFocused
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsAttachmentSlotFocused_Params
{
	bool                                               res;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsWeaponExist
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsWeaponExist_Params
{
	bool                                               res;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.CanHandleInput
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_CanHandleInput_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ContainFocus
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ContainFocus_Params
{
	bool                                               res;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocusToAttachment
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetFocusToAttachment_Params
{
	bool*                                              bFocus;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocusToBody
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetFocusToBody_Params
{
	bool                                               bFocus;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetBackgroundState
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetBackgroundState_Params
{
	float                                              State;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotSelected_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotSelected_Bp_Params
{
	bool                                               res;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnSwap
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnSwap_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessSwap
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ProcessSwap_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnPressedSwap
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnPressedSwap_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessDrop
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ProcessDrop_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.DropOrUnequipItem
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_DropOrUnequipItem_Params
{
	bool*                                              bDrop;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDeatchOrDropAttachment
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDeatchOrDropAttachment_Params
{
	bool*                                              bDetach;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bAll;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ReleasedDropInput
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ReleasedDropInput_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedDropInput
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_PressedDropInput_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ProcessDetach
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ProcessDetach_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ReleaseDetachInput
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ReleaseDetachInput_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.PressedDetachInput
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_PressedDetachInput_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetInventoryWidgetGamepad
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetInventoryWidgetGamepad_Params
{
	class UInventoryWidget_Gamepad_C*                  NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_BackgroundSlot_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_On_BackgroundSlot_Prepass_1_Params
{
	class UWidget**                                    BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindLastFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_FindLastFocusableWidget_Params
{
	class UUserWidget*                                 Widget;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.HandleWidgetMoveRight
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_HandleWidgetMoveRight_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.HandleWidgetMoveLeft
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_HandleWidgetMoveLeft_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetFocusingChildWidget
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetFocusingChildWidget_Params
{
	class UUserWidget*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetChildRightFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetChildRightFocusableWidget_Params
{
	class UUserWidget*                                 RightWidget;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetChildLeftFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetChildLeftFocusableWidget_Params
{
	class UUserWidget*                                 Left_Widget;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsFocusable
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsFocusable_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindFirstFocusableWidget
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_FindFirstFocusableWidget_Params
{
	class UUserWidget*                                 FocusableWidget;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsFocus
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsFocus_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetFocus
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetFocus_Params
{
	bool*                                              NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetDragDroppingEquipableItem
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetDragDroppingEquipableItem_Params
{
	class UEquipableItem*                              EquipableItem;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.FindEquipableWeaponPosition
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_FindEquipableWeaponPosition_Params
{
	struct FEquipPosition                              WeaponPosition;                                           // (CPF_Parm, CPF_OutParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.UpdateWeaponGunInfo
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_UpdateWeaponGunInfo_Params
{
	class UWidget**                                    BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetAmmoName
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetAmmoName_Params
{
	struct FText                                       ItemName;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetAmmoIcon
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetAmmoIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetHandOnUnLoadedAmmoCount
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetHandOnUnLoadedAmmoCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetHandOnLoadedAmmoCount
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetHandOnLoadedAmmoCount_Params
{
	int                                                Count;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_AmmoInfoLayer_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_On_AmmoInfoLayer_Prepass_1_Params
{
	class UWidget**                                    BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnUpdateWeapon
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnUpdateWeapon_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.On_WeaponCaptureImage_Prepass_1
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_On_WeaponCaptureImage_Prepass_1_Params
{
	class UWidget**                                    BoundWidget;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetItem_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetItem_Bp_Params
{
	class UItem*                                       Item;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotMouseOver_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotMouseOver_Bp_Params
{
	bool                                               IsMouseOver;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotSubOn_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotSubOn_Bp_Params
{
	bool                                               SubOn;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.IsSlotOn_Bp
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_IsSlotOn_Bp_Params
{
	bool                                               IsOn;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetWeaponSlotEquipId
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetWeaponSlotEquipId_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.InitializeWeaponEquipSlot
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_InitializeWeaponEquipSlot_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetSlotVisibility
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetSlotVisibility_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.GetWeaponInfoText
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_GetWeaponInfoText_Params
{
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Construct
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Construct_Params
{
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnUpdateItem
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnUpdateItem_Params
{
	class UItem**                                      Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.SetInventory
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_SetInventory_Params
{
	class UInventoryWidget_C**                         InventoryWidget;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.Tick
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused_Event_1
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnAttachmentFocused_Event_1_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>*   SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__Muzzle_K2Node_ComponentBoundEvent_17_OnAttachmentChanged__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BndEvt__Muzzle_K2Node_ComponentBoundEvent_17_OnAttachmentChanged__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>*   SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__LowerRail_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BndEvt__LowerRail_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>*   SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__Magazine_K2Node_ComponentBoundEvent_102_OnAttachmentChanged__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BndEvt__Magazine_K2Node_ComponentBoundEvent_102_OnAttachmentChanged__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>*   SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__UpperRail_K2Node_ComponentBoundEvent_129_OnAttachmentChanged__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BndEvt__UpperRail_K2Node_ComponentBoundEvent_129_OnAttachmentChanged__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>*   SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__Stock_K2Node_ComponentBoundEvent_157_OnAttachmentChanged__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BndEvt__Stock_K2Node_ComponentBoundEvent_157_OnAttachmentChanged__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>*   SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.BndEvt__CantedSight_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_BndEvt__CantedSight_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>*   SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentChanged__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnAttachmentChanged__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>*   SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnWeaponEquipmentFocused__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnWeaponEquipmentFocused__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>*   SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnAttachmentFocused__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnAttachmentFocused__DelegateSignature_Params
{
	TScriptInterface<class USlotInterface>*            SlotInterface;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TScriptInterface<class USlotContainerInterface>*   SlotContainerInterface;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragLeaveWeaponSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDragLeaveWeaponSlot__DelegateSignature_Params
{
	int*                                               SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnDragEnterWeaponSlot__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnDragEnterWeaponSlot__DelegateSignature_Params
{
	int*                                               SlotIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C.OnReleased__DelegateSignature
struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C_OnReleased__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
