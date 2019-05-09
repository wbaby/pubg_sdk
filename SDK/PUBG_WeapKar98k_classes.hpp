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

// BlueprintGeneratedClass WeapKar98k.WeapKar98k_C
// 0x0008 (0x0E98 - 0x0E90)
class AWeapKar98k_C : public ADefaultRifleSetting_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0E90(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapKar98k.WeapKar98k_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_WeapKar98k(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
