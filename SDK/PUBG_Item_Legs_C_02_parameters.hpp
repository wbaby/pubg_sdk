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

// Function TslGame.EquipableItem.UnequipBy
struct UItem_Legs_C_02_C_UnequipBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.EquipableItem.PostEquip
struct UItem_Legs_C_02_C_PostEquip_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.EquipableItem.OnRep_ReplicatedSkinItem
struct UItem_Legs_C_02_C_OnRep_ReplicatedSkinItem_Params
{
};

// Function TslGame.EquipableItem.EquipBy
struct UItem_Legs_C_02_C_EquipBy_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FEquipPosition                              Position;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.EquipableItem.CanEquipTo
struct UItem_Legs_C_02_C_CanEquipTo_Params
{
	class ATslCharacter*                               Character;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
