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

// BlueprintGeneratedClass BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C
// 0x0010 (0x0490 - 0x0480)
class ABP_TslBaseLobbySceneTravel_Teleport_C : public ATslBaseLobbySceneTravel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TslBaseLobbySceneTravel_Teleport.BP_TslBaseLobbySceneTravel_Teleport_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStartTravel();
	void ExecuteUbergraph_BP_TslBaseLobbySceneTravel_Teleport(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
