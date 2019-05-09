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

// WidgetBlueprintGeneratedClass LobbyNameTagHUD.LobbyNameTagHUD_C
// 0x0000 (0x0400 - 0x0400)
class ULobbyNameTagHUD_C : public UTslLobbyNameTagHudWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyNameTagHUD.LobbyNameTagHUD_C");
		return ptr;
	}


	void SetNameTagWidget_Internal(int SlotIndex);
	void ResetNameTagWidget_Internal(int SlotIndex);
	class UTslLobbyNameTagWidget* GetNameTagWidget_Internal(int SlotIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
