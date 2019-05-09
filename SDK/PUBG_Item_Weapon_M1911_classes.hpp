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

// BlueprintGeneratedClass Item_Weapon_M1911.Item_Weapon_M1911_C
// 0x0000 (0x03C8 - 0x03C8)
class UItem_Weapon_M1911_C : public UWeaponItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Weapon_M1911.Item_Weapon_M1911_C");
		return ptr;
	}


	void SetFiringMode();
	bool IsAttachable(class UAttachableItem* Item);
	bool HasAttachmentSlot();
	void GetFiringMode();
	class ATslWeapon* GetEquippedWeapon();
	class ATslWeapon* GetDefaultWeaponObject();
	class UAttachableItem* GetAttachedItem();
	int GetAttachableItemCount();
	TArray<class UAttachableItem*> GetAllAttachedItems();
	class UAttachableItem* DetachItem();
	bool AttachItem(class UAttachableItem* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
