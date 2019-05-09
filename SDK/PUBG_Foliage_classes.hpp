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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x0020 (0x0CC0 - 0x0CA0)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0CA0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInstanceTakeRadialDamage;                               // 0x0CA8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0CB8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Foliage.FoliageStatistics
// 0x0000 (0x0028 - 0x0028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}

};


// Class Foliage.FoliageType
// 0x0428 (0x0450 - 0x0028)
class UFoliageType : public UObject
{
public:
	struct FGuid                                       UpdateGuid;                                               // 0x0028(0x0010) (CPF_IsPlainOldData)
	float                                              Density;                                                  // 0x0038(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DensityAdjustmentFactor;                                  // 0x003C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0044(0x0001) UNKNOWN PROPERTY: EnumProperty Foliage.FoliageType.Scaling
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FFloatInterval                              ScaleX;                                                   // 0x0048(0x0008) (CPF_Edit)
	struct FFloatInterval                              ScaleY;                                                   // 0x0050(0x0008) (CPF_Edit)
	struct FFloatInterval                              ScaleZ;                                                   // 0x0058(0x0008) (CPF_Edit)
	struct FFoliageVertexColorChannelMask              VertexColorMaskByChannel[0x4];                            // 0x0060(0x000C) (CPF_Edit)
	TEnumAsByte<EFoliageVertexColorMask>               VertexColorMask;                                          // 0x0090(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              VertexColorMaskThreshold;                                 // 0x0094(0x0004) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      VertexColorMaskInvert : 1;                                // 0x0098(0x0001) (CPF_Deprecated)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	struct FFloatInterval                              ZOffset;                                                  // 0x009C(0x0008) (CPF_Edit)
	unsigned char                                      AlignToNormal : 1;                                        // 0x00A4(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData04[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	float                                              AlignMaxAngle;                                            // 0x00A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      RandomYaw : 1;                                            // 0x00AC(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	float                                              RandomPitchAngle;                                         // 0x00B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              GroundSlopeAngle;                                         // 0x00B4(0x0008) (CPF_Edit)
	struct FFloatInterval                              Height;                                                   // 0x00BC(0x0008) (CPF_Edit)
	unsigned char                                      UnknownData06[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	TArray<struct FName>                               LandscapeLayers;                                          // 0x00C8(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FName                                       LandscapeLayer;                                           // 0x00D8(0x0008) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	unsigned char                                      CollisionWithWorld : 1;                                   // 0x00E0(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData07[0x3];                                       // 0x00E1(0x0003) MISSED OFFSET
	struct FVector                                     CollisionScale;                                           // 0x00E4(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              MinimumLayerWeight;                                       // 0x00F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FBoxSphereBounds                            MeshBounds;                                               // 0x00F4(0x001C) (CPF_IsPlainOldData)
	struct FVector                                     LowBoundOriginRadius;                                     // 0x0110(0x000C) (CPF_IsPlainOldData)
	TEnumAsByte<EComponentMobility>                    Mobility;                                                 // 0x011C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x011D(0x0003) MISSED OFFSET
	struct FInt32Interval                              CullDistance;                                             // 0x0120(0x0008) (CPF_Edit)
	unsigned char                                      bEnableStaticLighting : 1;                                // 0x0128(0x0001) (CPF_Deprecated)
	unsigned char                                      CastShadow : 1;                                           // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bAffectDynamicIndirectLighting : 1;                       // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bAffectDistanceFieldLighting : 1;                         // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bCastDynamicShadow : 1;                                   // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bCastStaticShadow : 1;                                    // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bCastShadowAsTwoSided : 1;                                // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bReceivesDecals : 1;                                      // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bReceivesDecalsEx : 1;                                    // 0x0129(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bOverrideLightMapRes : 1;                                 // 0x0129(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData09[0x2];                                       // 0x012A(0x0002) MISSED OFFSET
	int                                                OverriddenLightMapRes;                                    // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bUseAsOccluder : 1;                                       // 0x0130(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bTreatAsGrass : 1;                                        // 0x0130(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData10[0xF];                                       // 0x0131(0x000F) MISSED OFFSET
	struct FBodyInstance                               BodyInstance;                                             // 0x0140(0x0240) (CPF_Edit)
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                  // 0x0380(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLightingChannels                           LightingChannels;                                         // 0x0381(0x0003) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      bRenderCustomDepth : 1;                                   // 0x0384(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	int                                                CustomDepthStencilValue;                                  // 0x0388(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x038C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShadeRadius;                                              // 0x0390(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumSteps;                                                 // 0x0394(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialSeedDensity;                                       // 0x0398(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AverageSpreadDistance;                                    // 0x039C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpreadVariance;                                           // 0x03A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SeedsPerStep;                                             // 0x03A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                DistributionSeed;                                         // 0x03A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxInitialSeedOffset;                                     // 0x03AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCanGrowInShade : 1;                                      // 0x03B0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bSpawnsInShade : 1;                                       // 0x03B1(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x03B2(0x0002) MISSED OFFSET
	float                                              MaxInitialAge;                                            // 0x03B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxAge;                                                   // 0x03B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              OverlapPriority;                                          // 0x03BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFloatInterval                              ProceduralScale;                                          // 0x03C0(0x0008) (CPF_Edit)
	struct FRuntimeFloatCurve                          ScaleCurve;                                               // 0x03C8(0x0078) (CPF_Edit)
	int                                                ChangeCount;                                              // 0x0440(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ReapplyDensity : 1;                                       // 0x0444(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyRadius : 1;                                        // 0x0444(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyAlignToNormal : 1;                                 // 0x0444(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyRandomYaw : 1;                                     // 0x0444(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyScaling : 1;                                       // 0x0444(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyScaleX : 1;                                        // 0x0444(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyScaleY : 1;                                        // 0x0444(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyScaleZ : 1;                                        // 0x0444(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyRandomPitchAngle : 1;                              // 0x0445(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyGroundSlope : 1;                                   // 0x0445(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyHeight : 1;                                        // 0x0445(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyLandscapeLayers : 1;                               // 0x0445(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyZOffset : 1;                                       // 0x0445(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyCollisionWithWorld : 1;                            // 0x0445(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      ReapplyVertexColorMask : 1;                               // 0x0445(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	unsigned char                                      bEnableDensityScaling : 1;                                // 0x0445(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData13[0xA];                                       // 0x0446(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}

};


// Class Foliage.FoliageType_InstancedStaticMesh
// 0x0020 (0x0470 - 0x0450)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x0450(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	class UClass*                                      ComponentClass;                                           // 0x0460(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}

};


// Class Foliage.InstancedFoliageActor
// 0x0050 (0x0438 - 0x03E8)
class AInstancedFoliageActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03E8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
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


// Class Foliage.InteractiveFoliageActor
// 0x0060 (0x0458 - 0x03F8)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	class UCapsuleComponent*                           CapsuleComponent;                                         // 0x03F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FVector                                     TouchingActorEntryPosition;                               // 0x0400(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     FoliageVelocity;                                          // 0x040C(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     FoliageForce;                                             // 0x0418(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     FoliagePosition;                                          // 0x0424(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	float                                              FoliageDamageImpulseScale;                                // 0x0430(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoliageTouchImpulseScale;                                 // 0x0434(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoliageStiffness;                                         // 0x0438(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoliageStiffnessQuadratic;                                // 0x043C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FoliageDamping;                                           // 0x0440(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxDamageImpulse;                                         // 0x0444(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxTouchImpulse;                                          // 0x0448(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxForce;                                                 // 0x044C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Mass;                                                     // 0x0450(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}


	void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo);
};


// Class Foliage.InteractiveFoliageComponent
// 0x0010 (0x0A90 - 0x0A80)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0A80(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}


	bool SetStaticMesh(class UStaticMesh* NewMesh);
	void SetForcedLodModel(int NewForcedLodModel);
	void OnRep_StaticMesh(class UStaticMesh* OldStaticMesh);
	void GetLocalBounds(struct FVector* Min, struct FVector* Max);
};


// Class Foliage.ProceduralFoliageBlockingVolume
// 0x0008 (0x0428 - 0x0420)
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                  // 0x0420(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageComponent
// 0x0030 (0x0210 - 0x01E0)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x01E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileOverlap;                                              // 0x01E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	class AVolume*                                     SpawningVolume;                                           // 0x01F0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGuid                                       ProceduralGuid;                                           // 0x01F8(0x0010) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageSpawner
// 0x0048 (0x0070 - 0x0028)
class UProceduralFoliageSpawner : public UObject
{
public:
	int                                                RandomSeed;                                               // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TileSize;                                                 // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NumUniqueTiles;                                           // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinimumQuadTreeSize;                                      // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	TArray<struct FFoliageTypeObject>                  FoliageTypes;                                             // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      bNeedsSimulation : 1;                                     // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x0051(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}


	void Simulate(int NumSteps);
};


// Class Foliage.ProceduralFoliageTile
// 0x0130 (0x0158 - 0x0028)
class UProceduralFoliageTile : public UObject
{
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                           // 0x0028(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0030(0x00A0) MISSED OFFSET
	TArray<struct FProceduralFoliageInstance>          InstancesArray;                                           // 0x00D0(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x78];                                      // 0x00E0(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageVolume
// 0x0008 (0x0428 - 0x0420)
class AProceduralFoliageVolume : public AVolume
{
public:
	class UProceduralFoliageComponent*                 ProceduralComponent;                                      // 0x0420(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
