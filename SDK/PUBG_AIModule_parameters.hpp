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

// Function AIModule.AIController.UseBlackboard
struct AAIController_UseBlackboard_Params
{
	class UBlackboardData*                             BlackboardAsset;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.UnclaimTaskResource
struct AAIController_UnclaimTaskResource_Params
{
	class UClass*                                      ResourceClass;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.SetMoveBlockDetection
struct AAIController_SetMoveBlockDetection_Params
{
	bool                                               bEnable;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.RunBehaviorTree
struct AAIController_RunBehaviorTree_Params
{
	class UBehaviorTree*                               BTAsset;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.OnUsingBlackBoard
struct AAIController_OnUsingBlackBoard_Params
{
	class UBlackboardComponent*                        BlackboardComp;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.OnUnpossess
struct AAIController_OnUnpossess_Params
{
	class APawn*                                       UnpossessedPawn;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.OnPossess
struct AAIController_OnPossess_Params
{
	class APawn*                                       PossessedPawn;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
struct AAIController_OnGameplayTaskResourcesClaimed_Params
{
	struct FGameplayResourceSet                        NewlyClaimed;                                             // (CPF_Parm)
	struct FGameplayResourceSet                        FreshlyReleased;                                          // (CPF_Parm)
};

// Function AIModule.AIController.MoveToLocation
struct AAIController_MoveToLocation_Params
{
	struct FVector                                     Dest;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bProjectDestinationToNavigation;                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanStrafe;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.MoveToActor
struct AAIController_MoveToActor_Params
{
	class AActor*                                      Goal;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanStrafe;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.K2_SetFocus
struct AAIController_K2_SetFocus_Params
{
	class AActor*                                      NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.K2_SetFocalPoint
struct AAIController_K2_SetFocalPoint_Params
{
	struct FVector                                     FP;                                                       // (CPF_Parm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.K2_ClearFocus
struct AAIController_K2_ClearFocus_Params
{
};

// Function AIModule.AIController.HasPartialPath
struct AAIController_HasPartialPath_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetPathFollowingComponent
struct AAIController_GetPathFollowingComponent_Params
{
	class UPathFollowingComponent*                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetMoveStatus
struct AAIController_GetMoveStatus_Params
{
	TEnumAsByte<EPathFollowingStatus>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetImmediateMoveDestination
struct AAIController_GetImmediateMoveDestination_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetFocusActor
struct AAIController_GetFocusActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetFocalPointOnActor
struct AAIController_GetFocalPointOnActor_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetFocalPoint
struct AAIController_GetFocalPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetAIPerceptionComponent
struct AAIController_GetAIPerceptionComponent_Params
{
	class UAIPerceptionComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function AIModule.AIController.ClaimTaskResource
struct AAIController_ClaimTaskResource_Params
{
	class UClass*                                      ResourceClass;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.PathFollowingComponent.OnNavDataRegistered
struct UPathFollowingComponent_OnNavDataRegistered_Params
{
	class ANavigationData*                             NavData;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.PathFollowingComponent.OnActorBump
struct UPathFollowingComponent_OnActorBump_Params
{
	class AActor*                                      SelfActor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function AIModule.PathFollowingComponent.GetPathDestination
struct UPathFollowingComponent_GetPathDestination_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.PathFollowingComponent.GetPathActionType
struct UPathFollowingComponent_GetPathActionType_Params
{
	TEnumAsByte<EPathFollowingAction>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AISystem.AILoggingVerbose
struct UAISystem_AILoggingVerbose_Params
{
};

// Function AIModule.AISystem.AIIgnorePlayers
struct UAISystem_AIIgnorePlayers_Params
{
};

// Function AIModule.AITask_MoveTo.AIMoveTo
struct UAITask_MoveTo_AIMoveTo_Params
{
	class AAIController*                               Controller;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     GoalLocation;                                             // (CPF_Parm, CPF_IsPlainOldData)
	class AActor*                                      GoalActor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAIOptionFlag>                         StopOnOverlap;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAIOptionFlag>                         AcceptPartialPath;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLockAILogic;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAITask_MoveTo*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BrainComponent.StopLogic
struct UBrainComponent_StopLogic_Params
{
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_ZeroConstructor)
};

// Function AIModule.BrainComponent.RestartLogic
struct UBrainComponent_RestartLogic_Params
{
};

// Function AIModule.BrainComponent.IsRunning
struct UBrainComponent_IsRunning_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BrainComponent.IsPaused
struct UBrainComponent_IsPaused_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
struct UBehaviorTreeComponent_SetDynamicSubtree_Params
{
	struct FGameplayTag                                InjectTag;                                                // (CPF_Parm)
	class UBehaviorTree*                               BehaviorAsset;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
struct UBehaviorTreeComponent_GetTagCooldownEndTime_Params
{
	struct FGameplayTag                                CooldownTag;                                              // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
struct UBehaviorTreeComponent_AddCooldownTagDuration_Params
{
	struct FGameplayTag                                CooldownTag;                                              // (CPF_Parm)
	float                                              CooldownDuration;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAddToExistingDuration;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsVector
struct UBlackboardComponent_SetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     VectorValue;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsString
struct UBlackboardComponent_SetValueAsString_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FString                                     StringValue;                                              // (CPF_Parm, CPF_ZeroConstructor)
};

// Function AIModule.BlackboardComponent.SetValueAsRotator
struct UBlackboardComponent_SetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FRotator                                    VectorValue;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsObject
struct UBlackboardComponent_SetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UObject*                                     ObjectValue;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsName
struct UBlackboardComponent_SetValueAsName_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FName                                       NameValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsInt
struct UBlackboardComponent_SetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	int                                                IntValue;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsFloat
struct UBlackboardComponent_SetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              FloatValue;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsEnum
struct UBlackboardComponent_SetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	unsigned char                                      EnumValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsClass
struct UBlackboardComponent_SetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UClass*                                      ClassValue;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.SetValueAsBool
struct UBlackboardComponent_SetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               BoolValue;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.IsVectorValueSet
struct UBlackboardComponent_IsVectorValueSet_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsVector
struct UBlackboardComponent_GetValueAsVector_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsString
struct UBlackboardComponent_GetValueAsString_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function AIModule.BlackboardComponent.GetValueAsRotator
struct UBlackboardComponent_GetValueAsRotator_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsObject
struct UBlackboardComponent_GetValueAsObject_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsName
struct UBlackboardComponent_GetValueAsName_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsInt
struct UBlackboardComponent_GetValueAsInt_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsFloat
struct UBlackboardComponent_GetValueAsFloat_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsEnum
struct UBlackboardComponent_GetValueAsEnum_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsClass
struct UBlackboardComponent_GetValueAsClass_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetValueAsBool
struct UBlackboardComponent_GetValueAsBool_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetRotationFromEntry
struct UBlackboardComponent_GetRotationFromEntry_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FRotator                                    ResultRotation;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.GetLocationFromEntry
struct UBlackboardComponent_GetLocationFromEntry_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     ResultLocation;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BlackboardComponent.ClearValue
struct UBlackboardComponent_ClearValue_Params
{
	struct FName                                       KeyName;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
struct UBTDecorator_BlueprintBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
struct UBTDecorator_BlueprintBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
struct UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
struct UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
struct UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
struct UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBTNodeResult>                         NodeResult;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
struct UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EBTNodeResult>                         NodeResult;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
struct UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
struct UBTDecorator_BlueprintBase_PerformConditionCheck_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
struct UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
struct UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveTickAI
struct UBTService_BlueprintBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveTick
struct UBTService_BlueprintBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
struct UBTService_BlueprintBase_ReceiveSearchStartAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
struct UBTService_BlueprintBase_ReceiveSearchStart_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
struct UBTService_BlueprintBase_ReceiveDeactivationAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
struct UBTService_BlueprintBase_ReceiveDeactivation_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
struct UBTService_BlueprintBase_ReceiveActivationAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.ReceiveActivation
struct UBTService_BlueprintBase_ReceiveActivation_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTService_BlueprintBase.IsServiceActive
struct UBTService_BlueprintBase_IsServiceActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
struct UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params
{
	struct FName                                       MessageName;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                RequestID;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
struct UBTTask_BlueprintBase_SetFinishOnMessage_Params
{
	struct FName                                       MessageName;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
struct UBTTask_BlueprintBase_ReceiveTickAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveTick
struct UBTTask_BlueprintBase_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
struct UBTTask_BlueprintBase_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveExecute
struct UBTTask_BlueprintBase_ReceiveExecute_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
struct UBTTask_BlueprintBase_ReceiveAbortAI_Params
{
	class AAIController*                               OwnerController;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       ControlledPawn;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.ReceiveAbort
struct UBTTask_BlueprintBase_ReceiveAbort_Params
{
	class AActor*                                      OwnerActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
struct UBTTask_BlueprintBase_IsTaskExecuting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.IsTaskAborting
struct UBTTask_BlueprintBase_IsTaskAborting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.FinishExecute
struct UBTTask_BlueprintBase_FinishExecute_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.BTTask_BlueprintBase.FinishAbort
struct UBTTask_BlueprintBase_FinishAbort_Params
{
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
struct UEnvQueryInstanceBlueprintWrapper_SetNamedParam_Params
{
	struct FName                                       ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
struct UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
struct UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params
{
	int                                                ItemIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
struct UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.EnvQueryManager.RunEQSQuery
struct UEnvQueryManager_RunEQSQuery_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEnvQuery*                                   QueryTemplate;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     Querier;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEnvQueryRunMode>                      RunMode;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      WrapperClass;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UEnvQueryInstanceBlueprintWrapper*           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
struct UEnvQueryGenerator_BlueprintBase_GetQuerier_Params
{
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
struct UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params
{
	TArray<struct FVector>                             ContextLocations;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params
{
	struct FVector                                     GeneratedVector;                                          // (CPF_Parm, CPF_IsPlainOldData)
};

// Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
struct UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params
{
	class AActor*                                      GeneratedActor;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeRigidBody
struct UEQSRenderingComponent_WakeRigidBody_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeAllRigidBodies
struct UEQSRenderingComponent_WakeAllRigidBodies_Params
{
};

// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
struct UEQSRenderingComponent_SetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride                      NewOverride;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetUseCCD
struct UEQSRenderingComponent_SetUseCCD_Params
{
	bool                                               InUseCCD;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
struct UEQSRenderingComponent_SetTranslucentSortPriority_Params
{
	int                                                NewTranslucentSortPriority;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetSimulatePhysics
struct UEQSRenderingComponent_SetSimulatePhysics_Params
{
	bool                                               bSimulate;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderInMono
struct UEQSRenderingComponent_SetRenderInMono_Params
{
	bool                                               bValue;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderInMainPass
struct UEQSRenderingComponent_SetRenderInMainPass_Params
{
	bool                                               bValue;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderCustomDepth
struct UEQSRenderingComponent_SetRenderCustomDepth_Params
{
	bool                                               bValue;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
struct UEQSRenderingComponent_SetPhysMaterialOverride_Params
{
	class UPhysicalMaterial*                           NewPhysMaterial;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
struct UEQSRenderingComponent_SetPhysicsMaxAngularVelocity_Params
{
	float                                              NewMaxAngVel;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
struct UEQSRenderingComponent_SetPhysicsLinearVelocity_Params
{
	struct FVector                                     NewVel;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
struct UEQSRenderingComponent_SetPhysicsAngularVelocity_Params
{
	struct FVector                                     NewAngVel;                                                // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOwnerNoSee
struct UEQSRenderingComponent_SetOwnerNoSee_Params
{
	bool                                               bNewOwnerNoSee;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
struct UEQSRenderingComponent_SetOnlyOwnerSee_Params
{
	bool                                               bNewOnlyOwnerSee;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
struct UEQSRenderingComponent_SetNotifyRigidBodyCollision_Params
{
	bool                                               bNewNotifyRigidBodyCollision;                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterialByName
struct UEQSRenderingComponent_SetMaterialByName_Params
{
	struct FName                                       MaterialSlotName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterial
struct UEQSRenderingComponent_SetMaterial_Params
{
	int                                                ElementIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMassScale
struct UEQSRenderingComponent_SetMassScale_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InMassScale;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMassOverrideInKg
struct UEQSRenderingComponent_SetMassOverrideInKg_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MassInKg;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverrideMass;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetLockedAxis
struct UEQSRenderingComponent_SetLockedAxis_Params
{
	TEnumAsByte<EDOFMode>                              LockedAxis;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetLinearDamping
struct UEQSRenderingComponent_SetLinearDamping_Params
{
	float                                              InDamping;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetEnableGravity
struct UEQSRenderingComponent_SetEnableGravity_Params
{
	bool                                               bGravityEnabled;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
struct UEQSRenderingComponent_SetCustomDepthStencilWriteMask_Params
{
};

// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
struct UEQSRenderingComponent_SetCustomDepthStencilValue_Params
{
	int                                                Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCullDistance
struct UEQSRenderingComponent_SetCullDistance_Params
{
	float                                              NewCullDistance;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetConstraintMode
struct UEQSRenderingComponent_SetConstraintMode_Params
{
	TEnumAsByte<EDOFMode>                              ConstraintMode;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
struct UEQSRenderingComponent_SetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
struct UEQSRenderingComponent_SetCollisionResponseToAllChannels_Params
{
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionProfileName
struct UEQSRenderingComponent_SetCollisionProfileName_Params
{
	struct FName                                       InCollisionProfileName;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionObjectType
struct UEQSRenderingComponent_SetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionEnabled
struct UEQSRenderingComponent_SetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>                     NewType;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCenterOfMass
struct UEQSRenderingComponent_SetCenterOfMass_Params
{
	struct FVector                                     CenterOfMassOffset;                                       // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCastShadow
struct UEQSRenderingComponent_SetCastShadow_Params
{
	bool                                               NewCastShadow;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetBoundsScale
struct UEQSRenderingComponent_SetBoundsScale_Params
{
	float                                              NewBoundsScale;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAngularDamping
struct UEQSRenderingComponent_SetAngularDamping_Params
{
	float                                              InDamping;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllUseCCD
struct UEQSRenderingComponent_SetAllUseCCD_Params
{
	bool                                               InUseCCD;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
struct UEQSRenderingComponent_SetAllPhysicsLinearVelocity_Params
{
	struct FVector                                     NewVel;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocity
struct UEQSRenderingComponent_SetAllPhysicsAngularVelocity_Params
{
	struct FVector                                     NewAngVel;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllMassScale
struct UEQSRenderingComponent_SetAllMassScale_Params
{
	float                                              InMassScale;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
struct UEQSRenderingComponent_ScaleByMomentOfInertia_Params
{
	struct FVector                                     InputVector;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
struct UEQSRenderingComponent_PutRigidBodyToSleep_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_LineTraceComponent
struct UEQSRenderingComponent_K2_LineTraceComponent_Params
{
	struct FVector                                     TraceStart;                                               // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bTraceComplex;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShowTrace;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  OutHit;                                                   // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
struct UEQSRenderingComponent_K2_IsQueryCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
struct UEQSRenderingComponent_K2_IsPhysicsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
struct UEQSRenderingComponent_K2_IsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsOverlappingComponent
struct UEQSRenderingComponent_IsOverlappingComponent_Params
{
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsOverlappingActor
struct UEQSRenderingComponent_IsOverlappingActor_Params
{
	class AActor*                                      Other;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsGravityEnabled
struct UEQSRenderingComponent_IsGravityEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
struct UEQSRenderingComponent_IsAnyRigidBodyAwake_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
struct UEQSRenderingComponent_IgnoreComponentWhenMoving_Params
{
	class UPrimitiveComponent*                         Component;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bShouldIgnore;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
struct UEQSRenderingComponent_IgnoreActorWhenMoving_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShouldIgnore;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
struct UEQSRenderingComponent_GetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride                      ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
struct UEQSRenderingComponent_GetPhysicsLinearVelocityAtPoint_Params
{
	struct FVector                                     Point;                                                    // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
struct UEQSRenderingComponent_GetPhysicsLinearVelocity_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
struct UEQSRenderingComponent_GetPhysicsAngularVelocity_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetOverlappingComponents
struct UEQSRenderingComponent_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 InOverlappingComponents;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Engine.PrimitiveComponent.GetOverlappingActors
struct UEQSRenderingComponent_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetOverlapInfos
struct UEQSRenderingComponent_GetOverlapInfos_Params
{
	TArray<struct FOverlapInfo>                        ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm)
};

// Function Engine.PrimitiveComponent.GetNumMaterials
struct UEQSRenderingComponent_GetNumMaterials_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
struct UEQSRenderingComponent_GetMaterialFromCollisionFaceIndex_Params
{
	int                                                FaceIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMaterial
struct UEQSRenderingComponent_GetMaterial_Params
{
	int                                                ElementIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMassScale
struct UEQSRenderingComponent_GetMassScale_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMass
struct UEQSRenderingComponent_GetMass_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetLinearDamping
struct UEQSRenderingComponent_GetLinearDamping_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetInertiaTensor
struct UEQSRenderingComponent_GetInertiaTensor_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
struct UEQSRenderingComponent_GetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionProfileName
struct UEQSRenderingComponent_GetCollisionProfileName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionObjectType
struct UEQSRenderingComponent_GetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionEnabled
struct UEQSRenderingComponent_GetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
struct UEQSRenderingComponent_GetClosestPointOnCollision_Params
{
	struct FVector                                     Point;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     OutPointOnBody;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCenterOfMass
struct UEQSRenderingComponent_GetCenterOfMass_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetAngularDamping
struct UEQSRenderingComponent_GetAngularDamping_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
struct UEQSRenderingComponent_CreateDynamicMaterialInstance_Params
{
	int                                                ElementIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          SourceMaterial;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
struct UEQSRenderingComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params
{
	int                                                ElementIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
struct UEQSRenderingComponent_CreateAndSetMaterialInstanceDynamic_Params
{
	int                                                ElementIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
struct UEQSRenderingComponent_CopyArrayOfMoveIgnoreComponents_Params
{
	TArray<class UPrimitiveComponent*>                 ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
struct UEQSRenderingComponent_CopyArrayOfMoveIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
struct UEQSRenderingComponent_ClearMoveIgnoreComponents_Params
{
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
struct UEQSRenderingComponent_ClearMoveIgnoreActors_Params
{
};

// Function Engine.PrimitiveComponent.CanCharacterStepUp
struct UEQSRenderingComponent_CanCharacterStepUp_Params
{
	class APawn*                                       Pawn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorque
struct UEQSRenderingComponent_AddTorque_Params
{
	struct FVector                                     Torque;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAccelChange;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialImpulse
struct UEQSRenderingComponent_AddRadialImpulse_Params
{
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Strength;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>                 Falloff;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bVelChange;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialForce
struct UEQSRenderingComponent_AddRadialForce_Params
{
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Strength;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>                 Falloff;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAccelChange;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulseAtLocation
struct UEQSRenderingComponent_AddImpulseAtLocation_Params
{
	struct FVector                                     Impulse;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulse
struct UEQSRenderingComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bVelChange;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
struct UEQSRenderingComponent_AddForceAtLocationLocal_Params
{
	struct FVector                                     force;                                                    // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocation
struct UEQSRenderingComponent_AddForceAtLocation_Params
{
	struct FVector                                     force;                                                    // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForce
struct UEQSRenderingComponent_AddForce_Params
{
	struct FVector                                     force;                                                    // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAccelChange;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulse
struct UEQSRenderingComponent_AddAngularImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bVelChange;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
struct UCrowdFollowingComponent_SuspendCrowdSteering_Params
{
	bool                                               bSuspend;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.PawnAction.GetActionPriority
struct UPawnAction_GetActionPriority_Params
{
	TEnumAsByte<EAIRequestPriority>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.PawnAction.Finish
struct UPawnAction_Finish_Params
{
	TEnumAsByte<EPawnActionResult>                     WithResult;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.PawnAction.CreateActionInstance
struct UPawnAction_CreateActionInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ActionClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnAction*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.PawnAction.GetActionPriority
struct UPawnAction_BlueprintBase_GetActionPriority_Params
{
	TEnumAsByte<EAIRequestPriority>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.PawnAction.Finish
struct UPawnAction_BlueprintBase_Finish_Params
{
	TEnumAsByte<EPawnActionResult>                     WithResult;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.PawnAction.CreateActionInstance
struct UPawnAction_BlueprintBase_CreateActionInstance_Params
{
	class UObject*                                     WorldContextObject;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ActionClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnAction*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.PawnActionsComponent.K2_PushAction
struct UPawnActionsComponent_K2_PushAction_Params
{
	class UPawnAction*                                 NewAction;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAIRequestPriority>                    Priority;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     Instigator;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.PawnActionsComponent.K2_PerformAction
struct UPawnActionsComponent_K2_PerformAction_Params
{
	class APawn*                                       Pawn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPawnAction*                                 Action;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAIRequestPriority>                    Priority;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.PawnActionsComponent.K2_ForceAbortAction
struct UPawnActionsComponent_K2_ForceAbortAction_Params
{
	class UPawnAction*                                 ActionToAbort;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPawnActionAbortState>                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.PawnActionsComponent.K2_AbortAction
struct UPawnActionsComponent_K2_AbortAction_Params
{
	class UPawnAction*                                 ActionToAbort;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPawnActionAbortState>                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
struct UPawnSensingComponent_SetSensingUpdatesEnabled_Params
{
	bool                                               bEnabled;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.SetSensingInterval
struct UPawnSensingComponent_SetSensingInterval_Params
{
	float                                              NewSensingInterval;                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
struct UPawnSensingComponent_SetPeripheralVisionAngle_Params
{
	float                                              NewPeripheralVisionAngle;                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
struct UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params
{
	class APawn*                                       Pawn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
struct UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params
{
	class APawn*                                       Instigator;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              Volume;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
struct UPawnSensingComponent_GetPeripheralVisionCosine_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
struct UPawnSensingComponent_GetPeripheralVisionAngle_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
struct UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params
{
	struct FAIRequestID                                RequestID;                                                // (CPF_Parm)
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.UseBlackboard
struct ADetourCrowdAIController_UseBlackboard_Params
{
	class UBlackboardData*                             BlackboardAsset;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.UnclaimTaskResource
struct ADetourCrowdAIController_UnclaimTaskResource_Params
{
	class UClass*                                      ResourceClass;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.SetMoveBlockDetection
struct ADetourCrowdAIController_SetMoveBlockDetection_Params
{
	bool                                               bEnable;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.RunBehaviorTree
struct ADetourCrowdAIController_RunBehaviorTree_Params
{
	class UBehaviorTree*                               BTAsset;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.OnUsingBlackBoard
struct ADetourCrowdAIController_OnUsingBlackBoard_Params
{
	class UBlackboardComponent*                        BlackboardComp;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.OnUnpossess
struct ADetourCrowdAIController_OnUnpossess_Params
{
	class APawn*                                       UnpossessedPawn;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.OnPossess
struct ADetourCrowdAIController_OnPossess_Params
{
	class APawn*                                       PossessedPawn;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
struct ADetourCrowdAIController_OnGameplayTaskResourcesClaimed_Params
{
	struct FGameplayResourceSet                        NewlyClaimed;                                             // (CPF_Parm)
	struct FGameplayResourceSet                        FreshlyReleased;                                          // (CPF_Parm)
};

// Function AIModule.AIController.MoveToLocation
struct ADetourCrowdAIController_MoveToLocation_Params
{
	struct FVector                                     Dest;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bProjectDestinationToNavigation;                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanStrafe;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.MoveToActor
struct ADetourCrowdAIController_MoveToActor_Params
{
	class AActor*                                      Goal;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanStrafe;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.K2_SetFocus
struct ADetourCrowdAIController_K2_SetFocus_Params
{
	class AActor*                                      NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.K2_SetFocalPoint
struct ADetourCrowdAIController_K2_SetFocalPoint_Params
{
	struct FVector                                     FP;                                                       // (CPF_Parm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.K2_ClearFocus
struct ADetourCrowdAIController_K2_ClearFocus_Params
{
};

// Function AIModule.AIController.HasPartialPath
struct ADetourCrowdAIController_HasPartialPath_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetPathFollowingComponent
struct ADetourCrowdAIController_GetPathFollowingComponent_Params
{
	class UPathFollowingComponent*                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetMoveStatus
struct ADetourCrowdAIController_GetMoveStatus_Params
{
	TEnumAsByte<EPathFollowingStatus>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetImmediateMoveDestination
struct ADetourCrowdAIController_GetImmediateMoveDestination_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetFocusActor
struct ADetourCrowdAIController_GetFocusActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetFocalPointOnActor
struct ADetourCrowdAIController_GetFocalPointOnActor_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetFocalPoint
struct ADetourCrowdAIController_GetFocalPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetAIPerceptionComponent
struct ADetourCrowdAIController_GetAIPerceptionComponent_Params
{
	class UAIPerceptionComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function AIModule.AIController.ClaimTaskResource
struct ADetourCrowdAIController_ClaimTaskResource_Params
{
	class UClass*                                      ResourceClass;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.UseBlackboard
struct AGridPathAIController_UseBlackboard_Params
{
	class UBlackboardData*                             BlackboardAsset;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBlackboardComponent*                        BlackboardComponent;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.UnclaimTaskResource
struct AGridPathAIController_UnclaimTaskResource_Params
{
	class UClass*                                      ResourceClass;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.SetMoveBlockDetection
struct AGridPathAIController_SetMoveBlockDetection_Params
{
	bool                                               bEnable;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.RunBehaviorTree
struct AGridPathAIController_RunBehaviorTree_Params
{
	class UBehaviorTree*                               BTAsset;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.OnUsingBlackBoard
struct AGridPathAIController_OnUsingBlackBoard_Params
{
	class UBlackboardComponent*                        BlackboardComp;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UBlackboardData*                             BlackboardAsset;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.OnUnpossess
struct AGridPathAIController_OnUnpossess_Params
{
	class APawn*                                       UnpossessedPawn;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.OnPossess
struct AGridPathAIController_OnPossess_Params
{
	class APawn*                                       PossessedPawn;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.OnGameplayTaskResourcesClaimed
struct AGridPathAIController_OnGameplayTaskResourcesClaimed_Params
{
	struct FGameplayResourceSet                        NewlyClaimed;                                             // (CPF_Parm)
	struct FGameplayResourceSet                        FreshlyReleased;                                          // (CPF_Parm)
};

// Function AIModule.AIController.MoveToLocation
struct AGridPathAIController_MoveToLocation_Params
{
	struct FVector                                     Dest;                                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bProjectDestinationToNavigation;                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanStrafe;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.MoveToActor
struct AGridPathAIController_MoveToActor_Params
{
	class AActor*                                      Goal;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AcceptanceRadius;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bStopOnOverlap;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bUsePathfinding;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCanStrafe;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      FilterClass;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowPartialPath;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EPathFollowingRequestResult>           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.K2_SetFocus
struct AGridPathAIController_K2_SetFocus_Params
{
	class AActor*                                      NewFocus;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIController.K2_SetFocalPoint
struct AGridPathAIController_K2_SetFocalPoint_Params
{
	struct FVector                                     FP;                                                       // (CPF_Parm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.K2_ClearFocus
struct AGridPathAIController_K2_ClearFocus_Params
{
};

// Function AIModule.AIController.HasPartialPath
struct AGridPathAIController_HasPartialPath_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetPathFollowingComponent
struct AGridPathAIController_GetPathFollowingComponent_Params
{
	class UPathFollowingComponent*                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetMoveStatus
struct AGridPathAIController_GetMoveStatus_Params
{
	TEnumAsByte<EPathFollowingStatus>                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetImmediateMoveDestination
struct AGridPathAIController_GetImmediateMoveDestination_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetFocusActor
struct AGridPathAIController_GetFocusActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetFocalPointOnActor
struct AGridPathAIController_GetFocalPointOnActor_Params
{
	class AActor*                                      Actor;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetFocalPoint
struct AGridPathAIController_GetFocalPoint_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIController.GetAIPerceptionComponent
struct AGridPathAIController_GetAIPerceptionComponent_Params
{
	class UAIPerceptionComponent*                      ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function AIModule.AIController.ClaimTaskResource
struct AGridPathAIController_ClaimTaskResource_Params
{
	class UClass*                                      ResourceClass;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
struct UAIPerceptionSystem_ReportPerceptionEvent_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAISenseEvent*                               PerceptionEvent;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.ReportEvent
struct UAIPerceptionSystem_ReportEvent_Params
{
	class UAISenseEvent*                               PerceptionEvent;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
struct UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      Sense;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Target;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
struct UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
struct UAIPerceptionSystem_GetSenseClassForStimulus_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAIStimulus                                 Stimulus;                                                 // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
struct UAIPerceptionComponent_RequestStimuliListenerUpdate_Params
{
};

// Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
struct UAIPerceptionComponent_OnOwnerEndPlay_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
struct UAIPerceptionComponent_GetPerceivedHostileActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function AIModule.AIPerceptionComponent.GetPerceivedActors
struct UAIPerceptionComponent_GetPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors
struct UAIPerceptionComponent_GetKnownPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
struct UAIPerceptionComponent_GetCurrentlyPerceivedActors_Params
{
	class UClass*                                      SenseToUse;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function AIModule.AIPerceptionComponent.GetActorsPerception
struct UAIPerceptionComponent_GetActorsPerception_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FActorPerceptionBlueprintInfo               Info;                                                     // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
struct UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params
{
	class UClass*                                      SenseClass;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
struct UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params
{
};

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
struct UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params
{
};

// Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
struct UAIPerceptionStimuliSourceComponent_RegisterForSense_Params
{
	class UClass*                                      SenseClass;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.OnUpdate
struct UAISense_Blueprint_OnUpdate_Params
{
	TArray<class UAISenseEvent*>                       EventsToProcess;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.OnListenerUpdated
struct UAISense_Blueprint_OnListenerUpdated_Params
{
	class AActor*                                      ActorListener;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.OnListenerUnregistered
struct UAISense_Blueprint_OnListenerUnregistered_Params
{
	class AActor*                                      ActorListener;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.OnListenerRegistered
struct UAISense_Blueprint_OnListenerRegistered_Params
{
	class AActor*                                      ActorListener;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAIPerceptionComponent*                      PerceptionComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.K2_OnNewPawn
struct UAISense_Blueprint_K2_OnNewPawn_Params
{
	class APawn*                                       NewPawn;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AISense_Blueprint.GetAllListenerComponents
struct UAISense_Blueprint_GetAllListenerComponents_Params
{
	TArray<class UAIPerceptionComponent*>              ListenerComponents;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function AIModule.AISense_Blueprint.GetAllListenerActors
struct UAISense_Blueprint_GetAllListenerActors_Params
{
	TArray<class AActor*>                              ListenerActors;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function AIModule.AISense_Damage.ReportDamageEvent
struct UAISense_Damage_ReportDamageEvent_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Instigator;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageAmount;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     EventLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function AIModule.AISense_Hearing.ReportNoiseEvent
struct UAISense_Hearing_ReportNoiseEvent_Params
{
	class UObject*                                     WorldContext;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Loudness;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      Instigator;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxRange;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
struct UAISense_Prediction_RequestPawnPredictionEvent_Params
{
	class APawn*                                       Requestor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      PredictedActor;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PredictionTime;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
struct UAISense_Prediction_RequestControllerPredictionEvent_Params
{
	class AAIController*                               Requestor;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      PredictedActor;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PredictionTime;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
