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

// BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C
// 0x00C0 (0x0510 - 0x0450)
class ALobbyViewMode_C : public AViewModeStudio
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             Scene;                                                    // 0x0458(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FRotator                                    Target;                                                   // 0x0460(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    Rollback;                                                 // 0x046C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0478(0x0008) MISSED OFFSET
	struct FTransform                                  CurrentTM;                                                // 0x0480(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  NextTM;                                                   // 0x04B0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTransform                                  Temp;                                                     // 0x04E0(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LobbyViewMode.LobbyViewMode_C");
		return ptr;
	}


	void UserConstructionScript();
	void AddYaw(float* Value);
	void AddPitch(float* Value);
	void AddRoll(float* Value);
	void AddViewDistance(float* Value);
	void ReceiveTick(float* DeltaSeconds);
	void SetViewModeAbleActor(class AActor** Actor);
	void ExecuteUbergraph_LobbyViewMode(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
