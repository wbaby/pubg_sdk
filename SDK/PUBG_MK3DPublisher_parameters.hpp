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

// Function Engine.Actor.WasRecentlyRendered
struct AAudioCapturer_WasRecentlyRendered_Params
{
	float                                              Tolerance;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct AAudioCapturer_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct AAudioCapturer_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct AAudioCapturer_SnapRootComponentTo_Params
{
	class AActor*                                      InParentActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct AAudioCapturer_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>                         NewTickGroup;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct AAudioCapturer_SetTickableWhenPaused_Params
{
	bool                                               bTickableWhenPaused;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct AAudioCapturer_SetReplicates_Params
{
	bool                                               bInReplicates;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct AAudioCapturer_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct AAudioCapturer_SetOwner_Params
{
	class AActor*                                      NewOwner;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct AAudioCapturer_SetLifeSpan_Params
{
	float                                              InLifespan;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct AAudioCapturer_SetActorTickInterval_Params
{
	float                                              TickInterval;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct AAudioCapturer_SetActorTickEnabled_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct AAudioCapturer_SetActorScale3D_Params
{
	struct FVector                                     NewScale3D;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct AAudioCapturer_SetActorRelativeScale3D_Params
{
	struct FVector                                     NewRelativeScale;                                         // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct AAudioCapturer_SetActorHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct AAudioCapturer_SetActorEnableCollision_Params
{
	bool                                               bNewActorEnableCollision;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct AAudioCapturer_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct AAudioCapturer_RemoveTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct AAudioCapturer_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct AAudioCapturer_ReceiveRadialDamage_Params
{
	float                                              DamageReceived;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct AAudioCapturer_ReceivePointDamage_Params
{
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (CPF_Parm, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (CPF_Parm, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveHit
struct AAudioCapturer_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AActor*                                      Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bSelfMoved;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveEndPlay
struct AAudioCapturer_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct AAudioCapturer_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct AAudioCapturer_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct AAudioCapturer_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct AAudioCapturer_ReceiveActorOnReleased_Params
{
	struct FKey                                        ButtonReleased;                                           // (CPF_Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct AAudioCapturer_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct AAudioCapturer_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct AAudioCapturer_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct AAudioCapturer_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct AAudioCapturer_ReceiveActorOnClicked_Params
{
	struct FKey                                        ButtonPressed;                                            // (CPF_Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct AAudioCapturer_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct AAudioCapturer_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct AAudioCapturer_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct AAudioCapturer_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.OnRep_Role
struct AAudioCapturer_OnRep_Role_Params
{
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct AAudioCapturer_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct AAudioCapturer_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct AAudioCapturer_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct AAudioCapturer_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct AAudioCapturer_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct AAudioCapturer_MakeNoise_Params
{
	float                                              Loudness;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       NoiseInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	float                                              MaxRange;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct AAudioCapturer_MakeMIDForMaterial_Params
{
	class UMaterialInterface*                          Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct AAudioCapturer_K2_TeleportTo_Params
{
	struct FVector                                     DestLocation;                                             // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct AAudioCapturer_K2_SetActorTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct AAudioCapturer_K2_SetActorRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bTeleportPhysics;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct AAudioCapturer_K2_SetActorRelativeTransform_Params
{
	struct FTransform                                  NewRelativeTransform;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct AAudioCapturer_K2_SetActorRelativeRotation_Params
{
	struct FRotator                                    NewRelativeRotation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct AAudioCapturer_K2_SetActorRelativeLocation_Params
{
	struct FVector                                     NewRelativeLocation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct AAudioCapturer_K2_SetActorLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct AAudioCapturer_K2_SetActorLocation_Params
{
	struct FVector                                     NewLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct AAudioCapturer_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct AAudioCapturer_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct AAudioCapturer_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct AAudioCapturer_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorRotation
struct AAudioCapturer_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct AAudioCapturer_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct AAudioCapturer_K2_DetachFromActor_Params
{
};

// Function Engine.Actor.K2_DestroyComponent
struct AAudioCapturer_K2_DestroyComponent_Params
{
	class UActorComponent*                             Component;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct AAudioCapturer_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct AAudioCapturer_K2_AttachToComponent_Params
{
	class USceneComponent*                             Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct AAudioCapturer_K2_AttachToActor_Params
{
	class AActor*                                      ParentActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct AAudioCapturer_K2_AttachRootComponentToActor_Params
{
	class AActor*                                      InParentActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct AAudioCapturer_K2_AttachRootComponentTo_Params
{
	class USceneComponent*                             InParent;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct AAudioCapturer_K2_AddActorWorldTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct AAudioCapturer_K2_AddActorWorldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct AAudioCapturer_K2_AddActorWorldOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct AAudioCapturer_K2_AddActorLocalTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct AAudioCapturer_K2_AddActorLocalRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct AAudioCapturer_K2_AddActorLocalOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct AAudioCapturer_IsOverlappingActor_Params
{
	class AActor*                                      Other;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct AAudioCapturer_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct AAudioCapturer_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct AAudioCapturer_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct AAudioCapturer_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct AAudioCapturer_GetVerticalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct AAudioCapturer_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct AAudioCapturer_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct AAudioCapturer_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct AAudioCapturer_GetSquaredDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct AAudioCapturer_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct AAudioCapturer_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct AAudioCapturer_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct AAudioCapturer_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct AAudioCapturer_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct AAudioCapturer_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct AAudioCapturer_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct AAudioCapturer_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct AAudioCapturer_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct AAudioCapturer_GetInputVectorAxisValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (CPF_ConstParm, CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct AAudioCapturer_GetInputAxisValue_Params
{
	struct FName                                       InputAxisName;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct AAudioCapturer_GetInputAxisKeyValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (CPF_ConstParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct AAudioCapturer_GetHorizontalDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct AAudioCapturer_GetHorizontalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct AAudioCapturer_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct AAudioCapturer_GetDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct AAudioCapturer_GetDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct AAudioCapturer_GetComponentsByTag_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.Actor.GetComponentsByClass
struct AAudioCapturer_GetComponentsByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct AAudioCapturer_GetComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct AAudioCapturer_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct AAudioCapturer_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct AAudioCapturer_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Engine.Actor.GetAllChildActors
struct AAudioCapturer_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	bool                                               bIncludeDescendants;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct AAudioCapturer_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct AAudioCapturer_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct AAudioCapturer_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct AAudioCapturer_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct AAudioCapturer_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct AAudioCapturer_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct AAudioCapturer_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct AAudioCapturer_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct AAudioCapturer_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct AAudioCapturer_GetActorBounds_Params
{
	bool                                               bOnlyCollidingComponents;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct AAudioCapturer_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct AAudioCapturer_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct AAudioCapturer_EnableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct AAudioCapturer_DisableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct AAudioCapturer_DetachRootComponentFromParent_Params
{
	bool                                               bMaintainWorldPosition;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct AAudioCapturer_AddTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct AAudioCapturer_AddTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct AAudioCapturer_AddComponent_Params
{
	struct FName                                       TemplateName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bManualAttachment;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UObject*                                     ComponentTemplateContext;                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct AAudioCapturer_ActorHasTag_Params
{
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.WasRecentlyRendered
struct AViewportCapturer_WasRecentlyRendered_Params
{
	float                                              Tolerance;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct AViewportCapturer_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct AViewportCapturer_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct AViewportCapturer_SnapRootComponentTo_Params
{
	class AActor*                                      InParentActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct AViewportCapturer_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>                         NewTickGroup;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct AViewportCapturer_SetTickableWhenPaused_Params
{
	bool                                               bTickableWhenPaused;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct AViewportCapturer_SetReplicates_Params
{
	bool                                               bInReplicates;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct AViewportCapturer_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct AViewportCapturer_SetOwner_Params
{
	class AActor*                                      NewOwner;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct AViewportCapturer_SetLifeSpan_Params
{
	float                                              InLifespan;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct AViewportCapturer_SetActorTickInterval_Params
{
	float                                              TickInterval;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct AViewportCapturer_SetActorTickEnabled_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct AViewportCapturer_SetActorScale3D_Params
{
	struct FVector                                     NewScale3D;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct AViewportCapturer_SetActorRelativeScale3D_Params
{
	struct FVector                                     NewRelativeScale;                                         // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct AViewportCapturer_SetActorHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct AViewportCapturer_SetActorEnableCollision_Params
{
	bool                                               bNewActorEnableCollision;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct AViewportCapturer_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct AViewportCapturer_RemoveTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct AViewportCapturer_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct AViewportCapturer_ReceiveRadialDamage_Params
{
	float                                              DamageReceived;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct AViewportCapturer_ReceivePointDamage_Params
{
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (CPF_Parm, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ShotFromDirection;                                        // (CPF_Parm, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveHit
struct AViewportCapturer_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class AActor*                                      Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bSelfMoved;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveEndPlay
struct AViewportCapturer_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct AViewportCapturer_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct AViewportCapturer_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct AViewportCapturer_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct AViewportCapturer_ReceiveActorOnReleased_Params
{
	struct FKey                                        ButtonReleased;                                           // (CPF_Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct AViewportCapturer_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct AViewportCapturer_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct AViewportCapturer_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct AViewportCapturer_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct AViewportCapturer_ReceiveActorOnClicked_Params
{
	struct FKey                                        ButtonPressed;                                            // (CPF_Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct AViewportCapturer_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct AViewportCapturer_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct AViewportCapturer_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct AViewportCapturer_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.OnRep_Role
struct AViewportCapturer_OnRep_Role_Params
{
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct AViewportCapturer_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct AViewportCapturer_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct AViewportCapturer_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct AViewportCapturer_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct AViewportCapturer_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct AViewportCapturer_MakeNoise_Params
{
	float                                              Loudness;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       NoiseInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	float                                              MaxRange;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct AViewportCapturer_MakeMIDForMaterial_Params
{
	class UMaterialInterface*                          Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct AViewportCapturer_K2_TeleportTo_Params
{
	struct FVector                                     DestLocation;                                             // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct AViewportCapturer_K2_SetActorTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct AViewportCapturer_K2_SetActorRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bTeleportPhysics;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct AViewportCapturer_K2_SetActorRelativeTransform_Params
{
	struct FTransform                                  NewRelativeTransform;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct AViewportCapturer_K2_SetActorRelativeRotation_Params
{
	struct FRotator                                    NewRelativeRotation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct AViewportCapturer_K2_SetActorRelativeLocation_Params
{
	struct FVector                                     NewRelativeLocation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct AViewportCapturer_K2_SetActorLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct AViewportCapturer_K2_SetActorLocation_Params
{
	struct FVector                                     NewLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct AViewportCapturer_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct AViewportCapturer_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct AViewportCapturer_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct AViewportCapturer_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorRotation
struct AViewportCapturer_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct AViewportCapturer_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct AViewportCapturer_K2_DetachFromActor_Params
{
};

// Function Engine.Actor.K2_DestroyComponent
struct AViewportCapturer_K2_DestroyComponent_Params
{
	class UActorComponent*                             Component;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct AViewportCapturer_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct AViewportCapturer_K2_AttachToComponent_Params
{
	class USceneComponent*                             Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct AViewportCapturer_K2_AttachToActor_Params
{
	class AActor*                                      ParentActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct AViewportCapturer_K2_AttachRootComponentToActor_Params
{
	class AActor*                                      InParentActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct AViewportCapturer_K2_AttachRootComponentTo_Params
{
	class USceneComponent*                             InParent;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct AViewportCapturer_K2_AddActorWorldTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct AViewportCapturer_K2_AddActorWorldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct AViewportCapturer_K2_AddActorWorldOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct AViewportCapturer_K2_AddActorLocalTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct AViewportCapturer_K2_AddActorLocalRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct AViewportCapturer_K2_AddActorLocalOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct AViewportCapturer_IsOverlappingActor_Params
{
	class AActor*                                      Other;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct AViewportCapturer_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct AViewportCapturer_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct AViewportCapturer_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct AViewportCapturer_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct AViewportCapturer_GetVerticalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct AViewportCapturer_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct AViewportCapturer_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct AViewportCapturer_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct AViewportCapturer_GetSquaredDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct AViewportCapturer_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct AViewportCapturer_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct AViewportCapturer_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct AViewportCapturer_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct AViewportCapturer_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct AViewportCapturer_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct AViewportCapturer_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct AViewportCapturer_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct AViewportCapturer_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct AViewportCapturer_GetInputVectorAxisValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (CPF_ConstParm, CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct AViewportCapturer_GetInputAxisValue_Params
{
	struct FName                                       InputAxisName;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct AViewportCapturer_GetInputAxisKeyValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (CPF_ConstParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct AViewportCapturer_GetHorizontalDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct AViewportCapturer_GetHorizontalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct AViewportCapturer_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct AViewportCapturer_GetDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct AViewportCapturer_GetDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct AViewportCapturer_GetComponentsByTag_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.Actor.GetComponentsByClass
struct AViewportCapturer_GetComponentsByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct AViewportCapturer_GetComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct AViewportCapturer_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct AViewportCapturer_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct AViewportCapturer_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Engine.Actor.GetAllChildActors
struct AViewportCapturer_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	bool                                               bIncludeDescendants;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct AViewportCapturer_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct AViewportCapturer_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct AViewportCapturer_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct AViewportCapturer_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct AViewportCapturer_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct AViewportCapturer_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct AViewportCapturer_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct AViewportCapturer_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct AViewportCapturer_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct AViewportCapturer_GetActorBounds_Params
{
	bool                                               bOnlyCollidingComponents;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct AViewportCapturer_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct AViewportCapturer_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct AViewportCapturer_EnableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct AViewportCapturer_DisableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct AViewportCapturer_DetachRootComponentFromParent_Params
{
	bool                                               bMaintainWorldPosition;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct AViewportCapturer_AddTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct AViewportCapturer_AddTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct AViewportCapturer_AddComponent_Params
{
	struct FName                                       TemplateName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bManualAttachment;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UObject*                                     ComponentTemplateContext;                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct AViewportCapturer_ActorHasTag_Params
{
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
