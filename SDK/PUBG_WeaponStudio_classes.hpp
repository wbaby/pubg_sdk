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

// BlueprintGeneratedClass WeaponStudio.WeaponStudio_C
// 0x0018 (0x0508 - 0x04F0)
class AWeaponStudio_C : public AWeaponStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UChildActorComponent*                        ChildActor;                                               // 0x04F8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0500(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponStudio.WeaponStudio_C");
		return ptr;
	}


	void UserConstructionScript();
	void SetMeshTransform(class UMeshComponent** Mesh);
	void ExecuteUbergraph_WeaponStudio(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
