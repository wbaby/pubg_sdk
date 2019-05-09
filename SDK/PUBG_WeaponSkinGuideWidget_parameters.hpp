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

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.FadeIn
struct UWeaponSkinGuideWidget_C_FadeIn_Params
{
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.ShowLine
struct UWeaponSkinGuideWidget_C_ShowLine_Params
{
	class UWidget**                                    LineWidget;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bShow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.MouseLeave
struct UWeaponSkinGuideWidget_C_MouseLeave_Params
{
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.InitKeys
struct UWeaponSkinGuideWidget_C_InitKeys_Params
{
	struct FName*                                      ActionName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.SelectNone
struct UWeaponSkinGuideWidget_C_SelectNone_Params
{
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.RefreshByItem
struct UWeaponSkinGuideWidget_C_RefreshByItem_Params
{
	TScriptInterface<class USlotInterface>*            Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.KeySetVisibility
struct UWeaponSkinGuideWidget_C_KeySetVisibility_Params
{
	class UWidget**                                    KeyWidget;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bVisible;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.Construct
struct UWeaponSkinGuideWidget_C_Construct_Params
{
};

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.ExecuteUbergraph_WeaponSkinGuideWidget
struct UWeaponSkinGuideWidget_C_ExecuteUbergraph_WeaponSkinGuideWidget_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
