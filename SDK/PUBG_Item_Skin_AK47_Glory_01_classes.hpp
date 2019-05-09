#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Skin_AK47_Glory_01.Item_Skin_AK47_Glory_01_C
// 0x0000 (0x0260 - 0x0260)
class UItem_Skin_AK47_Glory_01_C : public UItem_Skin_WeaponBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Skin_AK47_Glory_01.Item_Skin_AK47_Glory_01_C");
		return ptr;
	}


	bool CheckSkin(const TScriptInterface<class USkinnableInterface>& SkinnableInterface);
	bool ApplySkin(const TScriptInterface<class USkinnableInterface>& SkinnableInterface, int SkinOwnerPlayerId);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
