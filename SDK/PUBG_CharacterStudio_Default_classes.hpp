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

// BlueprintGeneratedClass CharacterStudio_Default.CharacterStudio_Default_C
// 0x0008 (0x04F8 - 0x04F0)
class ACharacterStudio_Default_C : public ACharacterStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04F0(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterStudio_Default.CharacterStudio_Default_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveDestroyed();
	void ExecuteUbergraph_CharacterStudio_Default(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
