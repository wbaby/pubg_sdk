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

// BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C
// 0x0070 (0x0458 - 0x03E8)
class AReplayList_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTslGameInstance*                            TslGameInstance;                                          // 0x03F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UUiReplayList_C*                             UiReplayList;                                             // 0x0400(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FString                                     IsLive;                                                   // 0x0408(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FText                                       NewVar_1;                                                 // 0x0418(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FString                                     RegionOrLocal;                                            // 0x0430(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                PageSize;                                                 // 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                pageCount;                                                // 0x0444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              prev_Percent;                                             // 0x0448(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x044C(0x0004) MISSED OFFSET
	class UWidget*                                     CurrentItemWidget;                                        // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ReplayList_BP.ReplayList_BP_C");
		return ptr;
	}


	void OnUpdateItem(struct FReplayItem* inReplayItem);
	void UpdateReplayList(struct FString* inRegionOrLocal);
	void CheckReplayBusyStatus(bool* bIsReplayBusy);
	void OnGoPageBtn();
	void OnNextPageBtn();
	void OnPrevPageBtn();
	void ClearReplayList();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CreateReplayListEvent();
	void PrevPageEvent();
	void NextPageEvent();
	void GoPageEvent();
	void OnItemClicked(struct FString* RegionOrLocal, struct FReplayItem* inReplayItem);
	void ExecuteUbergraph_ReplayList_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
