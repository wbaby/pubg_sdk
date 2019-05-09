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

// BlueprintGeneratedClass GunImpact_Small.GunImpact_Small_C
// 0x0008 (0x09C8 - 0x09C0)
class AGunImpact_Small_C : public ATslImpactEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09C0(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GunImpact_Small.GunImpact_Small_C");
		return ptr;
	}


	struct FDecalEffectDataSet GetAdjustedDecalEffectDataSet_BP();
	void UserConstructionScript();
	void PreWakeUp_BP(struct FTransform* InitialTransform);
	void AdjustDecalEffectDataSet_BP();
	void ExecuteUbergraph_GunImpact_Small(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
