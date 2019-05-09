#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UiReplayList.UiReplayList_C.GetIndexFromRegionName
struct UUiReplayList_C_GetIndexFromRegionName_Params
{
	struct FString*                                    RegionName;                                               // (CPF_Parm, CPF_ZeroConstructor)
	int                                                Array_Index;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UiReplayList.UiReplayList_C.UpdateReplayList_Impl
struct UUiReplayList_C_UpdateReplayList_Impl_Params
{
	struct FString*                                    RegionOrLocal;                                            // (CPF_Parm, CPF_ZeroConstructor)
};

// Function UiReplayList.UiReplayList_C.UpdateRegionButtonColors
struct UUiReplayList_C_UpdateRegionButtonColors_Params
{
	int*                                               Index_;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UiReplayList.UiReplayList_C.ChangeCloseButtonForTest
struct UUiReplayList_C_ChangeCloseButtonForTest_Params
{
};

// Function UiReplayList.UiReplayList_C.ResetRecorderStatistics
struct UUiReplayList_C_ResetRecorderStatistics_Params
{
};

// Function UiReplayList.UiReplayList_C.ResetSummary
struct UUiReplayList_C_ResetSummary_Params
{
};

// Function UiReplayList.UiReplayList_C.CheckReplayBusyStatus
struct UUiReplayList_C_CheckReplayBusyStatus_Params
{
	bool                                               bIsReplayBusy;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UiReplayList.UiReplayList_C.UpdateRecorderStatistics
struct UUiReplayList_C_UpdateRecorderStatistics_Params
{
	struct FTslReplaySummary*                          inReplaySummary;                                          // (CPF_Parm)
};

// Function UiReplayList.UiReplayList_C.UpdateTeamText
struct UUiReplayList_C_UpdateTeamText_Params
{
	struct FTslReplaySummary*                          inReplaySummary;                                          // (CPF_Parm)
};

// Function UiReplayList.UiReplayList_C.SetShouldKeep
struct UUiReplayList_C_SetShouldKeep_Params
{
	bool                                               bShouldKeep;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UiReplayList.UiReplayList_C.UpdateReplaySummary
struct UUiReplayList_C_UpdateReplaySummary_Params
{
	struct FTslReplaySummary*                          ReplaySummary;                                            // (CPF_Parm)
};

// Function UiReplayList.UiReplayList_C.SetReplayItemToProcess
struct UUiReplayList_C_SetReplayItemToProcess_Params
{
	struct FString*                                    RegionOrLocal;                                            // (CPF_Parm, CPF_ZeroConstructor)
	struct FReplayItem*                                inReplayItem;                                             // (CPF_Parm)
};

// Function UiReplayList.UiReplayList_C.HidePageWidget
struct UUiReplayList_C_HidePageWidget_Params
{
};

// Function UiReplayList.UiReplayList_C.ShowPageWidget
struct UUiReplayList_C_ShowPageWidget_Params
{
};

// Function UiReplayList.UiReplayList_C.ClearReplayList
struct UUiReplayList_C_ClearReplayList_Params
{
};

// Function UiReplayList.UiReplayList_C.Construct
struct UUiReplayList_C_Construct_Params
{
};

// Function UiReplayList.UiReplayList_C.Tick
struct UUiReplayList_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UiReplayList.UiReplayList_C.BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__Button_262_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__Button_AS_K2Node_ComponentBoundEvent_538_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__Button_EU_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__Button_NA_K2Node_ComponentBoundEvent_36_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__Button_SA_K2Node_ComponentBoundEvent_57_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__Button_SEA_K2Node_ComponentBoundEvent_79_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__Button_OC_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__Button_Local_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__PrevButton_K2Node_ComponentBoundEvent_670_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__NexButton_K2Node_ComponentBoundEvent_696_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__ButtonGo_K2Node_ComponentBoundEvent_217_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_211_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__Button_Play_K2Node_ComponentBoundEvent_233_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__Button_Delete_K2Node_ComponentBoundEvent_810_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__Button_DeleteOlds_K2Node_ComponentBoundEvent_271_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.OnKeepAndDeleteOldestReplaysDoneEvent
struct UUiReplayList_C_OnKeepAndDeleteOldestReplaysDoneEvent_Params
{
	int*                                               Remains;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UiReplayList.UiReplayList_C.OnGetReplaySummaryEvent
struct UUiReplayList_C_OnGetReplaySummaryEvent_Params
{
	struct FTslReplaySummary*                          ReplaySummary;                                            // (CPF_Parm)
};

// Function UiReplayList.UiReplayList_C.BndEvt__Button_JP_K2Node_ComponentBoundEvent_485_OnButtonClickedEvent__DelegateSignature
struct UUiReplayList_C_BndEvt__Button_JP_K2Node_ComponentBoundEvent_485_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.ExecuteUbergraph_UiReplayList
struct UUiReplayList_C_ExecuteUbergraph_UiReplayList_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function UiReplayList.UiReplayList_C.DeleteReplayEvent__DelegateSignature
struct UUiReplayList_C_DeleteReplayEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.QuitApplicationEvent__DelegateSignature
struct UUiReplayList_C_QuitApplicationEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.GoPageEvent__DelegateSignature
struct UUiReplayList_C_GoPageEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.PrevPageEvent__DelegateSignature
struct UUiReplayList_C_PrevPageEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.NextPageEvent__DelegateSignature
struct UUiReplayList_C_NextPageEvent__DelegateSignature_Params
{
};

// Function UiReplayList.UiReplayList_C.UpdateReplayList__DelegateSignature
struct UUiReplayList_C_UpdateReplayList__DelegateSignature_Params
{
	struct FString*                                    RegionOrLocal;                                            // (CPF_Parm, CPF_ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
