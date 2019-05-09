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

// BlueprintGeneratedClass MeleeWeaponStudio.MeleeWeaponStudio_C
// 0x0010 (0x0460 - 0x0450)
class AMeleeWeaponStudio_C : public AItemStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAsyncStaticMeshComponent*                   AsyncStaticMesh;                                          // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MeleeWeaponStudio.MeleeWeaponStudio_C");
		return ptr;
	}


	void UpdateMaterial();
	void OnLoaded();
	void UserConstructionScript();
	void SetItem(class UItem** Item);
	void ExecuteUbergraph_MeleeWeaponStudio(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
