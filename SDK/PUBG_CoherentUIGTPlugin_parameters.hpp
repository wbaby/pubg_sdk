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

// Function CoherentUIGTPlugin.CoherentUIGTWidget.TriggerJSEvent
struct UCoherentUIGTWidget_TriggerJSEvent_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	class UCoherentUIGTJSEvent*                        EventData;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.ShowPaintRects
struct UCoherentUIGTWidget_ShowPaintRects_Params
{
	bool                                               Show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.SetClickThroughAlphaThreshold
struct UCoherentUIGTWidget_SetClickThroughAlphaThreshold_Params
{
	float                                              threshold;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Reload
struct UCoherentUIGTWidget_Reload_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Redraw
struct UCoherentUIGTWidget_Redraw_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.Load
struct UCoherentUIGTWidget_Load_Params
{
	struct FString                                     path;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsTransparent
struct UCoherentUIGTWidget_IsTransparent_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyToCreateView
struct UCoherentUIGTWidget_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsReadyForBindings
struct UCoherentUIGTWidget_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.IsDocumentReady
struct UCoherentUIGTWidget_IsDocumentReady_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.HasRequestedView
struct UCoherentUIGTWidget_HasRequestedView_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.GetClickThroughAlphaThreshold
struct UCoherentUIGTWidget_GetClickThroughAlphaThreshold_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTWidget.CreateJSEvent
struct UCoherentUIGTWidget_CreateJSEvent_Params
{
	class UCoherentUIGTJSEvent*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.WasRecentlyRendered
struct ACoherentUIGTSystem_WasRecentlyRendered_Params
{
	float                                              Tolerance;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.UserConstructionScript
struct ACoherentUIGTSystem_UserConstructionScript_Params
{
};

// Function Engine.Actor.TearOff
struct ACoherentUIGTSystem_TearOff_Params
{
};

// Function Engine.Actor.SnapRootComponentTo
struct ACoherentUIGTSystem_SnapRootComponentTo_Params
{
	class AActor*                                      InParentActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetTickGroup
struct ACoherentUIGTSystem_SetTickGroup_Params
{
	TEnumAsByte<ETickingGroup>                         NewTickGroup;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetTickableWhenPaused
struct ACoherentUIGTSystem_SetTickableWhenPaused_Params
{
	bool                                               bTickableWhenPaused;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetReplicates
struct ACoherentUIGTSystem_SetReplicates_Params
{
	bool                                               bInReplicates;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetReplicateMovement
struct ACoherentUIGTSystem_SetReplicateMovement_Params
{
	bool                                               bInReplicateMovement;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetOwner
struct ACoherentUIGTSystem_SetOwner_Params
{
	class AActor*                                      NewOwner;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetLifeSpan
struct ACoherentUIGTSystem_SetLifeSpan_Params
{
	float                                              InLifespan;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorTickInterval
struct ACoherentUIGTSystem_SetActorTickInterval_Params
{
	float                                              TickInterval;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorTickEnabled
struct ACoherentUIGTSystem_SetActorTickEnabled_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorScale3D
struct ACoherentUIGTSystem_SetActorScale3D_Params
{
	struct FVector                                     NewScale3D;                                               // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorRelativeScale3D
struct ACoherentUIGTSystem_SetActorRelativeScale3D_Params
{
	struct FVector                                     NewRelativeScale;                                         // (CPF_Parm, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorHiddenInGame
struct ACoherentUIGTSystem_SetActorHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.SetActorEnableCollision
struct ACoherentUIGTSystem_SetActorEnableCollision_Params
{
	bool                                               bNewActorEnableCollision;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteComponent
struct ACoherentUIGTSystem_RemoveTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.RemoveTickPrerequisiteActor
struct ACoherentUIGTSystem_RemoveTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveTick
struct ACoherentUIGTSystem_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveRadialDamage
struct ACoherentUIGTSystem_ReceiveRadialDamage_Params
{
	float                                              DamageReceived;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceivePointDamage
struct ACoherentUIGTSystem_ReceivePointDamage_Params
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
struct ACoherentUIGTSystem_ReceiveHit_Params
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
struct ACoherentUIGTSystem_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveDestroyed
struct ACoherentUIGTSystem_ReceiveDestroyed_Params
{
};

// Function Engine.Actor.ReceiveBeginPlay
struct ACoherentUIGTSystem_ReceiveBeginPlay_Params
{
};

// Function Engine.Actor.ReceiveAnyDamage
struct ACoherentUIGTSystem_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnReleased
struct ACoherentUIGTSystem_ReceiveActorOnReleased_Params
{
	struct FKey                                        ButtonReleased;                                           // (CPF_Parm)
};

// Function Engine.Actor.ReceiveActorOnInputTouchLeave
struct ACoherentUIGTSystem_ReceiveActorOnInputTouchLeave_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnter
struct ACoherentUIGTSystem_ReceiveActorOnInputTouchEnter_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchEnd
struct ACoherentUIGTSystem_ReceiveActorOnInputTouchEnd_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnInputTouchBegin
struct ACoherentUIGTSystem_ReceiveActorOnInputTouchBegin_Params
{
	TEnumAsByte<ETouchIndex>                           FingerIndex;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorOnClicked
struct ACoherentUIGTSystem_ReceiveActorOnClicked_Params
{
	struct FKey                                        ButtonPressed;                                            // (CPF_Parm)
};

// Function Engine.Actor.ReceiveActorEndOverlap
struct ACoherentUIGTSystem_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorEndCursorOver
struct ACoherentUIGTSystem_ReceiveActorEndCursorOver_Params
{
};

// Function Engine.Actor.ReceiveActorBeginOverlap
struct ACoherentUIGTSystem_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.ReceiveActorBeginCursorOver
struct ACoherentUIGTSystem_ReceiveActorBeginCursorOver_Params
{
};

// Function Engine.Actor.OnRep_Role
struct ACoherentUIGTSystem_OnRep_Role_Params
{
};

// Function Engine.Actor.OnRep_ReplicateMovement
struct ACoherentUIGTSystem_OnRep_ReplicateMovement_Params
{
};

// Function Engine.Actor.OnRep_ReplicatedMovement
struct ACoherentUIGTSystem_OnRep_ReplicatedMovement_Params
{
};

// Function Engine.Actor.OnRep_Owner
struct ACoherentUIGTSystem_OnRep_Owner_Params
{
};

// Function Engine.Actor.OnRep_Instigator
struct ACoherentUIGTSystem_OnRep_Instigator_Params
{
};

// Function Engine.Actor.OnRep_AttachmentReplication
struct ACoherentUIGTSystem_OnRep_AttachmentReplication_Params
{
};

// Function Engine.Actor.MakeNoise
struct ACoherentUIGTSystem_MakeNoise_Params
{
	float                                              Loudness;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       NoiseInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     NoiseLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	float                                              MaxRange;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.MakeMIDForMaterial
struct ACoherentUIGTSystem_MakeMIDForMaterial_Params
{
	class UMaterialInterface*                          Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_TeleportTo
struct ACoherentUIGTSystem_K2_TeleportTo_Params
{
	struct FVector                                     DestLocation;                                             // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator                                    DestRotation;                                             // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorTransform
struct ACoherentUIGTSystem_K2_SetActorTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRotation
struct ACoherentUIGTSystem_K2_SetActorRotation_Params
{
	struct FRotator                                    NewRotation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bTeleportPhysics;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeTransform
struct ACoherentUIGTSystem_K2_SetActorRelativeTransform_Params
{
	struct FTransform                                  NewRelativeTransform;                                     // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeRotation
struct ACoherentUIGTSystem_K2_SetActorRelativeRotation_Params
{
	struct FRotator                                    NewRelativeRotation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorRelativeLocation
struct ACoherentUIGTSystem_K2_SetActorRelativeLocation_Params
{
	struct FVector                                     NewRelativeLocation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocationAndRotation
struct ACoherentUIGTSystem_K2_SetActorLocationAndRotation_Params
{
	struct FVector                                     NewLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FRotator                                    NewRotation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_SetActorLocation
struct ACoherentUIGTSystem_K2_SetActorLocation_Params
{
	struct FVector                                     NewLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_OnReset
struct ACoherentUIGTSystem_K2_OnReset_Params
{
};

// Function Engine.Actor.K2_OnEndViewTarget
struct ACoherentUIGTSystem_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_OnBecomeViewTarget
struct ACoherentUIGTSystem_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetRootComponent
struct ACoherentUIGTSystem_K2_GetRootComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorRotation
struct ACoherentUIGTSystem_K2_GetActorRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_GetActorLocation
struct ACoherentUIGTSystem_K2_GetActorLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_DetachFromActor
struct ACoherentUIGTSystem_K2_DetachFromActor_Params
{
};

// Function Engine.Actor.K2_DestroyComponent
struct ACoherentUIGTSystem_K2_DestroyComponent_Params
{
	class UActorComponent*                             Component;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_DestroyActor
struct ACoherentUIGTSystem_K2_DestroyActor_Params
{
};

// Function Engine.Actor.K2_AttachToComponent
struct ACoherentUIGTSystem_K2_AttachToComponent_Params
{
	class USceneComponent*                             Parent;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachToActor
struct ACoherentUIGTSystem_K2_AttachToActor_Params
{
	class AActor*                                      ParentActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SocketName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentToActor
struct ACoherentUIGTSystem_K2_AttachRootComponentToActor_Params
{
	class AActor*                                      InParentActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AttachRootComponentTo
struct ACoherentUIGTSystem_K2_AttachRootComponentTo_Params
{
	class USceneComponent*                             InParent;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FName                                       InSocketName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachLocationType;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bWeldSimulatedBodies;                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldTransform
struct ACoherentUIGTSystem_K2_AddActorWorldTransform_Params
{
	struct FTransform                                  DeltaTransform;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldRotation
struct ACoherentUIGTSystem_K2_AddActorWorldRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorWorldOffset
struct ACoherentUIGTSystem_K2_AddActorWorldOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalTransform
struct ACoherentUIGTSystem_K2_AddActorLocalTransform_Params
{
	struct FTransform                                  NewTransform;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalRotation
struct ACoherentUIGTSystem_K2_AddActorLocalRotation_Params
{
	struct FRotator                                    DeltaRotation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.K2_AddActorLocalOffset
struct ACoherentUIGTSystem_K2_AddActorLocalOffset_Params
{
	struct FVector                                     DeltaLocation;                                            // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               bSweep;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepHitResult;                                           // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               bTeleport;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsOverlappingActor
struct ACoherentUIGTSystem_IsOverlappingActor_Params
{
	class AActor*                                      Other;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsChildActor
struct ACoherentUIGTSystem_IsChildActor_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsActorTickEnabled
struct ACoherentUIGTSystem_IsActorTickEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.IsActorBeingDestroyed
struct ACoherentUIGTSystem_IsActorBeingDestroyed_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.HasAuthority
struct ACoherentUIGTSystem_HasAuthority_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetVerticalDistanceTo
struct ACoherentUIGTSystem_GetVerticalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetVelocity
struct ACoherentUIGTSystem_GetVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetTransform
struct ACoherentUIGTSystem_GetTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetTickableWhenPaused
struct ACoherentUIGTSystem_GetTickableWhenPaused_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetSquaredDistanceTo
struct ACoherentUIGTSystem_GetSquaredDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetRemoteRole
struct ACoherentUIGTSystem_GetRemoteRole_Params
{
	TEnumAsByte<ENetRole>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetParentComponent
struct ACoherentUIGTSystem_GetParentComponent_Params
{
	class UChildActorComponent*                        ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetParentActor
struct ACoherentUIGTSystem_GetParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetOwner
struct ACoherentUIGTSystem_GetOwner_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetOverlappingComponents
struct ACoherentUIGTSystem_GetOverlappingComponents_Params
{
	TArray<class UPrimitiveComponent*>                 OverlappingComponents;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Engine.Actor.GetOverlappingActors
struct ACoherentUIGTSystem_GetOverlappingActors_Params
{
	TArray<class AActor*>                              OverlappingActors;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	class UClass*                                      ClassFilter;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetLifeSpan
struct ACoherentUIGTSystem_GetLifeSpan_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInstigatorController
struct ACoherentUIGTSystem_GetInstigatorController_Params
{
	class AController*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInstigator
struct ACoherentUIGTSystem_GetInstigator_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputVectorAxisValue
struct ACoherentUIGTSystem_GetInputVectorAxisValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (CPF_ConstParm, CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisValue
struct ACoherentUIGTSystem_GetInputAxisValue_Params
{
	struct FName                                       InputAxisName;                                            // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetInputAxisKeyValue
struct ACoherentUIGTSystem_GetInputAxisKeyValue_Params
{
	struct FKey                                        InputAxisKey;                                             // (CPF_ConstParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDotProductTo
struct ACoherentUIGTSystem_GetHorizontalDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetHorizontalDistanceTo
struct ACoherentUIGTSystem_GetHorizontalDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetGameTimeSinceCreation
struct ACoherentUIGTSystem_GetGameTimeSinceCreation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetDotProductTo
struct ACoherentUIGTSystem_GetDotProductTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetDistanceTo
struct ACoherentUIGTSystem_GetDistanceTo_Params
{
	class AActor*                                      OtherActor;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetComponentsByTag
struct ACoherentUIGTSystem_GetComponentsByTag_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.Actor.GetComponentsByClass
struct ACoherentUIGTSystem_GetComponentsByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function Engine.Actor.GetComponentByClass
struct ACoherentUIGTSystem_GetComponentByClass_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentSocketName
struct ACoherentUIGTSystem_GetAttachParentSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachParentActor
struct ACoherentUIGTSystem_GetAttachParentActor_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetAttachedActors
struct ACoherentUIGTSystem_GetAttachedActors_Params
{
	TArray<class AActor*>                              OutActors;                                                // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function Engine.Actor.GetAllChildActors
struct ACoherentUIGTSystem_GetAllChildActors_Params
{
	TArray<class AActor*>                              ChildActors;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	bool                                               bIncludeDescendants;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorUpVector
struct ACoherentUIGTSystem_GetActorUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorTimeDilation
struct ACoherentUIGTSystem_GetActorTimeDilation_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorTickInterval
struct ACoherentUIGTSystem_GetActorTickInterval_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorScale3D
struct ACoherentUIGTSystem_GetActorScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorRightVector
struct ACoherentUIGTSystem_GetActorRightVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorRelativeScale3D
struct ACoherentUIGTSystem_GetActorRelativeScale3D_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorForwardVector
struct ACoherentUIGTSystem_GetActorForwardVector_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorEyesViewPoint
struct ACoherentUIGTSystem_GetActorEyesViewPoint_Params
{
	struct FVector                                     OutLocation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorEnableCollision
struct ACoherentUIGTSystem_GetActorEnableCollision_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.GetActorBounds
struct ACoherentUIGTSystem_GetActorBounds_Params
{
	bool                                               bOnlyCollidingComponents;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Origin;                                                   // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	struct FVector                                     BoxExtent;                                                // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function Engine.Actor.ForceNetUpdate
struct ACoherentUIGTSystem_ForceNetUpdate_Params
{
};

// Function Engine.Actor.FlushNetDormancy
struct ACoherentUIGTSystem_FlushNetDormancy_Params
{
};

// Function Engine.Actor.EnableInput
struct ACoherentUIGTSystem_EnableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.DisableInput
struct ACoherentUIGTSystem_DisableInput_Params
{
	class APlayerController*                           PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.DetachRootComponentFromParent
struct ACoherentUIGTSystem_DetachRootComponentFromParent_Params
{
	bool                                               bMaintainWorldPosition;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteComponent
struct ACoherentUIGTSystem_AddTickPrerequisiteComponent_Params
{
	class UActorComponent*                             PrerequisiteComponent;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddTickPrerequisiteActor
struct ACoherentUIGTSystem_AddTickPrerequisiteActor_Params
{
	class AActor*                                      PrerequisiteActor;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Engine.Actor.AddComponent
struct ACoherentUIGTSystem_AddComponent_Params
{
	struct FName                                       TemplateName;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bManualAttachment;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTransform                                  RelativeTransform;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class UObject*                                     ComponentTemplateContext;                                 // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function Engine.Actor.ActorHasTag
struct ACoherentUIGTSystem_ActorHasTag_Params
{
	struct FName                                       Tag;                                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.ReadObject
struct UCoherentUIGTJSPayload_ReadObject_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetString
struct UCoherentUIGTJSPayload_GetString_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetNumber
struct UCoherentUIGTJSPayload_GetNumber_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetInt32
struct UCoherentUIGTJSPayload_GetInt32_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTJSPayload.GetBool
struct UCoherentUIGTJSPayload_GetBool_Params
{
	int                                                Index;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.TriggerJSEvent
struct UCoherentUIGTBaseComponent_TriggerJSEvent_Params
{
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	class UCoherentUIGTJSEvent*                        EventData;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.ShowPaintRects
struct UCoherentUIGTBaseComponent_ShowPaintRects_Params
{
	bool                                               Show;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.SetClickThroughAlphaThreshold
struct UCoherentUIGTBaseComponent_SetClickThroughAlphaThreshold_Params
{
	float                                              threshold;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Resize
struct UCoherentUIGTBaseComponent_Resize_Params
{
	int                                                Width;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Reload
struct UCoherentUIGTBaseComponent_Reload_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Redraw
struct UCoherentUIGTBaseComponent_Redraw_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.Load
struct UCoherentUIGTBaseComponent_Load_Params
{
	struct FString                                     path;                                                     // (CPF_Parm, CPF_ZeroConstructor)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsTransparent
struct UCoherentUIGTBaseComponent_IsTransparent_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyToCreateView
struct UCoherentUIGTBaseComponent_IsReadyToCreateView_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsReadyForBindings
struct UCoherentUIGTBaseComponent_IsReadyForBindings_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.IsDocumentReady
struct UCoherentUIGTBaseComponent_IsDocumentReady_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.HasRequestedView
struct UCoherentUIGTBaseComponent_HasRequestedView_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.GetClickThroughAlphaThreshold
struct UCoherentUIGTBaseComponent_GetClickThroughAlphaThreshold_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.EnableDelayedUpdate
struct UCoherentUIGTBaseComponent_EnableDelayedUpdate_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTBaseComponent.CreateJSEvent
struct UCoherentUIGTBaseComponent_CreateJSEvent_Params
{
	class UCoherentUIGTJSEvent*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTGameHUD.SetupUIGTView
struct ACoherentUIGTGameHUD_SetupUIGTView_Params
{
	struct FString                                     PageUrl;                                                  // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bIsTransparent;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClickThroughAlphaThreshold;                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AnimationFrameDefer;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bDelayedUpdate;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.ToggleCoherentUIGTInputFocus
struct ACoherentUIGTInputActor_ToggleCoherentUIGTInputFocus_Params
{
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetLineTraceMode
struct ACoherentUIGTInputActor_SetLineTraceMode_Params
{
	TEnumAsByte<EGTInputWidgetLineTraceMode>           Mode;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetInputPropagationBehaviour
struct ACoherentUIGTInputActor_SetInputPropagationBehaviour_Params
{
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTViewFocus
struct ACoherentUIGTInputActor_SetCoherentUIGTViewFocus_Params
{
	class UCoherentUIGTBaseComponent*                  NewFocusedView;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.SetCoherentUIGTInputFocus
struct ACoherentUIGTInputActor_SetCoherentUIGTInputFocus_Params
{
	bool                                               FocusUI;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED
struct ACoherentUIGTInputActor_IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.IsCoherentUIGTFocused
struct ACoherentUIGTInputActor_IsCoherentUIGTFocused_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.Initialize
struct ACoherentUIGTInputActor_Initialize_Params
{
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressMode;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EGTInputWidgetRaycastQuality>          RaycastQuality;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                UVChannel;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.GetInputPropagationBehaviour
struct ACoherentUIGTInputActor_GetInputPropagationBehaviour_Params
{
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AlwaysAcceptMouseInput
struct ACoherentUIGTInputActor_AlwaysAcceptMouseInput_Params
{
	bool                                               bAccept;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTInputActor.AllowJoystickInputWhileUIGTIsFocused_DEPRECATED
struct ACoherentUIGTInputActor_AllowJoystickInputWhileUIGTIsFocused_DEPRECATED_Params
{
	bool                                               bAllow;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function CoherentUIGTPlugin.CoherentUIGTLiveView.OnLiveViewSizeRequest
struct UCoherentUIGTLiveView_OnLiveViewSizeRequest_Params
{
	class UCoherentUIGTBaseComponent*                  baseComponent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FString                                     Name;                                                     // (CPF_Parm, CPF_ZeroConstructor)
	int                                                Width;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
