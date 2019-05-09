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

// BlueprintGeneratedClass LobbyParachute.LobbyParachute_C
// 0x0000 (0x0428 - 0x0428)
class ALobbyParachute_C : public ALobbyParachute
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LobbyParachute.LobbyParachute_C");
		return ptr;
	}


	void OnRep_ReplicatedSkinParam();
	void InitializeParachuteMesh();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
