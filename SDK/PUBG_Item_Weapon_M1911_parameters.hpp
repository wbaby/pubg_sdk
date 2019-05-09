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

// Function TslGame.WeaponItem.SetFiringMode
struct UItem_Weapon_M1911_C_SetFiringMode_Params
{
};

// Function TslGame.WeaponItem.IsAttachable
struct UItem_Weapon_M1911_C_IsAttachable_Params
{
	class UAttachableItem*                             Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.HasAttachmentSlot
struct UItem_Weapon_M1911_C_HasAttachmentSlot_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.GetFiringMode
struct UItem_Weapon_M1911_C_GetFiringMode_Params
{
};

// Function TslGame.WeaponItem.GetEquippedWeapon
struct UItem_Weapon_M1911_C_GetEquippedWeapon_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.GetDefaultWeaponObject
struct UItem_Weapon_M1911_C_GetDefaultWeaponObject_Params
{
	class ATslWeapon*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.GetAttachedItem
struct UItem_Weapon_M1911_C_GetAttachedItem_Params
{
	class UAttachableItem*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.GetAttachableItemCount
struct UItem_Weapon_M1911_C_GetAttachableItemCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.GetAllAttachedItems
struct UItem_Weapon_M1911_C_GetAllAttachedItems_Params
{
	TArray<class UAttachableItem*>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function TslGame.WeaponItem.DetachItem
struct UItem_Weapon_M1911_C_DetachItem_Params
{
	class UAttachableItem*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.WeaponItem.AttachItem
struct UItem_Weapon_M1911_C_AttachItem_Params
{
	class UAttachableItem*                             Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
