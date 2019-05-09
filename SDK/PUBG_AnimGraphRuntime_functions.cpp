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

// Function Engine.AnimInstance.UnlockAIResources
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bUnlockMovement                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           UnlockAILogic                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.UnlockAIResources");

	UAnimSequencerInstance_UnlockAIResources_Params params;
	params.bUnlockMovement = bUnlockMovement;
	params.UnlockAILogic = UnlockAILogic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.TryGetPawnOwner
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APawn* UAnimSequencerInstance::TryGetPawnOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.TryGetPawnOwner");

	UAnimSequencerInstance_TryGetPawnOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.StopSlotAnimation
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          inBlendOutTime                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SlotNodeName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::StopSlotAnimation(float inBlendOutTime, const struct FName& SlotNodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.StopSlotAnimation");

	UAnimSequencerInstance_StopSlotAnimation_Params params;
	params.inBlendOutTime = inBlendOutTime;
	params.SlotNodeName = SlotNodeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SnapshotPose
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FPoseSnapshot           Snapshot                       (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UAnimSequencerInstance::SnapshotPose(struct FPoseSnapshot* Snapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SnapshotPose");

	UAnimSequencerInstance_SnapshotPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Snapshot != nullptr)
		*Snapshot = params.Snapshot;
}


// Function Engine.AnimInstance.SetRootMotionMode
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ERootMotionMode>   Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::SetRootMotionMode(TEnumAsByte<ERootMotionMode> Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SetRootMotionMode");

	UAnimSequencerInstance_SetRootMotionMode_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SetMorphTarget
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   MorphTargetName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::SetMorphTarget(const struct FName& MorphTargetName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SetMorphTarget");

	UAnimSequencerInstance_SetMorphTarget_Params params;
	params.MorphTargetName = MorphTargetName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.SavePoseSnapshot
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   SnapshotName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::SavePoseSnapshot(const struct FName& SnapshotName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.SavePoseSnapshot");

	UAnimSequencerInstance_SavePoseSnapshot_Params params;
	params.SnapshotName = SnapshotName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimSequenceBase*       Asset                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SlotNodeName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BlendInTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BlendOutTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InPlayRate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            LoopCount                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BlendOutTriggerTime            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InTimeToStartMontageAt         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* UAnimSequencerInstance::PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage");

	UAnimSequencerInstance_PlaySlotAnimationAsDynamicMontage_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;
	params.BlendOutTriggerTime = BlendOutTriggerTime;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.PlaySlotAnimation
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimSequenceBase*       Asset                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SlotNodeName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BlendInTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          BlendOutTime                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InPlayRate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            LoopCount                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::PlaySlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.PlaySlotAnimation");

	UAnimSequencerInstance_PlaySlotAnimation_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;
	params.BlendInTime = BlendInTime;
	params.BlendOutTime = BlendOutTime;
	params.InPlayRate = InPlayRate;
	params.LoopCount = LoopCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_Stop
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          inBlendOutTime                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::Montage_Stop(float inBlendOutTime, class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Stop");

	UAnimSequencerInstance_Montage_Stop_Params params;
	params.inBlendOutTime = inBlendOutTime;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetPosition
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewPosition                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::Montage_SetPosition(class UAnimMontage* Montage, float NewPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_SetPosition");

	UAnimSequencerInstance_Montage_SetPosition_Params params;
	params.Montage = Montage;
	params.NewPosition = NewPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetPlayRate
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          NewPlayRate                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::Montage_SetPlayRate(class UAnimMontage* Montage, float NewPlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_SetPlayRate");

	UAnimSequencerInstance_Montage_SetPlayRate_Params params;
	params.Montage = Montage;
	params.NewPlayRate = NewPlayRate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_SetNextSection
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   SectionNameToChange            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   NextSection                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::Montage_SetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_SetNextSection");

	UAnimSequencerInstance_Montage_SetNextSection_Params params;
	params.SectionNameToChange = SectionNameToChange;
	params.NextSection = NextSection;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_Resume
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::Montage_Resume(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Resume");

	UAnimSequencerInstance_Montage_Resume_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_Play
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            MontageToPlay                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InPlayRate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InTimeToStartMontageAt         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, float InTimeToStartMontageAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Play");

	UAnimSequencerInstance_Montage_Play_Params params;
	params.MontageToPlay = MontageToPlay;
	params.InPlayRate = InPlayRate;
	params.InTimeToStartMontageAt = InTimeToStartMontageAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_Pause
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::Montage_Pause(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_Pause");

	UAnimSequencerInstance_Montage_Pause_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_JumpToSectionsEnd
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::Montage_JumpToSectionsEnd(const struct FName& SectionName, class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_JumpToSectionsEnd");

	UAnimSequencerInstance_Montage_JumpToSectionsEnd_Params params;
	params.SectionName = SectionName;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_JumpToSection
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   SectionName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::Montage_JumpToSection(const struct FName& SectionName, class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_JumpToSection");

	UAnimSequencerInstance_Montage_JumpToSection_Params params;
	params.SectionName = SectionName;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.Montage_IsPlaying
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAnimSequencerInstance::Montage_IsPlaying(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_IsPlaying");

	UAnimSequencerInstance_Montage_IsPlaying_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_IsActive
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAnimSequencerInstance::Montage_IsActive(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_IsActive");

	UAnimSequencerInstance_Montage_IsActive_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetPosition
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::Montage_GetPosition(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetPosition");

	UAnimSequencerInstance_Montage_GetPosition_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetPlayRate
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::Montage_GetPlayRate(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetPlayRate");

	UAnimSequencerInstance_Montage_GetPlayRate_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetIsStopped
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAnimSequencerInstance::Montage_GetIsStopped(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetIsStopped");

	UAnimSequencerInstance_Montage_GetIsStopped_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetCurrentSection
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UAnimSequencerInstance::Montage_GetCurrentSection(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetCurrentSection");

	UAnimSequencerInstance_Montage_GetCurrentSection_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.Montage_GetBlendTime
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::Montage_GetBlendTime(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.Montage_GetBlendTime");

	UAnimSequencerInstance_Montage_GetBlendTime_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.LockAIResources
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bLockMovement                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           LockAILogic                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::LockAIResources(bool bLockMovement, bool LockAILogic)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.LockAIResources");

	UAnimSequencerInstance_LockAIResources_Params params;
	params.bLockMovement = bLockMovement;
	params.LockAILogic = LockAILogic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.IsSyncGroupBetweenMarkers
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   InSyncGroupName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   PreviousMarker                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   NextMarker                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRespectMarkerOrder            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAnimSequencerInstance::IsSyncGroupBetweenMarkers(const struct FName& InSyncGroupName, const struct FName& PreviousMarker, const struct FName& NextMarker, bool bRespectMarkerOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.IsSyncGroupBetweenMarkers");

	UAnimSequencerInstance_IsSyncGroupBetweenMarkers_Params params;
	params.InSyncGroupName = InSyncGroupName;
	params.PreviousMarker = PreviousMarker;
	params.NextMarker = NextMarker;
	params.bRespectMarkerOrder = bRespectMarkerOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.IsPlayingSlotAnimation
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimSequenceBase*       Asset                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SlotNodeName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAnimSequencerInstance::IsPlayingSlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.IsPlayingSlotAnimation");

	UAnimSequencerInstance_IsPlayingSlotAnimation_Params params;
	params.Asset = Asset;
	params.SlotNodeName = SlotNodeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.IsAnyMontagePlaying
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAnimSequencerInstance::IsAnyMontagePlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.IsAnyMontagePlaying");

	UAnimSequencerInstance_IsAnyMontagePlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.HasMarkerBeenHitThisFrame
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   SyncGroup                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   MarkerName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAnimSequencerInstance::HasMarkerBeenHitThisFrame(const struct FName& SyncGroup, const struct FName& MarkerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.HasMarkerBeenHitThisFrame");

	UAnimSequencerInstance_HasMarkerBeenHitThisFrame_Params params;
	params.SyncGroup = SyncGroup;
	params.MarkerName = MarkerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetTimeToClosestMarker
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   SyncGroup                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   MarkerName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          OutMarkerTime                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UAnimSequencerInstance::GetTimeToClosestMarker(const struct FName& SyncGroup, const struct FName& MarkerName, float* OutMarkerTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetTimeToClosestMarker");

	UAnimSequencerInstance_GetTimeToClosestMarker_Params params;
	params.SyncGroup = SyncGroup;
	params.MarkerName = MarkerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutMarkerTime != nullptr)
		*OutMarkerTime = params.OutMarkerTime;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetSyncGroupPosition
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   InSyncGroupName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FMarkerSyncAnimPosition ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FMarkerSyncAnimPosition UAnimSequencerInstance::GetSyncGroupPosition(const struct FName& InSyncGroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetSyncGroupPosition");

	UAnimSequencerInstance_GetSyncGroupPosition_Params params;
	params.InSyncGroupName = InSyncGroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetStateWeight
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StateIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetStateWeight(int MachineIndex, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetStateWeight");

	UAnimSequencerInstance_GetStateWeight_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StateIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetRelevantAnimTimeRemainingFraction(int MachineIndex, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction");

	UAnimSequencerInstance_GetRelevantAnimTimeRemainingFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeRemaining
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StateIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetRelevantAnimTimeRemaining(int MachineIndex, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTimeRemaining");

	UAnimSequencerInstance_GetRelevantAnimTimeRemaining_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTimeFraction
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StateIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetRelevantAnimTimeFraction(int MachineIndex, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTimeFraction");

	UAnimSequencerInstance_GetRelevantAnimTimeFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimTime
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StateIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetRelevantAnimTime(int MachineIndex, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimTime");

	UAnimSequencerInstance_GetRelevantAnimTime_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetRelevantAnimLength
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StateIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetRelevantAnimLength(int MachineIndex, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetRelevantAnimLength");

	UAnimSequencerInstance_GetRelevantAnimLength_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetOwningComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USkeletalMeshComponent* UAnimSequencerInstance::GetOwningComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetOwningComponent");

	UAnimSequencerInstance_GetOwningComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetOwningActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* UAnimSequencerInstance::GetOwningActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetOwningActor");

	UAnimSequencerInstance_GetOwningActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TransitionIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetInstanceTransitionTimeElapsedFraction(int MachineIndex, int TransitionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction");

	UAnimSequencerInstance_GetInstanceTransitionTimeElapsedFraction_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TransitionIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetInstanceTransitionTimeElapsed(int MachineIndex, int TransitionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed");

	UAnimSequencerInstance_GetInstanceTransitionTimeElapsed_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            TransitionIndex                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetInstanceTransitionCrossfadeDuration(int MachineIndex, int TransitionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration");

	UAnimSequencerInstance_GetInstanceTransitionCrossfadeDuration_Params params;
	params.MachineIndex = MachineIndex;
	params.TransitionIndex = TransitionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceStateWeight
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            StateIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetInstanceStateWeight(int MachineIndex, int StateIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceStateWeight");

	UAnimSequencerInstance_GetInstanceStateWeight_Params params;
	params.MachineIndex = MachineIndex;
	params.StateIndex = StateIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceMachineWeight
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetInstanceMachineWeight(int MachineIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceMachineWeight");

	UAnimSequencerInstance_GetInstanceMachineWeight_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetInstanceCurrentStateElapsedTime(int MachineIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime");

	UAnimSequencerInstance_GetInstanceCurrentStateElapsedTime_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            AssetPlayerIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetInstanceAssetPlayerTimeFromEndFraction(int AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction");

	UAnimSequencerInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            AssetPlayerIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetInstanceAssetPlayerTimeFromEnd(int AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd");

	UAnimSequencerInstance_GetInstanceAssetPlayerTimeFromEnd_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            AssetPlayerIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetInstanceAssetPlayerTimeFraction(int AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction");

	UAnimSequencerInstance_GetInstanceAssetPlayerTimeFraction_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerTime
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            AssetPlayerIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetInstanceAssetPlayerTime(int AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerTime");

	UAnimSequencerInstance_GetInstanceAssetPlayerTime_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetInstanceAssetPlayerLength
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            AssetPlayerIndex               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetInstanceAssetPlayerLength(int AssetPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetInstanceAssetPlayerLength");

	UAnimSequencerInstance_GetInstanceAssetPlayerLength_Params params;
	params.AssetPlayerIndex = AssetPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurveValue
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   CurveName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetCurveValue(const struct FName& CurveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurveValue");

	UAnimSequencerInstance_GetCurveValue_Params params;
	params.CurveName = CurveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurrentStateName
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName UAnimSequencerInstance::GetCurrentStateName(int MachineIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurrentStateName");

	UAnimSequencerInstance_GetCurrentStateName_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurrentStateElapsedTime
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MachineIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetCurrentStateElapsedTime(int MachineIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurrentStateElapsedTime");

	UAnimSequencerInstance_GetCurrentStateElapsedTime_Params params;
	params.MachineIndex = MachineIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetCurrentActiveMontage
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UAnimMontage* UAnimSequencerInstance::GetCurrentActiveMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetCurrentActiveMontage");

	UAnimSequencerInstance_GetCurrentActiveMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimationAsset*         AnimAsset                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CurrentTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetAnimAssetPlayerTimeFromEndFraction(class UAnimationAsset* AnimAsset, float CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction");

	UAnimSequencerInstance_GetAnimAssetPlayerTimeFromEndFraction_Params params;
	params.AnimAsset = AnimAsset;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimationAsset*         AnimAsset                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CurrentTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetAnimAssetPlayerTimeFromEnd(class UAnimationAsset* AnimAsset, float CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd");

	UAnimSequencerInstance_GetAnimAssetPlayerTimeFromEnd_Params params;
	params.AnimAsset = AnimAsset;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimationAsset*         AnimAsset                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CurrentTime                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetAnimAssetPlayerTimeFraction(class UAnimationAsset* AnimAsset, float CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction");

	UAnimSequencerInstance_GetAnimAssetPlayerTimeFraction_Params params;
	params.AnimAsset = AnimAsset;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.GetAnimAssetPlayerLength
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimationAsset*         AnimAsset                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::GetAnimAssetPlayerLength(class UAnimationAsset* AnimAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.GetAnimAssetPlayerLength");

	UAnimSequencerInstance_GetAnimAssetPlayerLength_Params params;
	params.AnimAsset = AnimAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.ClearMorphTargets
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAnimSequencerInstance::ClearMorphTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.ClearMorphTargets");

	UAnimSequencerInstance_ClearMorphTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.CalculateDirection
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Velocity                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FRotator                BaseRotation                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float UAnimSequencerInstance::CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.CalculateDirection");

	UAnimSequencerInstance_CalculateDirection_Params params;
	params.Velocity = Velocity;
	params.BaseRotation = BaseRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.AnimInstance.BlueprintUpdateAnimation
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          DeltaTimeX                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UAnimSequencerInstance::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintUpdateAnimation");

	UAnimSequencerInstance_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAnimSequencerInstance::BlueprintPostEvaluateAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintPostEvaluateAnimation");

	UAnimSequencerInstance_BlueprintPostEvaluateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.AnimInstance.BlueprintInitializeAnimation
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void UAnimSequencerInstance::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.AnimInstance.BlueprintInitializeAnimation");

	UAnimSequencerInstance_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   NotifyName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayMontageCallbackProxy::OnNotifyEndReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived");

	UPlayMontageCallbackProxy_OnNotifyEndReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   NotifyName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FBranchingPointNotifyPayload BranchingPointNotifyPayload    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(const struct FName& NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived");

	UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params params;
	params.NotifyName = NotifyName;
	params.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInterrupted                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded");

	UPlayMontageCallbackProxy_OnMontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UAnimMontage*            Montage                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bInterrupted                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut");

	UPlayMontageCallbackProxy_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USkeletalMeshComponent*  InSkeletalMeshComponent        (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UAnimMontage*            MontageToPlay                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          PlayRate                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartingPosition               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   StartingSection                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPlayMontageCallbackProxy* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, const struct FName& StartingSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage");

	UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params params;
	params.InSkeletalMeshComponent = InSkeletalMeshComponent;
	params.MontageToPlay = MontageToPlay;
	params.PlayRate = PlayRate;
	params.StartingPosition = StartingPosition;
	params.StartingSection = StartingSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
