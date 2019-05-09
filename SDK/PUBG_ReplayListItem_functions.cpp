// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplayListItem.ReplayListItem_C.SetMK3DReplayVersion
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           MK3DReplayVersion              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetMK3DReplayVersion(int* MK3DReplayVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetMK3DReplayVersion");

	UReplayListItem_C_SetMK3DReplayVersion_Params params;
	params.MK3DReplayVersion = MK3DReplayVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetHaveCameraEvent
// (FUNC_Final)
// Parameters:
// bool*                          bHaveCameraEvent               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetHaveCameraEvent(bool* bHaveCameraEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetHaveCameraEvent");

	UReplayListItem_C_SetHaveCameraEvent_Params params;
	params.bHaveCameraEvent = bHaveCameraEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetGameVersion
// ()
// Parameters:
// struct FString*                GameVersion                    (CPF_Parm, CPF_ZeroConstructor)

void UReplayListItem_C::SetGameVersion(struct FString* GameVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetGameVersion");

	UReplayListItem_C_SetGameVersion_Params params;
	params.GameVersion = GameVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetAllDeadOrWin
// (FUNC_Final)
// Parameters:
// bool*                          bAllDeadOrWin                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetAllDeadOrWin(bool* bAllDeadOrWin)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetAllDeadOrWin");

	UReplayListItem_C_SetAllDeadOrWin_Params params;
	params.bAllDeadOrWin = bAllDeadOrWin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetSeverRecording
// (FUNC_Final)
// Parameters:
// bool*                          bIsServerRecording             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetSeverRecording(bool* bIsServerRecording)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetSeverRecording");

	UReplayListItem_C_SetSeverRecording_Params params;
	params.bIsServerRecording = bIsServerRecording;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         fPercent                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetActionMessageDownloadPercent(float* fPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetActionMessageDownloadPercent");

	UReplayListItem_C_SetActionMessageDownloadPercent_Params params;
	params.fPercent = fPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FString*                strFileName                    (CPF_Parm, CPF_ZeroConstructor)
// int*                           nReceived                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int*                           nTotal                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::ShowDownloadPercent(struct FString* strFileName, int* nReceived, int* nTotal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.ShowDownloadPercent");

	UReplayListItem_C_ShowDownloadPercent_Params params;
	params.strFileName = strFileName;
	params.nReceived = nReceived;
	params.nTotal = nTotal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.DisableDownload
// ()

void UReplayListItem_C::DisableDownload()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.DisableDownload");

	UReplayListItem_C_DisableDownload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetArchived
// (FUNC_Final)
// Parameters:
// bool*                          IsArchived                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetArchived(bool* IsArchived)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetArchived");

	UReplayListItem_C_SetArchived_Params params;
	params.IsArchived = IsArchived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal
// ()
// Parameters:
// struct FString*                inRegionOrLocal                (CPF_Parm, CPF_ZeroConstructor)

void UReplayListItem_C::SetRegionOrLocal(struct FString* inRegionOrLocal)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetRegionOrLocal");

	UReplayListItem_C_SetRegionOrLocal_Params params;
	params.inRegionOrLocal = inRegionOrLocal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetShouldKeep
// (FUNC_Final)
// Parameters:
// bool                           bShouldKeep                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetShouldKeep(bool bShouldKeep)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetShouldKeep");

	UReplayListItem_C_SetShouldKeep_Params params;
	params.bShouldKeep = bShouldKeep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetCorrupt
// (FUNC_Final)
// Parameters:
// bool*                          bIsCorrupt                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetCorrupt(bool* bIsCorrupt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetCorrupt");

	UReplayListItem_C_SetCorrupt_Params params;
	params.bIsCorrupt = bIsCorrupt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetInComplete
// (FUNC_Final)
// Parameters:
// bool*                          bIncomplete                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetInComplete(bool* bIncomplete)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetInComplete");

	UReplayListItem_C_SetInComplete_Params params;
	params.bIncomplete = bIncomplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetVersionCompatible
// (FUNC_Final)
// Parameters:
// bool*                          bIsVersionCompatible           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetVersionCompatible(bool* bIsVersionCompatible)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetVersionCompatible");

	UReplayListItem_C_SetVersionCompatible_Params params;
	params.bIsVersionCompatible = bIsVersionCompatible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetMode
// ()
// Parameters:
// struct FString*                Mode                           (CPF_Parm, CPF_ZeroConstructor)

void UReplayListItem_C::SetMode(struct FString* Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetMode");

	UReplayListItem_C_SetMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetLength
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           LengthInMS                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetLength(int* LengthInMS)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetLength");

	UReplayListItem_C_SetLength_Params params;
	params.LengthInMS = LengthInMS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple
// ()
// Parameters:
// struct FString*                Message                        (CPF_Parm, CPF_ZeroConstructor)

void UReplayListItem_C::SetActionMessageSimple(struct FString* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetActionMessageSimple");

	UReplayListItem_C_SetActionMessageSimple_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// float*                         fPercent                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetActionMessageDecompressPercent(float* fPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetActionMessageDecompressPercent");

	UReplayListItem_C_SetActionMessageDecompressPercent_Params params;
	params.fPercent = fPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetActionMessage
// (FUNC_RequiredAPI)
// Parameters:
// bool                           bIsDownloading                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsUnzipping                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetActionMessage(bool bIsDownloading, bool bIsUnzipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetActionMessage");

	UReplayListItem_C_SetActionMessage_Params params;
	params.bIsDownloading = bIsDownloading;
	params.bIsUnzipping = bIsUnzipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns
// (FUNC_RequiredAPI)
// Parameters:
// bool                           bIsDownloading                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bIsUnzipping                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetDownloadCancelBtns(bool bIsDownloading, bool bIsUnzipping)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetDownloadCancelBtns");

	UReplayListItem_C_SetDownloadCancelBtns_Params params;
	params.bIsDownloading = bIsDownloading;
	params.bIsUnzipping = bIsUnzipping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetDate
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FDateTime*              Date                           (CPF_Parm)

void UReplayListItem_C::SetDate(struct FDateTime* Date)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetDate");

	UReplayListItem_C_SetDate_Params params;
	params.Date = Date;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetLive
// (FUNC_Final)
// Parameters:
// bool*                          IsLive                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetLive(bool* IsLive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetLive");

	UReplayListItem_C_SetLive_Params params;
	params.IsLive = IsLive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetSize
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           SizeInBytes                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::SetSize(int* SizeInBytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetSize");

	UReplayListItem_C_SetSize_Params params;
	params.SizeInBytes = SizeInBytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetFriendlyName
// ()
// Parameters:
// struct FString*                FriendlyName                   (CPF_Parm, CPF_ZeroConstructor)

void UReplayListItem_C::SetFriendlyName(struct FString* FriendlyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetFriendlyName");

	UReplayListItem_C_SetFriendlyName_Params params;
	params.FriendlyName = FriendlyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetReplayItem
// (FUNC_NetRequest)
// Parameters:
// struct FReplayItem*            ReplayItem                     (CPF_Parm)

void UReplayListItem_C::SetReplayItem(struct FReplayItem* ReplayItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetReplayItem");

	UReplayListItem_C_SetReplayItem_Params params;
	params.ReplayItem = ReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.SetSessionName
// ()
// Parameters:
// struct FString*                Text                           (CPF_Parm, CPF_ZeroConstructor)

void UReplayListItem_C::SetSessionName(struct FString* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.SetSessionName");

	UReplayListItem_C_SetSessionName_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnProgress
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FString*                archive                        (CPF_Parm, CPF_ZeroConstructor)
// float*                         Percentage                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int*                           bytes                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::OnProgress(struct FString* archive, float* Percentage, int* bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.OnProgress");

	UReplayListItem_C_OnProgress_Params params;
	params.archive = archive;
	params.Percentage = Percentage;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnFileDone
// ()
// Parameters:
// struct FString*                archive                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString*                file                           (CPF_Parm, CPF_ZeroConstructor)

void UReplayListItem_C::OnFileDone(struct FString* archive, struct FString* file)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.OnFileDone");

	UReplayListItem_C_OnFileDone_Params params;
	params.archive = archive;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnDone
// (FUNC_Final)
// Parameters:
// struct FString*                archive                        (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<EZipUtilityCompletionState>* CompletionState                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::OnDone(struct FString* archive, TEnumAsByte<EZipUtilityCompletionState>* CompletionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.OnDone");

	UReplayListItem_C_OnDone_Params params;
	params.archive = archive;
	params.CompletionState = CompletionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature
// ()

void UReplayListItem_C::BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature");

	UReplayListItem_C_BndEvt__Cancel_K2Node_ComponentBoundEvent_92_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature
// (FUNC_Final)
// Parameters:
// bool                           bIsChecked                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature");

	UReplayListItem_C_BndEvt__CheckBoxShouldKeep_K2Node_ComponentBoundEvent_548_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.UnzipEvent
// ()
// Parameters:
// struct FString*                strFullPath                    (CPF_Parm, CPF_ZeroConstructor)
// struct FString*                strToExtract                   (CPF_Parm, CPF_ZeroConstructor)

void UReplayListItem_C::UnzipEvent(struct FString* strFullPath, struct FString* strToExtract)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.UnzipEvent");

	UReplayListItem_C_UnzipEvent_Params params;
	params.strFullPath = strFullPath;
	params.strToExtract = strToExtract;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FString*                archive                        (CPF_Parm, CPF_ZeroConstructor)
// float*                         Percentage                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int*                           bytes                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::ShowUnzipPercent(struct FString* archive, float* Percentage, int* bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.ShowUnzipPercent");

	UReplayListItem_C_ShowUnzipPercent_Params params;
	params.archive = archive;
	params.Percentage = Percentage;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// ()

void UReplayListItem_C::BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UReplayListItem_C_BndEvt__ButtonReplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnStartProcess
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// struct FString*                archive                        (CPF_Parm, CPF_ZeroConstructor)
// int*                           bytes                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::OnStartProcess(struct FString* archive, int* bytes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.OnStartProcess");

	UReplayListItem_C_OnStartProcess_Params params;
	params.archive = archive;
	params.bytes = bytes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.OnFileFound
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// struct FString*                archive                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString*                file                           (CPF_Parm, CPF_ZeroConstructor)
// int*                           Size                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::OnFileFound(struct FString* archive, struct FString* file, int* Size)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.OnFileFound");

	UReplayListItem_C_OnFileFound_Params params;
	params.archive = archive;
	params.file = file;
	params.Size = Size;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone
// ()
// Parameters:
// struct FString*                archive                        (CPF_Parm, CPF_ZeroConstructor)
// struct FString*                file                           (CPF_Parm, CPF_ZeroConstructor)

void UReplayListItem_C::ShowUnZipFileDone(struct FString* archive, struct FString* file)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.ShowUnZipFileDone");

	UReplayListItem_C_ShowUnZipFileDone_Params params;
	params.archive = archive;
	params.file = file;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ShowUnzipDone
// (FUNC_Final)
// Parameters:
// struct FString*                archive                        (CPF_Parm, CPF_ZeroConstructor)
// TEnumAsByte<EZipUtilityCompletionState>* CompletionState                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::ShowUnzipDone(struct FString* archive, TEnumAsByte<EZipUtilityCompletionState>* CompletionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.ShowUnzipDone");

	UReplayListItem_C_ShowUnzipDone_Params params;
	params.archive = archive;
	params.CompletionState = CompletionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
// ()

void UReplayListItem_C::BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature");

	UReplayListItem_C_BndEvt__Download_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.Construct
// ()

void UReplayListItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.Construct");

	UReplayListItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem
// (FUNC_BlueprintAuthorityOnly)
// Parameters:
// int*                           EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::ExecuteUbergraph_ReplayListItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.ExecuteUbergraph_ReplayListItem");

	UReplayListItem_C_ExecuteUbergraph_ReplayListItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature
// (FUNC_NetRequest)
// Parameters:
// struct FReplayItem*            inReplayItem                   (CPF_Parm)

void UReplayListItem_C::EventOnUpdateItem__DelegateSignature(struct FReplayItem* inReplayItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.EventOnUpdateItem__DelegateSignature");

	UReplayListItem_C_EventOnUpdateItem__DelegateSignature_Params params;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature
// (FUNC_Exec)
// Parameters:
// struct FString*                RegionOrLocal                  (CPF_Parm, CPF_ZeroConstructor)
// struct FReplayItem*            inReplayItem                   (CPF_Parm)
// struct FReplayItem*            bShoudUpdate                   (CPF_Parm)

void UReplayListItem_C::EventOnUpdateShouldKeep__DelegateSignature(struct FString* RegionOrLocal, struct FReplayItem* inReplayItem, struct FReplayItem* bShoudUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.EventOnUpdateShouldKeep__DelegateSignature");

	UReplayListItem_C_EventOnUpdateShouldKeep__DelegateSignature_Params params;
	params.RegionOrLocal = RegionOrLocal;
	params.inReplayItem = inReplayItem;
	params.bShoudUpdate = bShoudUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FString*                Name                           (CPF_Parm, CPF_ZeroConstructor)
// class UWidget**                Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::EventOnCancelDownloading__DelegateSignature(struct FString* Name, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.EventOnCancelDownloading__DelegateSignature");

	UReplayListItem_C_EventOnCancelDownloading__DelegateSignature_Params params;
	params.Name = Name;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature
// (FUNC_BlueprintCosmetic)
// Parameters:
// struct FString*                Name                           (CPF_Parm, CPF_ZeroConstructor)
// class UWidget**                Widget                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UReplayListItem_C::EventOnDownload__DelegateSignature(struct FString* Name, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.EventOnDownload__DelegateSignature");

	UReplayListItem_C_EventOnDownload__DelegateSignature_Params params;
	params.Name = Name;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature
// (FUNC_NetRequest)
// Parameters:
// struct FString*                inRegionOrLocal                (CPF_Parm, CPF_ZeroConstructor)
// struct FReplayItem*            inReplayItem                   (CPF_Parm)

void UReplayListItem_C::EventOnItemClicked__DelegateSignature(struct FString* inRegionOrLocal, struct FReplayItem* inReplayItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplayListItem.ReplayListItem_C.EventOnItemClicked__DelegateSignature");

	UReplayListItem_C_EventOnItemClicked__DelegateSignature_Params params;
	params.inRegionOrLocal = inRegionOrLocal;
	params.inReplayItem = inReplayItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
