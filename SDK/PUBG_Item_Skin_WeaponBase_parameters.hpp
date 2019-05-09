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

// Function TslGame.SkinItem.CheckSkin
struct UItem_Skin_WeaponBase_C_CheckSkin_Params
{
	TScriptInterface<class USkinnableInterface>        SkinnableInterface;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.SkinItem.ApplySkin
struct UItem_Skin_WeaponBase_C_ApplySkin_Params
{
	TScriptInterface<class USkinnableInterface>        SkinnableInterface;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SkinOwnerPlayerId;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
