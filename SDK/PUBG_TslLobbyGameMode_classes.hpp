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

// BlueprintGeneratedClass TslLobbyGameMode.TSLLobbyGameMode_C
// 0x0008 (0x04D0 - 0x04C8)
class ATSLLobbyGameMode_C : public ATslEntryGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TslLobbyGameMode.TSLLobbyGameMode_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
