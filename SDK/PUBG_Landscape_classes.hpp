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

// Class Landscape.ControlPointMeshComponent
// 0x0000 (0x0A80 - 0x0A80)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}


	bool SetStaticMesh(class UStaticMesh* NewMesh);
	void SetForcedLodModel(int NewForcedLodModel);
	void OnRep_StaticMesh(class UStaticMesh* OldStaticMesh);
	void GetLocalBounds(struct FVector* Min, struct FVector* Max);
};


// Class Landscape.LandscapeComponent
// 0x0170 (0x0A60 - 0x08F0)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	int                                                ComponentSizeQuads;                                       // 0x08F0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x08F4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSubsections;                                           // 0x08F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08FC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0900(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          OverrideHoleMaterial;                                     // 0x0908(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInstanceConstant*>           MaterialInstances;                                        // 0x0910(0x0010) (CPF_ZeroConstructor)
	TArray<struct FWeightmapLayerAllocationInfo>       WeightmapLayerAllocations;                                // 0x0920(0x0010) (CPF_ZeroConstructor)
	TArray<class UTexture2D*>                          WeightmapTextures;                                        // 0x0930(0x0010) (CPF_ZeroConstructor)
	class UTexture2D*                                  XYOffsetmapTexture;                                       // 0x0940(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0948(0x0008) MISSED OFFSET
	struct FVector4                                    WeightmapScaleBias;                                       // 0x0950(0x0010) (CPF_IsPlainOldData)
	float                                              WeightmapSubsectionOffset;                                // 0x0960(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0964(0x000C) MISSED OFFSET
	struct FVector4                                    HeightmapScaleBias;                                       // 0x0970(0x0010) (CPF_IsPlainOldData)
	class UTexture2D*                                  HeightmapTexture;                                         // 0x0980(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0988(0x001C) (CPF_IsPlainOldData)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;                                       // 0x09A4(0x0020) (CPF_ExportObject, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGuid                                       MapBuildDataId;                                           // 0x09C0(0x0010) (CPF_IsPlainOldData)
	TArray<struct FGuid>                               IrrelevantLights;                                         // 0x09D0(0x0010) (CPF_ZeroConstructor, CPF_Deprecated)
	int                                                CollisionMipLevel;                                        // 0x09E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x09E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x09E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x09EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StaticLightingResolution;                                 // 0x09F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ForcedLOD;                                                // 0x09F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LODBias;                                                  // 0x09F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       StateId;                                                  // 0x09FC(0x0010) (CPF_IsPlainOldData)
	struct FGuid                                       BakedTextureMaterialGuid;                                 // 0x0A0C(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A1C(0x0004) MISSED OFFSET
	class UTexture2D*                                  GIBakedBaseColorTexture;                                  // 0x0A20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      bRemoveGrass : 1;                                         // 0x0A28(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      MobileBlendableLayerMask;                                 // 0x0A29(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x0A2A(0x0006) MISSED OFFSET
	class UMaterialInterface*                          MobileMaterialInterface;                                  // 0x0A30(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  MobileWeightNormalmapTexture;                             // 0x0A38(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x20];                                      // 0x0A40(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActor
// 0x0000 (0x03E8 - 0x03E8)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}


	bool WasRecentlyRendered(float Tolerance);
	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName);
	void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	void SetTickableWhenPaused(bool bTickableWhenPaused);
	void SetReplicates(bool bInReplicates);
	void SetReplicateMovement(bool bInReplicateMovement);
	void SetOwner(class AActor* NewOwner);
	void SetLifeSpan(float InLifespan);
	void SetActorTickInterval(float TickInterval);
	void SetActorTickEnabled(bool bEnabled);
	void SetActorScale3D(const struct FVector& NewScale3D);
	void SetActorRelativeScale3D(const struct FVector& NewRelativeScale);
	void SetActorHiddenInGame(bool bNewHidden);
	void SetActorEnableCollision(bool bNewActorEnableCollision);
	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveActorOnReleased(const struct FKey& ButtonReleased);
	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnClicked(const struct FKey& ButtonPressed);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorBeginCursorOver();
	void OnRep_Role();
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Owner();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag);
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface* Parent);
	bool K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	bool K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics);
	void K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_OnReset();
	void K2_OnEndViewTarget(class APlayerController* PC);
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	class USceneComponent* K2_GetRootComponent();
	struct FRotator K2_GetActorRotation();
	struct FVector K2_GetActorLocation();
	void K2_DetachFromActor();
	void K2_DestroyComponent(class UActorComponent* Component);
	void K2_DestroyActor();
	void K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, bool bWeldSimulatedBodies);
	void K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, bool bWeldSimulatedBodies);
	void K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool IsOverlappingActor(class AActor* Other);
	bool IsChildActor();
	bool IsActorTickEnabled();
	bool IsActorBeingDestroyed();
	bool HasAuthority();
	float GetVerticalDistanceTo(class AActor* OtherActor);
	struct FVector GetVelocity();
	struct FTransform GetTransform();
	bool GetTickableWhenPaused();
	float GetSquaredDistanceTo(class AActor* OtherActor);
	TEnumAsByte<ENetRole> GetRemoteRole();
	class UChildActorComponent* GetParentComponent();
	class AActor* GetParentActor();
	class AActor* GetOwner();
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	float GetLifeSpan();
	class AController* GetInstigatorController();
	class APawn* GetInstigator();
	struct FVector GetInputVectorAxisValue(const struct FKey& InputAxisKey);
	float GetInputAxisValue(const struct FName& InputAxisName);
	float GetInputAxisKeyValue(const struct FKey& InputAxisKey);
	float GetHorizontalDotProductTo(class AActor* OtherActor);
	float GetHorizontalDistanceTo(class AActor* OtherActor);
	float GetGameTimeSinceCreation();
	float GetDotProductTo(class AActor* OtherActor);
	float GetDistanceTo(class AActor* OtherActor);
	TArray<class UActorComponent*> GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag);
	TArray<class UActorComponent*> GetComponentsByClass(class UClass* ComponentClass);
	class UActorComponent* GetComponentByClass(class UClass* ComponentClass);
	struct FName GetAttachParentSocketName();
	class AActor* GetAttachParentActor();
	void GetAttachedActors(TArray<class AActor*>* OutActors);
	void GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors);
	struct FVector GetActorUpVector();
	float GetActorTimeDilation();
	float GetActorTickInterval();
	struct FVector GetActorScale3D();
	struct FVector GetActorRightVector();
	struct FVector GetActorRelativeScale3D();
	struct FVector GetActorForwardVector();
	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool GetActorEnableCollision();
	void GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput(class APlayerController* PlayerController);
	void DisableInput(class APlayerController* PlayerController);
	void DetachRootComponentFromParent(bool bMaintainWorldPosition);
	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	class UActorComponent* AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext);
	bool ActorHasTag(const struct FName& Tag);
};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0050 (0x0438 - 0x03E8)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}


	bool WasRecentlyRendered(float Tolerance);
	void UserConstructionScript();
	void TearOff();
	void SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName);
	void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	void SetTickableWhenPaused(bool bTickableWhenPaused);
	void SetReplicates(bool bInReplicates);
	void SetReplicateMovement(bool bInReplicateMovement);
	void SetOwner(class AActor* NewOwner);
	void SetLifeSpan(float InLifespan);
	void SetActorTickInterval(float TickInterval);
	void SetActorTickEnabled(bool bEnabled);
	void SetActorScale3D(const struct FVector& NewScale3D);
	void SetActorRelativeScale3D(const struct FVector& NewRelativeScale);
	void SetActorHiddenInGame(bool bNewHidden);
	void SetActorEnableCollision(bool bNewActorEnableCollision);
	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void ReceiveActorOnReleased(const struct FKey& ButtonReleased);
	void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex);
	void ReceiveActorOnClicked(const struct FKey& ButtonPressed);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ReceiveActorEndCursorOver();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorBeginCursorOver();
	void OnRep_Role();
	void OnRep_ReplicateMovement();
	void OnRep_ReplicatedMovement();
	void OnRep_Owner();
	void OnRep_Instigator();
	void OnRep_AttachmentReplication();
	void MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag);
	class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface* Parent);
	bool K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	bool K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics);
	void K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_OnReset();
	void K2_OnEndViewTarget(class APlayerController* PC);
	void K2_OnBecomeViewTarget(class APlayerController* PC);
	class USceneComponent* K2_GetRootComponent();
	struct FRotator K2_GetActorRotation();
	struct FVector K2_GetActorLocation();
	void K2_DetachFromActor();
	void K2_DestroyComponent(class UActorComponent* Component);
	void K2_DestroyActor();
	void K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, bool bWeldSimulatedBodies);
	void K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, bool bWeldSimulatedBodies);
	void K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	void K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	void K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	bool IsOverlappingActor(class AActor* Other);
	bool IsChildActor();
	bool IsActorTickEnabled();
	bool IsActorBeingDestroyed();
	bool HasAuthority();
	float GetVerticalDistanceTo(class AActor* OtherActor);
	struct FVector GetVelocity();
	struct FTransform GetTransform();
	bool GetTickableWhenPaused();
	float GetSquaredDistanceTo(class AActor* OtherActor);
	TEnumAsByte<ENetRole> GetRemoteRole();
	class UChildActorComponent* GetParentComponent();
	class AActor* GetParentActor();
	class AActor* GetOwner();
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	void GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	float GetLifeSpan();
	class AController* GetInstigatorController();
	class APawn* GetInstigator();
	struct FVector GetInputVectorAxisValue(const struct FKey& InputAxisKey);
	float GetInputAxisValue(const struct FName& InputAxisName);
	float GetInputAxisKeyValue(const struct FKey& InputAxisKey);
	float GetHorizontalDotProductTo(class AActor* OtherActor);
	float GetHorizontalDistanceTo(class AActor* OtherActor);
	float GetGameTimeSinceCreation();
	float GetDotProductTo(class AActor* OtherActor);
	float GetDistanceTo(class AActor* OtherActor);
	TArray<class UActorComponent*> GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag);
	TArray<class UActorComponent*> GetComponentsByClass(class UClass* ComponentClass);
	class UActorComponent* GetComponentByClass(class UClass* ComponentClass);
	struct FName GetAttachParentSocketName();
	class AActor* GetAttachParentActor();
	void GetAttachedActors(TArray<class AActor*>* OutActors);
	void GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors);
	struct FVector GetActorUpVector();
	float GetActorTimeDilation();
	float GetActorTickInterval();
	struct FVector GetActorScale3D();
	struct FVector GetActorRightVector();
	struct FVector GetActorRelativeScale3D();
	struct FVector GetActorForwardVector();
	void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	bool GetActorEnableCollision();
	void GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	void ForceNetUpdate();
	void FlushNetDormancy();
	void EnableInput(class APlayerController* PlayerController);
	void DisableInput(class APlayerController* PlayerController);
	void DetachRootComponentFromParent(bool bMaintainWorldPosition);
	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	class UActorComponent* AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext);
	bool ActorHasTag(const struct FName& Tag);
};


// Class Landscape.LandscapeGizmoRenderComponent
// 0x0000 (0x08F0 - 0x08F0)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}


	void WakeRigidBody(const struct FName& BoneName);
	void WakeAllRigidBodies();
	void SetWalkableSlopeOverride(const struct FWalkableSlopeOverride& NewOverride);
	void SetUseCCD(bool InUseCCD, const struct FName& BoneName);
	void SetTranslucentSortPriority(int NewTranslucentSortPriority);
	void SetSimulatePhysics(bool bSimulate);
	void SetRenderInMono(bool bValue);
	void SetRenderInMainPass(bool bValue);
	void SetRenderCustomDepth(bool bValue);
	void SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial);
	void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void SetPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent, const struct FName& BoneName);
	void SetPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName);
	void SetOwnerNoSee(bool bNewOwnerNoSee);
	void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
	void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
	void SetMaterialByName(const struct FName& MaterialSlotName, class UMaterialInterface* Material);
	void SetMaterial(int ElementIndex, class UMaterialInterface* Material);
	void SetMassScale(const struct FName& BoneName, float InMassScale);
	void SetMassOverrideInKg(const struct FName& BoneName, float MassInKg, bool bOverrideMass);
	void SetLockedAxis(TEnumAsByte<EDOFMode> LockedAxis);
	void SetLinearDamping(float InDamping);
	void SetEnableGravity(bool bGravityEnabled);
	void SetCustomDepthStencilWriteMask();
	void SetCustomDepthStencilValue(int Value);
	void SetCullDistance(float NewCullDistance);
	void SetConstraintMode(TEnumAsByte<EDOFMode> ConstraintMode);
	void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
	void SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);
	void SetCollisionProfileName(const struct FName& InCollisionProfileName);
	void SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);
	void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType);
	void SetCenterOfMass(const struct FVector& CenterOfMassOffset, const struct FName& BoneName);
	void SetCastShadow(bool NewCastShadow);
	void SetBoundsScale(float NewBoundsScale);
	void SetAngularDamping(float InDamping);
	void SetAllUseCCD(bool InUseCCD);
	void SetAllPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent);
	void SetAllPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent);
	void SetAllMassScale(float InMassScale);
	struct FVector ScaleByMomentOfInertia(const struct FVector& InputVector, const struct FName& BoneName);
	void PutRigidBodyToSleep(const struct FName& BoneName);
	bool K2_LineTraceComponent(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool bTraceComplex, bool bShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);
	bool K2_IsQueryCollisionEnabled();
	bool K2_IsPhysicsCollisionEnabled();
	bool K2_IsCollisionEnabled();
	bool IsOverlappingComponent(class UPrimitiveComponent* OtherComp);
	bool IsOverlappingActor(class AActor* Other);
	bool IsGravityEnabled();
	bool IsAnyRigidBodyAwake();
	void IgnoreComponentWhenMoving(class UPrimitiveComponent* Component, bool bShouldIgnore);
	void IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore);
	struct FWalkableSlopeOverride GetWalkableSlopeOverride();
	struct FVector GetPhysicsLinearVelocityAtPoint(const struct FVector& Point, const struct FName& BoneName);
	struct FVector GetPhysicsLinearVelocity(const struct FName& BoneName);
	struct FVector GetPhysicsAngularVelocity(const struct FName& BoneName);
	void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* InOverlappingComponents);
	void GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	TArray<struct FOverlapInfo> GetOverlapInfos();
	int GetNumMaterials();
	class UMaterialInterface* GetMaterialFromCollisionFaceIndex(int FaceIndex);
	class UMaterialInterface* GetMaterial(int ElementIndex);
	float GetMassScale(const struct FName& BoneName);
	float GetMass();
	float GetLinearDamping();
	struct FVector GetInertiaTensor(const struct FName& BoneName);
	TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel);
	struct FName GetCollisionProfileName();
	TEnumAsByte<ECollisionChannel> GetCollisionObjectType();
	TEnumAsByte<ECollisionEnabled> GetCollisionEnabled();
	float GetClosestPointOnCollision(const struct FVector& Point, const struct FName& BoneName, struct FVector* OutPointOnBody);
	struct FVector GetCenterOfMass(const struct FName& BoneName);
	float GetAngularDamping();
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int ElementIndex, class UMaterialInterface* SourceMaterial);
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int ElementIndex, class UMaterialInterface* Parent);
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int ElementIndex);
	TArray<class UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();
	TArray<class AActor*> CopyArrayOfMoveIgnoreActors();
	void ClearMoveIgnoreComponents();
	void ClearMoveIgnoreActors();
	bool CanCharacterStepUp(class APawn* Pawn);
	void AddTorque(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange);
	void AddRadialImpulse(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);
	void AddRadialForce(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange);
	void AddImpulseAtLocation(const struct FVector& Impulse, const struct FVector& Location, const struct FName& BoneName);
	void AddImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
	void AddForceAtLocationLocal(const struct FVector& force, const struct FVector& Location, const struct FName& BoneName);
	void AddForceAtLocation(const struct FVector& force, const struct FVector& Location, const struct FName& BoneName);
	void AddForce(const struct FVector& force, const struct FName& BoneName, bool bAccelChange);
	void AddAngularImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
};


// Class Landscape.LandscapeGrassType
// 0x0038 (0x0060 - 0x0028)
class ULandscapeGrassType : public UObject
{
public:
	TArray<struct FGrassVariety>                       GrassVarieties;                                           // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UStaticMesh*                                 GrassMesh;                                                // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              GrassDensity;                                             // 0x0040(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	float                                              PlacementJitter;                                          // 0x0044(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                StartCullDistance;                                        // 0x0048(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	int                                                EndCullDistance;                                          // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      RandomRotation : 1;                                       // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      AlignToSurface : 1;                                       // 0x0051(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x00E0 (0x09D0 - 0x08F0)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08F0(0x0008) MISSED OFFSET
	int                                                SectionBaseX;                                             // 0x08F8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SectionBaseY;                                             // 0x08FC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CollisionSizeQuads;                                       // 0x0900(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionScale;                                           // 0x0904(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SimpleCollisionSizeQuads;                                 // 0x0908(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x090C(0x0004) MISSED OFFSET
	TArray<unsigned char>                              CollisionQuadFlags;                                       // 0x0910(0x0010) (CPF_ZeroConstructor)
	struct FGuid                                       HeightfieldGuid;                                          // 0x0920(0x0010) (CPF_IsPlainOldData)
	struct FBox                                        CachedLocalBox;                                           // 0x0930(0x001C) (CPF_IsPlainOldData)
	TLazyObjectPtr<class ULandscapeComponent>          RenderComponent;                                          // 0x094C(0x0020) (CPF_ExportObject, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0968(0x0010) MISSED OFFSET
	TArray<class UPhysicalMaterial*>                   CookedPhysicalMaterials;                                  // 0x0978(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData03[0x48];                                      // 0x0988(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x0010 (0x09E0 - 0x09D0)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x09D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeInfo
// 0x01D8 (0x0200 - 0x0028)
class ULandscapeInfo : public UObject
{
public:
	TLazyObjectPtr<class ALandscape>                   LandscapeActor;                                           // 0x0028(0x0020) (CPF_IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x0044(0x0010) (CPF_IsPlainOldData)
	int                                                ComponentSizeQuads;                                       // 0x0054(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0058(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ComponentNumSubsections;                                  // 0x005C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     DrawScale;                                                // 0x0060(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x54];                                      // 0x006C(0x0054) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x006C(0x0050) UNKNOWN PROPERTY: SetProperty Landscape.LandscapeInfo.Proxies
	unsigned char                                      UnknownData02[0xF0];                                      // 0x0110(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0050 (0x0078 - 0x0028)
class ULandscapeInfoMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x0028 (0x0050 - 0x0028)
class ULandscapeLayerInfoObject : public UObject
{
public:
	struct FName                                       LayerName;                                                // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           PhysMaterial;                                             // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Hardness;                                                 // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                LayerUsageDebugColor;                                     // 0x003C(0x0010) (CPF_Edit, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0x0008 (0x01B8 - 0x01B0)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:
	unsigned char                                      bIsLayerThumbnail : 1;                                    // 0x01B0(0x0001)
	unsigned char                                      bDisableTessellation : 1;                                 // 0x01B0(0x0001)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x0008 (0x03F0 - 0x03E8)
class ALandscapeMeshProxyActor : public AActor
{
public:
	class ULandscapeMeshProxyComponent*                LandscapeMeshProxyComponent;                              // 0x03E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x0030 (0x0AB0 - 0x0A80)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	struct FGuid                                       LandscapeGuid;                                            // 0x0A80(0x0010) (CPF_IsPlainOldData)
	TArray<struct FIntPoint>                           ProxyComponentBases;                                      // 0x0A90(0x0010) (CPF_ZeroConstructor)
	int8_t                                             ProxyLOD;                                                 // 0x0AA0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0AA1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeProxy
// 0x0468 (0x0850 - 0x03E8)
class ALandscapeProxy : public AActor
{
public:
	class ULandscapeSplinesComponent*                  SplineComponent;                                          // 0x03E8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGuid                                       LandscapeGuid;                                            // 0x03F0(0x0010) (CPF_IsPlainOldData)
	struct FIntPoint                                   LandscapeSectionOffset;                                   // 0x0400(0x0008) (CPF_IsPlainOldData)
	int                                                MaxLODLevel;                                              // 0x0408(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LODDistanceFactor;                                        // 0x040C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELandscapeLODFalloff>                  LODFalloff;                                               // 0x0410(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	int                                                StaticLightingLOD;                                        // 0x0414(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPhysicalMaterial*                           DefaultPhysMaterial;                                      // 0x0418(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StreamingDistanceMultiplier;                              // 0x0420(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0424(0x0004) MISSED OFFSET
	class UMaterialInterface*                          LandscapeMaterial;                                        // 0x0428(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInterface*                          LandscapeHoleMaterial;                                    // 0x0430(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NegativeZBoundsExtension;                                 // 0x0438(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PositiveZBoundsExtension;                                 // 0x043C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ULandscapeComponent*>                 LandscapeComponents;                                      // 0x0440(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                      // 0x0450(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                        // 0x0460(0x0010) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData02[0x60];                                      // 0x0470(0x0060) MISSED OFFSET
	unsigned char                                      bHasLandscapeGrass : 1;                                   // 0x04D0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	float                                              StaticLightingResolution;                                 // 0x04D4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x04D8(0x0001) (CPF_Edit)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x04D8(0x0001) (CPF_Edit)
	unsigned char                                      bCastFarShadow : 1;                                       // 0x04D8(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	struct FLightingChannels                           LightingChannels;                                         // 0x04DC(0x0003) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData05[0x1];                                       // 0x04DF(0x0001) MISSED OFFSET
	unsigned char                                      bUseMaterialPositionOffsetInStaticLighting : 1;           // 0x04E0(0x0001) (CPF_Edit)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x04E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04E1(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x04E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLightmassPrimitiveSettings                 LightmassSettings;                                        // 0x04E8(0x0018) (CPF_Edit)
	int                                                CollisionMipLevel;                                        // 0x0500(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SimpleCollisionMipLevel;                                  // 0x0504(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionThickness;                                       // 0x0508(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0510(0x0240) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bGenerateOverlapEvents : 1;                               // 0x0750(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bBakeMaterialPositionOffsetIntoCollision : 1;             // 0x0750(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0751(0x0003) MISSED OFFSET
	int                                                ComponentSizeQuads;                                       // 0x0754(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SubsectionSizeQuads;                                      // 0x0758(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSubsections;                                           // 0x075C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUsedForNavigation : 1;                                   // 0x0760(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0761(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData10[0x1];                                       // 0x0761(0x0001) UNKNOWN PROPERTY: EnumProperty Landscape.LandscapeProxy.NavigationGeometryGatheringMode
	unsigned char                                      bUseLandscapeForCullingInvisibleHLODVertices : 1;         // 0x0765(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData11[0xEA];                                      // 0x0766(0x00EA) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}


	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
};


// Class Landscape.Landscape
// 0x0000 (0x0850 - 0x0850)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}


	void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	void ChangeLODDistanceFactor(float InLODDistanceFactor);
};


// Class Landscape.LandscapeStreamingProxy
// 0x0020 (0x0870 - 0x0850)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0850(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x0030 (0x0920 - 0x08F0)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x08F0(0x0008) MISSED OFFSET
	TArray<class ULandscapeSplineSegment*>             Segments;                                                 // 0x08F8(0x0010) (CPF_ZeroConstructor)
	TArray<class UMeshComponent*>                      CookedForeignMeshComponents;                              // 0x0908(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0918(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x0088 (0x00B0 - 0x0028)
class ULandscapeSplineSegment : public UObject
{
public:
	struct FLandscapeSplineSegmentConnection           Connections[0x2];                                         // 0x0028(0x0018) (CPF_Edit, CPF_EditFixedSize)
	struct FInterpCurveVector                          SplineInfo;                                               // 0x0058(0x0018)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0070(0x0010) (CPF_ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0080(0x001C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<class USplineMeshComponent*>                LocalMeshComponents;                                      // 0x00A0(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}

};


// Class Landscape.LandscapeSplineControlPoint
// 0x0070 (0x0098 - 0x0028)
class ULandscapeSplineControlPoint : public UObject
{
public:
	struct FVector                                     Location;                                                 // 0x0028(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0034(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              Width;                                                    // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SideFalloff;                                              // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EndFalloff;                                               // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	TArray<struct FLandscapeSplineConnection>          ConnectedSegments;                                        // 0x0050(0x0010) (CPF_ZeroConstructor)
	TArray<struct FLandscapeSplineInterpPoint>         Points;                                                   // 0x0060(0x0010) (CPF_ZeroConstructor)
	struct FBox                                        Bounds;                                                   // 0x0070(0x001C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	class UControlPointMeshComponent*                  LocalMeshComponent;                                       // 0x0090(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	TArray<struct FGrassInput>                         GrassTypes;                                               // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:
	TArray<struct FLayerBlendInput>                    Layers;                                                   // 0x0060(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGuid                                       ExpressionGUID;                                           // 0x0070(0x0010) (CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0x0018 (0x0078 - 0x0060)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:
	TEnumAsByte<ETerrainCoordMappingType>              MappingType;                                              // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ELandscapeCustomizedCoordType>         CustomUVType;                                             // 0x0061(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0062(0x0002) MISSED OFFSET
	float                                              MappingScale;                                             // 0x0064(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MappingRotation;                                          // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MappingPanU;                                              // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MappingPanV;                                              // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0x0020 (0x0080 - 0x0060)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:
	struct FName                                       ParameterName;                                            // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x006C(0x0010) (CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0x0090 (0x00F0 - 0x0060)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:
	struct FExpressionInput                            LayerUsed;                                                // 0x0060(0x0038)
	struct FExpressionInput                            LayerNotUsed;                                             // 0x0098(0x0038)
	struct FName                                       ParameterName;                                            // 0x00D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      PreviewUsed : 1;                                          // 0x00D8(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	struct FGuid                                       ExpressionGUID;                                           // 0x00DC(0x0010) (CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x0098 (0x00F8 - 0x0060)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	struct FExpressionInput                            Base;                                                     // 0x0060(0x0038)
	struct FExpressionInput                            Layer;                                                    // 0x0098(0x0038)
	struct FName                                       ParameterName;                                            // 0x00D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PreviewWeight;                                            // 0x00D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     ConstBase;                                                // 0x00DC(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FGuid                                       ExpressionGUID;                                           // 0x00E8(0x0010) (CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x0010 (0x0070 - 0x0060)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	struct FGuid                                       ExpressionGUID;                                           // 0x0060(0x0010) (CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
