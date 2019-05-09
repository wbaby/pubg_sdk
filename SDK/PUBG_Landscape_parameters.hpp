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

// Function Engine.StaticMeshComponent.SetStaticMesh
struct UControlPointMeshComponent_SetStaticMesh_Params
{
	class UStaticMesh*                                 NewMesh;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.StaticMeshComponent.SetForcedLodModel
struct UControlPointMeshComponent_SetForcedLodModel_Params
{
	int                                                NewForcedLodModel;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.StaticMeshComponent.OnRep_StaticMesh
struct UControlPointMeshComponent_OnRep_StaticMesh_Params
{
	class UStaticMesh*                                 OldStaticMesh;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.StaticMeshComponent.GetLocalBounds
struct UControlPointMeshComponent_GetLocalBounds_Params
{
	struct FVector                                     Min;                                                      // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FVector                                     Max;                                                      // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.WasRecentlyRendered
struct ALandscapeGizmoActor_WasRecentlyRendered_Params
{
	float                                              Tolerance;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct ALandscapeGizmoActor_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct ALandscapeGizmoActor_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct ALandscapeGizmoActor_SnapRootComponentTo_Params
{
	class AActor*                                      InParentActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct ALandscapeGizmoActor_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>                         NewTickGroup;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct ALandscapeGizmoActor_SetTickableWhenPaused_Params
{
	bool                                               bTickableWhenPaused;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct ALandscapeGizmoActor_SetReplicates_Params
{
	bool                                               bInReplicates;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct ALandscapeGizmoActor_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct ALandscapeGizmoActor_SetOwner_Params
{
	class AActor*                                      NewOwner;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct ALandscapeGizmoActor_SetLifeSpan_Params
{
	float                                              InLifespan;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct ALandscapeGizmoActor_SetActorTickInterval_Params
{
	float                                              TickInterval;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct ALandscapeGizmoActor_SetActorTickEnabled_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct ALandscapeGizmoActor_SetActorScale3D_Params
{
	struct FVector                                     NewScale3D;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct ALandscapeGizmoActor_SetActorRelativeScale3D_Params
{
	struct FVector                                     NewRelativeScale;                                         // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct ALandscapeGizmoActor_SetActorHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct ALandscapeGizmoActor_SetActorEnableCollision_Params
{
	bool                                               bNewActorEnableCollision;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct ALandscapeGizmoActor_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct ALandscapeGizmoActor_RemoveTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct ALandscapeGizmoActor_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct ALandscapeGizmoActor_ReceiveRadialDamage_Params
{
	float                                              DamageReceived;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct ALandscapeGizmoActor_ReceivePointDamage_Params
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
struct ALandscapeGizmoActor_ReceiveHit_Params
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
struct ALandscapeGizmoActor_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct ALandscapeGizmoActor_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct ALandscapeGizmoActor_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct ALandscapeGizmoActor_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct ALandscapeGizmoActor_ReceiveActorOnReleased_Params
{
	struct FKey                                        ButtonReleased;                                           // (CPF_Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct ALandscapeGizmoActor_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct ALandscapeGizmoActor_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct ALandscapeGizmoActor_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct ALandscapeGizmoActor_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct ALandscapeGizmoActor_ReceiveActorOnClicked_Params
{
	struct FKey                                        ButtonPressed;                                            // (CPF_Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct ALandscapeGizmoActor_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct ALandscapeGizmoActor_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct ALandscapeGizmoActor_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct ALandscapeGizmoActor_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.OnRep_Role
struct ALandscapeGizmoActor_OnRep_Role_Params
{
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct ALandscapeGizmoActor_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct ALandscapeGizmoActor_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct ALandscapeGizmoActor_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct ALandscapeGizmoActor_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct ALandscapeGizmoActor_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct ALandscapeGizmoActor_MakeNoise_Params
{
	float                                              Loudness;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       NoiseInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	float                                              MaxRange;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct ALandscapeGizmoActor_MakeMIDForMaterial_Params
{
	class UMaterialInterface*                          Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct ALandscapeGizmoActor_K2_TeleportTo_Params
{
	struct FVector                                     DestLocation;                                             // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct ALandscapeGizmoActor_K2_SetActorTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct ALandscapeGizmoActor_K2_SetActorRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bTeleportPhysics;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct ALandscapeGizmoActor_K2_SetActorRelativeTransform_Params
{
	struct FTransform                                  NewRelativeTransform;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct ALandscapeGizmoActor_K2_SetActorRelativeRotation_Params
{
	struct FRotator                                    NewRelativeRotation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct ALandscapeGizmoActor_K2_SetActorRelativeLocation_Params
{
	struct FVector                                     NewRelativeLocation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct ALandscapeGizmoActor_K2_SetActorLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct ALandscapeGizmoActor_K2_SetActorLocation_Params
{
	struct FVector                                     NewLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct ALandscapeGizmoActor_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct ALandscapeGizmoActor_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct ALandscapeGizmoActor_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct ALandscapeGizmoActor_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorRotation
struct ALandscapeGizmoActor_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct ALandscapeGizmoActor_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct ALandscapeGizmoActor_K2_DetachFromActor_Params
{
};

// Function Engine.Actor.K2_DestroyComponent
struct ALandscapeGizmoActor_K2_DestroyComponent_Params
{
	class UActorComponent*                             Component;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct ALandscapeGizmoActor_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct ALandscapeGizmoActor_K2_AttachToComponent_Params
{
	class USceneComponent*                             Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct ALandscapeGizmoActor_K2_AttachToActor_Params
{
	class AActor*                                      ParentActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct ALandscapeGizmoActor_K2_AttachRootComponentToActor_Params
{
	class AActor*                                      InParentActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct ALandscapeGizmoActor_K2_AttachRootComponentTo_Params
{
	class USceneComponent*                             InParent;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct ALandscapeGizmoActor_K2_AddActorWorldTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct ALandscapeGizmoActor_K2_AddActorWorldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct ALandscapeGizmoActor_K2_AddActorWorldOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct ALandscapeGizmoActor_K2_AddActorLocalTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct ALandscapeGizmoActor_K2_AddActorLocalRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct ALandscapeGizmoActor_K2_AddActorLocalOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct ALandscapeGizmoActor_IsOverlappingActor_Params
{
	class AActor*                                      Other;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct ALandscapeGizmoActor_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct ALandscapeGizmoActor_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct ALandscapeGizmoActor_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct ALandscapeGizmoActor_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct ALandscapeGizmoActor_GetVerticalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct ALandscapeGizmoActor_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct ALandscapeGizmoActor_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct ALandscapeGizmoActor_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct ALandscapeGizmoActor_GetSquaredDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct ALandscapeGizmoActor_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct ALandscapeGizmoActor_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct ALandscapeGizmoActor_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct ALandscapeGizmoActor_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct ALandscapeGizmoActor_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct ALandscapeGizmoActor_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct ALandscapeGizmoActor_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct ALandscapeGizmoActor_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct ALandscapeGizmoActor_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct ALandscapeGizmoActor_GetInputVectorAxisValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (CPF_ConstParm, CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct ALandscapeGizmoActor_GetInputAxisValue_Params
{
	struct FName                                       InputAxisName;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct ALandscapeGizmoActor_GetInputAxisKeyValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (CPF_ConstParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct ALandscapeGizmoActor_GetHorizontalDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct ALandscapeGizmoActor_GetHorizontalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct ALandscapeGizmoActor_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct ALandscapeGizmoActor_GetDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct ALandscapeGizmoActor_GetDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct ALandscapeGizmoActor_GetComponentsByTag_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.Actor.GetComponentsByClass
struct ALandscapeGizmoActor_GetComponentsByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct ALandscapeGizmoActor_GetComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct ALandscapeGizmoActor_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct ALandscapeGizmoActor_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct ALandscapeGizmoActor_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Engine.Actor.GetAllChildActors
struct ALandscapeGizmoActor_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	bool                                               bIncludeDescendants;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct ALandscapeGizmoActor_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct ALandscapeGizmoActor_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct ALandscapeGizmoActor_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct ALandscapeGizmoActor_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct ALandscapeGizmoActor_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct ALandscapeGizmoActor_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct ALandscapeGizmoActor_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct ALandscapeGizmoActor_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct ALandscapeGizmoActor_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct ALandscapeGizmoActor_GetActorBounds_Params
{
	bool                                               bOnlyCollidingComponents;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct ALandscapeGizmoActor_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct ALandscapeGizmoActor_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct ALandscapeGizmoActor_EnableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct ALandscapeGizmoActor_DisableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct ALandscapeGizmoActor_DetachRootComponentFromParent_Params
{
	bool                                               bMaintainWorldPosition;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct ALandscapeGizmoActor_AddTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct ALandscapeGizmoActor_AddTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct ALandscapeGizmoActor_AddComponent_Params
{
	struct FName                                       TemplateName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bManualAttachment;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UObject*                                     ComponentTemplateContext;                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct ALandscapeGizmoActor_ActorHasTag_Params
{
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.WasRecentlyRendered
struct ALandscapeGizmoActiveActor_WasRecentlyRendered_Params
{
	float                                              Tolerance;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct ALandscapeGizmoActiveActor_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct ALandscapeGizmoActiveActor_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct ALandscapeGizmoActiveActor_SnapRootComponentTo_Params
{
	class AActor*                                      InParentActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct ALandscapeGizmoActiveActor_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>                         NewTickGroup;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct ALandscapeGizmoActiveActor_SetTickableWhenPaused_Params
{
	bool                                               bTickableWhenPaused;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct ALandscapeGizmoActiveActor_SetReplicates_Params
{
	bool                                               bInReplicates;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct ALandscapeGizmoActiveActor_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct ALandscapeGizmoActiveActor_SetOwner_Params
{
	class AActor*                                      NewOwner;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct ALandscapeGizmoActiveActor_SetLifeSpan_Params
{
	float                                              InLifespan;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct ALandscapeGizmoActiveActor_SetActorTickInterval_Params
{
	float                                              TickInterval;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct ALandscapeGizmoActiveActor_SetActorTickEnabled_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct ALandscapeGizmoActiveActor_SetActorScale3D_Params
{
	struct FVector                                     NewScale3D;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct ALandscapeGizmoActiveActor_SetActorRelativeScale3D_Params
{
	struct FVector                                     NewRelativeScale;                                         // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct ALandscapeGizmoActiveActor_SetActorHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct ALandscapeGizmoActiveActor_SetActorEnableCollision_Params
{
	bool                                               bNewActorEnableCollision;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct ALandscapeGizmoActiveActor_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct ALandscapeGizmoActiveActor_RemoveTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct ALandscapeGizmoActiveActor_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct ALandscapeGizmoActiveActor_ReceiveRadialDamage_Params
{
	float                                              DamageReceived;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct ALandscapeGizmoActiveActor_ReceivePointDamage_Params
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
struct ALandscapeGizmoActiveActor_ReceiveHit_Params
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
struct ALandscapeGizmoActiveActor_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct ALandscapeGizmoActiveActor_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct ALandscapeGizmoActiveActor_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct ALandscapeGizmoActiveActor_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct ALandscapeGizmoActiveActor_ReceiveActorOnReleased_Params
{
	struct FKey                                        ButtonReleased;                                           // (CPF_Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct ALandscapeGizmoActiveActor_ReceiveActorOnClicked_Params
{
	struct FKey                                        ButtonPressed;                                            // (CPF_Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct ALandscapeGizmoActiveActor_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct ALandscapeGizmoActiveActor_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct ALandscapeGizmoActiveActor_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct ALandscapeGizmoActiveActor_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.OnRep_Role
struct ALandscapeGizmoActiveActor_OnRep_Role_Params
{
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct ALandscapeGizmoActiveActor_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct ALandscapeGizmoActiveActor_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct ALandscapeGizmoActiveActor_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct ALandscapeGizmoActiveActor_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct ALandscapeGizmoActiveActor_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct ALandscapeGizmoActiveActor_MakeNoise_Params
{
	float                                              Loudness;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       NoiseInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	float                                              MaxRange;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct ALandscapeGizmoActiveActor_MakeMIDForMaterial_Params
{
	class UMaterialInterface*                          Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct ALandscapeGizmoActiveActor_K2_TeleportTo_Params
{
	struct FVector                                     DestLocation;                                             // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct ALandscapeGizmoActiveActor_K2_SetActorTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct ALandscapeGizmoActiveActor_K2_SetActorRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bTeleportPhysics;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct ALandscapeGizmoActiveActor_K2_SetActorRelativeTransform_Params
{
	struct FTransform                                  NewRelativeTransform;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct ALandscapeGizmoActiveActor_K2_SetActorRelativeRotation_Params
{
	struct FRotator                                    NewRelativeRotation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct ALandscapeGizmoActiveActor_K2_SetActorRelativeLocation_Params
{
	struct FVector                                     NewRelativeLocation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct ALandscapeGizmoActiveActor_K2_SetActorLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct ALandscapeGizmoActiveActor_K2_SetActorLocation_Params
{
	struct FVector                                     NewLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct ALandscapeGizmoActiveActor_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct ALandscapeGizmoActiveActor_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct ALandscapeGizmoActiveActor_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct ALandscapeGizmoActiveActor_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorRotation
struct ALandscapeGizmoActiveActor_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct ALandscapeGizmoActiveActor_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct ALandscapeGizmoActiveActor_K2_DetachFromActor_Params
{
};

// Function Engine.Actor.K2_DestroyComponent
struct ALandscapeGizmoActiveActor_K2_DestroyComponent_Params
{
	class UActorComponent*                             Component;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct ALandscapeGizmoActiveActor_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct ALandscapeGizmoActiveActor_K2_AttachToComponent_Params
{
	class USceneComponent*                             Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct ALandscapeGizmoActiveActor_K2_AttachToActor_Params
{
	class AActor*                                      ParentActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct ALandscapeGizmoActiveActor_K2_AttachRootComponentToActor_Params
{
	class AActor*                                      InParentActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct ALandscapeGizmoActiveActor_K2_AttachRootComponentTo_Params
{
	class USceneComponent*                             InParent;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct ALandscapeGizmoActiveActor_K2_AddActorWorldTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct ALandscapeGizmoActiveActor_K2_AddActorWorldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct ALandscapeGizmoActiveActor_K2_AddActorWorldOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct ALandscapeGizmoActiveActor_K2_AddActorLocalTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct ALandscapeGizmoActiveActor_K2_AddActorLocalRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct ALandscapeGizmoActiveActor_K2_AddActorLocalOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct ALandscapeGizmoActiveActor_IsOverlappingActor_Params
{
	class AActor*                                      Other;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct ALandscapeGizmoActiveActor_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct ALandscapeGizmoActiveActor_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct ALandscapeGizmoActiveActor_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct ALandscapeGizmoActiveActor_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct ALandscapeGizmoActiveActor_GetVerticalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct ALandscapeGizmoActiveActor_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct ALandscapeGizmoActiveActor_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct ALandscapeGizmoActiveActor_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct ALandscapeGizmoActiveActor_GetSquaredDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct ALandscapeGizmoActiveActor_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct ALandscapeGizmoActiveActor_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct ALandscapeGizmoActiveActor_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct ALandscapeGizmoActiveActor_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct ALandscapeGizmoActiveActor_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct ALandscapeGizmoActiveActor_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct ALandscapeGizmoActiveActor_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct ALandscapeGizmoActiveActor_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct ALandscapeGizmoActiveActor_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct ALandscapeGizmoActiveActor_GetInputVectorAxisValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (CPF_ConstParm, CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct ALandscapeGizmoActiveActor_GetInputAxisValue_Params
{
	struct FName                                       InputAxisName;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct ALandscapeGizmoActiveActor_GetInputAxisKeyValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (CPF_ConstParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct ALandscapeGizmoActiveActor_GetHorizontalDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct ALandscapeGizmoActiveActor_GetHorizontalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct ALandscapeGizmoActiveActor_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct ALandscapeGizmoActiveActor_GetDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct ALandscapeGizmoActiveActor_GetDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct ALandscapeGizmoActiveActor_GetComponentsByTag_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.Actor.GetComponentsByClass
struct ALandscapeGizmoActiveActor_GetComponentsByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct ALandscapeGizmoActiveActor_GetComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct ALandscapeGizmoActiveActor_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct ALandscapeGizmoActiveActor_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct ALandscapeGizmoActiveActor_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Engine.Actor.GetAllChildActors
struct ALandscapeGizmoActiveActor_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	bool                                               bIncludeDescendants;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct ALandscapeGizmoActiveActor_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct ALandscapeGizmoActiveActor_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct ALandscapeGizmoActiveActor_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct ALandscapeGizmoActiveActor_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct ALandscapeGizmoActiveActor_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct ALandscapeGizmoActiveActor_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct ALandscapeGizmoActiveActor_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct ALandscapeGizmoActiveActor_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct ALandscapeGizmoActiveActor_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct ALandscapeGizmoActiveActor_GetActorBounds_Params
{
	bool                                               bOnlyCollidingComponents;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct ALandscapeGizmoActiveActor_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct ALandscapeGizmoActiveActor_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct ALandscapeGizmoActiveActor_EnableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct ALandscapeGizmoActiveActor_DisableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct ALandscapeGizmoActiveActor_DetachRootComponentFromParent_Params
{
	bool                                               bMaintainWorldPosition;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct ALandscapeGizmoActiveActor_AddTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct ALandscapeGizmoActiveActor_AddTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct ALandscapeGizmoActiveActor_AddComponent_Params
{
	struct FName                                       TemplateName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bManualAttachment;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UObject*                                     ComponentTemplateContext;                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct ALandscapeGizmoActiveActor_ActorHasTag_Params
{
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeRigidBody
struct ULandscapeGizmoRenderComponent_WakeRigidBody_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.WakeAllRigidBodies
struct ULandscapeGizmoRenderComponent_WakeAllRigidBodies_Params
{
};

// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
struct ULandscapeGizmoRenderComponent_SetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride                      NewOverride;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetUseCCD
struct ULandscapeGizmoRenderComponent_SetUseCCD_Params
{
	bool                                               InUseCCD;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
struct ULandscapeGizmoRenderComponent_SetTranslucentSortPriority_Params
{
	int                                                NewTranslucentSortPriority;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetSimulatePhysics
struct ULandscapeGizmoRenderComponent_SetSimulatePhysics_Params
{
	bool                                               bSimulate;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderInMono
struct ULandscapeGizmoRenderComponent_SetRenderInMono_Params
{
	bool                                               bValue;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderInMainPass
struct ULandscapeGizmoRenderComponent_SetRenderInMainPass_Params
{
	bool                                               bValue;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetRenderCustomDepth
struct ULandscapeGizmoRenderComponent_SetRenderCustomDepth_Params
{
	bool                                               bValue;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
struct ULandscapeGizmoRenderComponent_SetPhysMaterialOverride_Params
{
	class UPhysicalMaterial*                           NewPhysMaterial;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
struct ULandscapeGizmoRenderComponent_SetPhysicsMaxAngularVelocity_Params
{
	float                                              NewMaxAngVel;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
struct ULandscapeGizmoRenderComponent_SetPhysicsLinearVelocity_Params
{
	struct FVector                                     NewVel;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
struct ULandscapeGizmoRenderComponent_SetPhysicsAngularVelocity_Params
{
	struct FVector                                     NewAngVel;                                                // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOwnerNoSee
struct ULandscapeGizmoRenderComponent_SetOwnerNoSee_Params
{
	bool                                               bNewOwnerNoSee;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
struct ULandscapeGizmoRenderComponent_SetOnlyOwnerSee_Params
{
	bool                                               bNewOnlyOwnerSee;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
struct ULandscapeGizmoRenderComponent_SetNotifyRigidBodyCollision_Params
{
	bool                                               bNewNotifyRigidBodyCollision;                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterialByName
struct ULandscapeGizmoRenderComponent_SetMaterialByName_Params
{
	struct FName                                       MaterialSlotName;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMaterial
struct ULandscapeGizmoRenderComponent_SetMaterial_Params
{
	int                                                ElementIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMassScale
struct ULandscapeGizmoRenderComponent_SetMassScale_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InMassScale;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetMassOverrideInKg
struct ULandscapeGizmoRenderComponent_SetMassOverrideInKg_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MassInKg;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bOverrideMass;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetLockedAxis
struct ULandscapeGizmoRenderComponent_SetLockedAxis_Params
{
	TEnumAsByte<EDOFMode>                              LockedAxis;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetLinearDamping
struct ULandscapeGizmoRenderComponent_SetLinearDamping_Params
{
	float                                              InDamping;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetEnableGravity
struct ULandscapeGizmoRenderComponent_SetEnableGravity_Params
{
	bool                                               bGravityEnabled;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
struct ULandscapeGizmoRenderComponent_SetCustomDepthStencilWriteMask_Params
{
};

// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
struct ULandscapeGizmoRenderComponent_SetCustomDepthStencilValue_Params
{
	int                                                Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCullDistance
struct ULandscapeGizmoRenderComponent_SetCullDistance_Params
{
	float                                              NewCullDistance;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetConstraintMode
struct ULandscapeGizmoRenderComponent_SetConstraintMode_Params
{
	TEnumAsByte<EDOFMode>                              ConstraintMode;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
struct ULandscapeGizmoRenderComponent_SetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
struct ULandscapeGizmoRenderComponent_SetCollisionResponseToAllChannels_Params
{
	TEnumAsByte<ECollisionResponse>                    NewResponse;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionProfileName
struct ULandscapeGizmoRenderComponent_SetCollisionProfileName_Params
{
	struct FName                                       InCollisionProfileName;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionObjectType
struct ULandscapeGizmoRenderComponent_SetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCollisionEnabled
struct ULandscapeGizmoRenderComponent_SetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>                     NewType;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCenterOfMass
struct ULandscapeGizmoRenderComponent_SetCenterOfMass_Params
{
	struct FVector                                     CenterOfMassOffset;                                       // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetCastShadow
struct ULandscapeGizmoRenderComponent_SetCastShadow_Params
{
	bool                                               NewCastShadow;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetBoundsScale
struct ULandscapeGizmoRenderComponent_SetBoundsScale_Params
{
	float                                              NewBoundsScale;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAngularDamping
struct ULandscapeGizmoRenderComponent_SetAngularDamping_Params
{
	float                                              InDamping;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllUseCCD
struct ULandscapeGizmoRenderComponent_SetAllUseCCD_Params
{
	bool                                               InUseCCD;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
struct ULandscapeGizmoRenderComponent_SetAllPhysicsLinearVelocity_Params
{
	struct FVector                                     NewVel;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocity
struct ULandscapeGizmoRenderComponent_SetAllPhysicsAngularVelocity_Params
{
	struct FVector                                     NewAngVel;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bAddToCurrent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.SetAllMassScale
struct ULandscapeGizmoRenderComponent_SetAllMassScale_Params
{
	float                                              InMassScale;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
struct ULandscapeGizmoRenderComponent_ScaleByMomentOfInertia_Params
{
	struct FVector                                     InputVector;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
struct ULandscapeGizmoRenderComponent_PutRigidBodyToSleep_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_LineTraceComponent
struct ULandscapeGizmoRenderComponent_K2_LineTraceComponent_Params
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
struct ULandscapeGizmoRenderComponent_K2_IsQueryCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
struct ULandscapeGizmoRenderComponent_K2_IsPhysicsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
struct ULandscapeGizmoRenderComponent_K2_IsCollisionEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsOverlappingComponent
struct ULandscapeGizmoRenderComponent_IsOverlappingComponent_Params
{
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsOverlappingActor
struct ULandscapeGizmoRenderComponent_IsOverlappingActor_Params
{
	class AActor*                                      Other;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsGravityEnabled
struct ULandscapeGizmoRenderComponent_IsGravityEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
struct ULandscapeGizmoRenderComponent_IsAnyRigidBodyAwake_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
struct ULandscapeGizmoRenderComponent_IgnoreComponentWhenMoving_Params
{
	class UPrimitiveComponent*                         Component;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bShouldIgnore;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
struct ULandscapeGizmoRenderComponent_IgnoreActorWhenMoving_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bShouldIgnore;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
struct ULandscapeGizmoRenderComponent_GetWalkableSlopeOverride_Params
{
	struct FWalkableSlopeOverride                      ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
struct ULandscapeGizmoRenderComponent_GetPhysicsLinearVelocityAtPoint_Params
{
	struct FVector                                     Point;                                                    // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
struct ULandscapeGizmoRenderComponent_GetPhysicsLinearVelocity_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
struct ULandscapeGizmoRenderComponent_GetPhysicsAngularVelocity_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetOverlappingComponents
struct ULandscapeGizmoRenderComponent_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 InOverlappingComponents;                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Engine.PrimitiveComponent.GetOverlappingActors
struct ULandscapeGizmoRenderComponent_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetOverlapInfos
struct ULandscapeGizmoRenderComponent_GetOverlapInfos_Params
{
	TArray<struct FOverlapInfo>                        ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm)
};

// Function Engine.PrimitiveComponent.GetNumMaterials
struct ULandscapeGizmoRenderComponent_GetNumMaterials_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
struct ULandscapeGizmoRenderComponent_GetMaterialFromCollisionFaceIndex_Params
{
	int                                                FaceIndex;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMaterial
struct ULandscapeGizmoRenderComponent_GetMaterial_Params
{
	int                                                ElementIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMassScale
struct ULandscapeGizmoRenderComponent_GetMassScale_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetMass
struct ULandscapeGizmoRenderComponent_GetMass_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetLinearDamping
struct ULandscapeGizmoRenderComponent_GetLinearDamping_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetInertiaTensor
struct ULandscapeGizmoRenderComponent_GetInertiaTensor_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
struct ULandscapeGizmoRenderComponent_GetCollisionResponseToChannel_Params
{
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionResponse>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionProfileName
struct ULandscapeGizmoRenderComponent_GetCollisionProfileName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionObjectType
struct ULandscapeGizmoRenderComponent_GetCollisionObjectType_Params
{
	TEnumAsByte<ECollisionChannel>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCollisionEnabled
struct ULandscapeGizmoRenderComponent_GetCollisionEnabled_Params
{
	TEnumAsByte<ECollisionEnabled>                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
struct ULandscapeGizmoRenderComponent_GetClosestPointOnCollision_Params
{
	struct FVector                                     Point;                                                    // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     OutPointOnBody;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetCenterOfMass
struct ULandscapeGizmoRenderComponent_GetCenterOfMass_Params
{
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.GetAngularDamping
struct ULandscapeGizmoRenderComponent_GetAngularDamping_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
struct ULandscapeGizmoRenderComponent_CreateDynamicMaterialInstance_Params
{
	int                                                ElementIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          SourceMaterial;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
struct ULandscapeGizmoRenderComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params
{
	int                                                ElementIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
struct ULandscapeGizmoRenderComponent_CreateAndSetMaterialInstanceDynamic_Params
{
	int                                                ElementIndex;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
struct ULandscapeGizmoRenderComponent_CopyArrayOfMoveIgnoreComponents_Params
{
	TArray<class UPrimitiveComponent*>                 ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
struct ULandscapeGizmoRenderComponent_CopyArrayOfMoveIgnoreActors_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
struct ULandscapeGizmoRenderComponent_ClearMoveIgnoreComponents_Params
{
};

// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
struct ULandscapeGizmoRenderComponent_ClearMoveIgnoreActors_Params
{
};

// Function Engine.PrimitiveComponent.CanCharacterStepUp
struct ULandscapeGizmoRenderComponent_CanCharacterStepUp_Params
{
	class APawn*                                       Pawn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddTorque
struct ULandscapeGizmoRenderComponent_AddTorque_Params
{
	struct FVector                                     Torque;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAccelChange;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialImpulse
struct ULandscapeGizmoRenderComponent_AddRadialImpulse_Params
{
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Strength;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>                 Falloff;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bVelChange;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddRadialForce
struct ULandscapeGizmoRenderComponent_AddRadialForce_Params
{
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	float                                              Radius;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Strength;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ERadialImpulseFalloff>                 Falloff;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAccelChange;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulseAtLocation
struct ULandscapeGizmoRenderComponent_AddImpulseAtLocation_Params
{
	struct FVector                                     Impulse;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddImpulse
struct ULandscapeGizmoRenderComponent_AddImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bVelChange;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
struct ULandscapeGizmoRenderComponent_AddForceAtLocationLocal_Params
{
	struct FVector                                     force;                                                    // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForceAtLocation
struct ULandscapeGizmoRenderComponent_AddForceAtLocation_Params
{
	struct FVector                                     force;                                                    // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddForce
struct ULandscapeGizmoRenderComponent_AddForce_Params
{
	struct FVector                                     force;                                                    // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAccelChange;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.PrimitiveComponent.AddAngularImpulse
struct ULandscapeGizmoRenderComponent_AddAngularImpulse_Params
{
	struct FVector                                     Impulse;                                                  // (CPF_Parm, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bVelChange;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Landscape.LandscapeProxy.EditorApplySpline
struct ALandscapeProxy_EditorApplySpline_Params
{
	class USplineComponent*                            InSplineComponent;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              StartWidth;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndWidth;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartSideFalloff;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndSideFalloff;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartRoll;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndRoll;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSubdivisions;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRaiseHeights;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLowerHeights;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULandscapeLayerInfoObject*                   PaintLayer;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct ALandscapeProxy_ChangeLODDistanceFactor_Params
{
	float                                              InLODDistanceFactor;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Landscape.LandscapeProxy.EditorApplySpline
struct ALandscape_EditorApplySpline_Params
{
	class USplineComponent*                            InSplineComponent;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	float                                              StartWidth;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndWidth;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartSideFalloff;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndSideFalloff;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StartRoll;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndRoll;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSubdivisions;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bRaiseHeights;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bLowerHeights;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class ULandscapeLayerInfoObject*                   PaintLayer;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
struct ALandscape_ChangeLODDistanceFactor_Params
{
	float                                              InLODDistanceFactor;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
