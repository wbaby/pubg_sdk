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

// BlueprintGeneratedClass LobbyCharacterBase_v2.LobbyCharacterBase_v2_C
// 0x0000 (0x0950 - 0x0950)
class ALobbyCharacterBase_v2_C : public ALobbyCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LobbyCharacterBase_v2.LobbyCharacterBase_v2_C");
		return ptr;
	}


	void SetLobbyCharacterAnimationType();
	void OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted);
	bool IsLogout();
	bool IsInCustomizationScene();
	int GetSlotId();
	void GetRankType();
	struct FString GetNickName();
	struct FString GetNetId();
	void GetLobbyCharacterAnimationType();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
