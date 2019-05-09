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

// BlueprintGeneratedClass TslLobby_Seasonpass0327_main.TslLobby_Seasonpass0327_main_C
// 0x0010 (0x0410 - 0x0400)
class ATslLobby_Seasonpass0327_main_C : public ATslLobbyLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class ACameraActor*                                MainCamera_ExecuteUbergraph_TslLobby_Seasonpass0327_main_RefProperty;// 0x0408(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TslLobby_Seasonpass0327_main.TslLobby_Seasonpass0327_main_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_TslLobby_Seasonpass0327_main(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
