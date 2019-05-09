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

// Function Engine.AnimInstance.UnlockAIResources
struct UAnimSequencerInstance_UnlockAIResources_Params
{
	bool                                               bUnlockMovement;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UnlockAILogic;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.TryGetPawnOwner
struct UAnimSequencerInstance_TryGetPawnOwner_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.StopSlotAnimation
struct UAnimSequencerInstance_StopSlotAnimation_Params
{
	float                                              inBlendOutTime;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SlotNodeName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.SnapshotPose
struct UAnimSequencerInstance_SnapshotPose_Params
{
	struct FPoseSnapshot                               Snapshot;                                                 // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function Engine.AnimInstance.SetRootMotionMode
struct UAnimSequencerInstance_SetRootMotionMode_Params
{
	TEnumAsByte<ERootMotionMode>                       Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.SetMorphTarget
struct UAnimSequencerInstance_SetMorphTarget_Params
{
	struct FName                                       MorphTargetName;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.SavePoseSnapshot
struct UAnimSequencerInstance_SavePoseSnapshot_Params
{
	struct FName                                       SnapshotName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.PlaySlotAnimationAsDynamicMontage
struct UAnimSequencerInstance_PlaySlotAnimationAsDynamicMontage_Params
{
	class UAnimSequenceBase*                           Asset;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SlotNodeName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendInTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendOutTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InPlayRate;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LoopCount;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendOutTriggerTime;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InTimeToStartMontageAt;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.PlaySlotAnimation
struct UAnimSequencerInstance_PlaySlotAnimation_Params
{
	class UAnimSequenceBase*                           Asset;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SlotNodeName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendInTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BlendOutTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InPlayRate;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LoopCount;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Stop
struct UAnimSequencerInstance_Montage_Stop_Params
{
	float                                              inBlendOutTime;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_SetPosition
struct UAnimSequencerInstance_Montage_SetPosition_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NewPosition;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_SetPlayRate
struct UAnimSequencerInstance_Montage_SetPlayRate_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NewPlayRate;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_SetNextSection
struct UAnimSequencerInstance_Montage_SetNextSection_Params
{
	struct FName                                       SectionNameToChange;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NextSection;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Resume
struct UAnimSequencerInstance_Montage_Resume_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Play
struct UAnimSequencerInstance_Montage_Play_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InPlayRate;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InTimeToStartMontageAt;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_Pause
struct UAnimSequencerInstance_Montage_Pause_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_JumpToSectionsEnd
struct UAnimSequencerInstance_Montage_JumpToSectionsEnd_Params
{
	struct FName                                       SectionName;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_JumpToSection
struct UAnimSequencerInstance_Montage_JumpToSection_Params
{
	struct FName                                       SectionName;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_IsPlaying
struct UAnimSequencerInstance_Montage_IsPlaying_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_IsActive
struct UAnimSequencerInstance_Montage_IsActive_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetPosition
struct UAnimSequencerInstance_Montage_GetPosition_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetPlayRate
struct UAnimSequencerInstance_Montage_GetPlayRate_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetIsStopped
struct UAnimSequencerInstance_Montage_GetIsStopped_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetCurrentSection
struct UAnimSequencerInstance_Montage_GetCurrentSection_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.Montage_GetBlendTime
struct UAnimSequencerInstance_Montage_GetBlendTime_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.LockAIResources
struct UAnimSequencerInstance_LockAIResources_Params
{
	bool                                               bLockMovement;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               LockAILogic;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.IsSyncGroupBetweenMarkers
struct UAnimSequencerInstance_IsSyncGroupBetweenMarkers_Params
{
	struct FName                                       InSyncGroupName;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       PreviousMarker;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       NextMarker;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRespectMarkerOrder;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.IsPlayingSlotAnimation
struct UAnimSequencerInstance_IsPlayingSlotAnimation_Params
{
	class UAnimSequenceBase*                           Asset;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SlotNodeName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.IsAnyMontagePlaying
struct UAnimSequencerInstance_IsAnyMontagePlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.HasMarkerBeenHitThisFrame
struct UAnimSequencerInstance_HasMarkerBeenHitThisFrame_Params
{
	struct FName                                       SyncGroup;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MarkerName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetTimeToClosestMarker
struct UAnimSequencerInstance_GetTimeToClosestMarker_Params
{
	struct FName                                       SyncGroup;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MarkerName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OutMarkerTime;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetSyncGroupPosition
struct UAnimSequencerInstance_GetSyncGroupPosition_Params
{
	struct FName                                       InSyncGroupName;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FMarkerSyncAnimPosition                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Engine.AnimInstance.GetStateWeight
struct UAnimSequencerInstance_GetStateWeight_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StateIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimTimeRemainingFraction
struct UAnimSequencerInstance_GetRelevantAnimTimeRemainingFraction_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StateIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimTimeRemaining
struct UAnimSequencerInstance_GetRelevantAnimTimeRemaining_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StateIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimTimeFraction
struct UAnimSequencerInstance_GetRelevantAnimTimeFraction_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StateIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimTime
struct UAnimSequencerInstance_GetRelevantAnimTime_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StateIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetRelevantAnimLength
struct UAnimSequencerInstance_GetRelevantAnimLength_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StateIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetOwningComponent
struct UAnimSequencerInstance_GetOwningComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetOwningActor
struct UAnimSequencerInstance_GetOwningActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsedFraction
struct UAnimSequencerInstance_GetInstanceTransitionTimeElapsedFraction_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TransitionIndex;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceTransitionTimeElapsed
struct UAnimSequencerInstance_GetInstanceTransitionTimeElapsed_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TransitionIndex;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceTransitionCrossfadeDuration
struct UAnimSequencerInstance_GetInstanceTransitionCrossfadeDuration_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TransitionIndex;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceStateWeight
struct UAnimSequencerInstance_GetInstanceStateWeight_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StateIndex;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceMachineWeight
struct UAnimSequencerInstance_GetInstanceMachineWeight_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceCurrentStateElapsedTime
struct UAnimSequencerInstance_GetInstanceCurrentStateElapsedTime_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEndFraction
struct UAnimSequencerInstance_GetInstanceAssetPlayerTimeFromEndFraction_Params
{
	int                                                AssetPlayerIndex;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFromEnd
struct UAnimSequencerInstance_GetInstanceAssetPlayerTimeFromEnd_Params
{
	int                                                AssetPlayerIndex;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerTimeFraction
struct UAnimSequencerInstance_GetInstanceAssetPlayerTimeFraction_Params
{
	int                                                AssetPlayerIndex;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerTime
struct UAnimSequencerInstance_GetInstanceAssetPlayerTime_Params
{
	int                                                AssetPlayerIndex;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetInstanceAssetPlayerLength
struct UAnimSequencerInstance_GetInstanceAssetPlayerLength_Params
{
	int                                                AssetPlayerIndex;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurveValue
struct UAnimSequencerInstance_GetCurveValue_Params
{
	struct FName                                       CurveName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurrentStateName
struct UAnimSequencerInstance_GetCurrentStateName_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurrentStateElapsedTime
struct UAnimSequencerInstance_GetCurrentStateElapsedTime_Params
{
	int                                                MachineIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetCurrentActiveMontage
struct UAnimSequencerInstance_GetCurrentActiveMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEndFraction
struct UAnimSequencerInstance_GetAnimAssetPlayerTimeFromEndFraction_Params
{
	class UAnimationAsset*                             AnimAsset;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFromEnd
struct UAnimSequencerInstance_GetAnimAssetPlayerTimeFromEnd_Params
{
	class UAnimationAsset*                             AnimAsset;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetAnimAssetPlayerTimeFraction
struct UAnimSequencerInstance_GetAnimAssetPlayerTimeFraction_Params
{
	class UAnimationAsset*                             AnimAsset;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CurrentTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.GetAnimAssetPlayerLength
struct UAnimSequencerInstance_GetAnimAssetPlayerLength_Params
{
	class UAnimationAsset*                             AnimAsset;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.ClearMorphTargets
struct UAnimSequencerInstance_ClearMorphTargets_Params
{
};

// Function Engine.AnimInstance.CalculateDirection
struct UAnimSequencerInstance_CalculateDirection_Params
{
	struct FVector                                     Velocity;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FRotator                                    BaseRotation;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.BlueprintUpdateAnimation
struct UAnimSequencerInstance_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.AnimInstance.BlueprintPostEvaluateAnimation
struct UAnimSequencerInstance_BlueprintPostEvaluateAnimation_Params
{
};

// Function Engine.AnimInstance.BlueprintInitializeAnimation
struct UAnimSequencerInstance_BlueprintInitializeAnimation_Params
{
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
struct UPlayMontageCallbackProxy_OnNotifyEndReceived_Params
{
	struct FName                                       NotifyName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload;                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
struct UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params
{
	struct FName                                       NotifyName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBranchingPointNotifyPayload                BranchingPointNotifyPayload;                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
struct UPlayMontageCallbackProxy_OnMontageEnded_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInterrupted;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
struct UPlayMontageCallbackProxy_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInterrupted;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
struct UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params
{
	class USkeletalMeshComponent*                      InSkeletalMeshComponent;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UAnimMontage*                                MontageToPlay;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PlayRate;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartingPosition;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       StartingSection;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPlayMontageCallbackProxy*                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
