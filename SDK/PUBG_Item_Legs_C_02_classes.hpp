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

// BlueprintGeneratedClass Item_Legs_C_02.Item_Legs_C_02_C
// 0x0000 (0x0350 - 0x0350)
class UItem_Legs_C_02_C : public UEquipableItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Legs_C_02.Item_Legs_C_02_C");
		return ptr;
	}


	void UnequipBy(class ATslCharacter* Character);
	void PostEquip(class ATslCharacter* Character);
	void OnRep_ReplicatedSkinItem();
	bool EquipBy(class ATslCharacter* Character, const struct FEquipPosition& Position);
	bool CanEquipTo(class ATslCharacter* Character);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
