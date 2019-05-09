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

// BlueprintGeneratedClass LobbyHUD_Default.LobbyHUD_Default_C
// 0x0008 (0x0D08 - 0x0D00)
class ALobbyHUD_Default_C : public ALobbyHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D00(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LobbyHUD_Default.LobbyHUD_Default_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceivePostBeginPlay();
	void ExecuteUbergraph_LobbyHUD_Default(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
