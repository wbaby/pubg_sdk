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

// Class CustomMeshComponent.CustomMeshComponent
// 0x0010 (0x0A00 - 0x09F0)
class UCustomMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x09F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomMeshComponent.CustomMeshComponent");
		return ptr;
	}


	void SetVectorParameterValueOnMaterials(const struct FName& ParameterName, const struct FVector& ParameterValue);
	void SetScalarParameterValueOnMaterials(const struct FName& ParameterName, float ParameterValue);
	bool IsMaterialSlotNameValid(const struct FName& MaterialSlotName);
	TArray<struct FName> GetMaterialSlotNames();
	TArray<class UMaterialInterface*> GetMaterials();
	int GetMaterialIndex(const struct FName& MaterialSlotName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
