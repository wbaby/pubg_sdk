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

// Class CoherentUIGTPlugin.CoherentUIGTWidget
// 0x0368 (0x0490 - 0x0128)
class UCoherentUIGTWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0128(0x0018) MISSED OFFSET
	class AActor*                                      Owner;                                                    // 0x0140(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x0148(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x0158(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                               // 0x0168(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                 // 0x0178(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                             // 0x0188(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                               // 0x0198(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                          // 0x01A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                       // 0x01B8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x78];                                      // 0x01C8(0x0078) MISSED OFFSET
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x0248(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceiveInput : 1;                                        // 0x0249(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceiveInputWhenTransparent : 1;                         // 0x024A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bGammaCorrectedMaterial : 1;                              // 0x024B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AllowPerformanceWarnings : 1;                             // 0x024C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x024D(0x0003) MISSED OFFSET
	float                                              ExecuteJSTimersThresholdMs;                               // 0x0250(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                         // 0x0254(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;                       // 0x0258(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PaintWarningThresholdMs;                                  // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayersCountThreshold;                                     // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerWidthThreshold;                                      // 0x0264(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerHeightThreshold;                                     // 0x0268(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableAdditionalDefaultStyles : 1;                       // 0x026C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x20B];                                     // 0x026D(0x020B) MISSED OFFSET
	struct FString                                     URL;                                                      // 0x0478(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	float                                              ClickThroughAlphaThreshold;                               // 0x0488(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Transparent : 1;                                          // 0x048C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTWidget");
		return ptr;
	}


	void TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData);
	void ShowPaintRects(bool Show);
	void SetClickThroughAlphaThreshold(float threshold);
	void Reload();
	void Redraw();
	void Load(const struct FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	float GetClickThroughAlphaThreshold();
	class UCoherentUIGTJSEvent* CreateJSEvent();
};


// Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTAssetReferencer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTAssetReferencer");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTSystem
// 0x0040 (0x0428 - 0x03E8)
class ACoherentUIGTSystem : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x03E8(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTSystem");
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


// Class CoherentUIGTPlugin.CoherentUIGTJSEvent
// 0x0080 (0x00A8 - 0x0028)
class UCoherentUIGTJSEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTJSEvent");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTJSPayload
// 0x0018 (0x0040 - 0x0028)
class UCoherentUIGTJSPayload : public UObject
{
public:
	struct FString                                     EventName;                                                // 0x0028(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTJSPayload");
		return ptr;
	}


	void ReadObject(int Index, class UObject* Object);
	struct FString GetString(int Index);
	float GetNumber(int Index);
	int GetInt32(int Index);
	bool GetBool(int Index);
};


// Class CoherentUIGTPlugin.CoherentUIGTEventHelpers
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTEventHelpers : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTEventHelpers");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTBaseComponent
// 0x0310 (0x04F0 - 0x01E0)
class UCoherentUIGTBaseComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    ReadyForBindings;                                         // 0x01E0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    BindingsReleased;                                         // 0x01F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FinishLoad;                                               // 0x0200(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    FailLoad;                                                 // 0x0210(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartLoading;                                             // 0x0220(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    NavigateTo;                                               // 0x0230(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    JavaScriptEvent;                                          // 0x0240(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIGTScriptingReady;                                       // 0x0250(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptDelegate                             LiveViewSizeRequested;                                    // 0x0260(0x000E) (CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0260(0x0002) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x70];                                      // 0x0270(0x0070) MISSED OFFSET
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureFilter>                        Filter;                                                   // 0x02E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceiveInput : 1;                                        // 0x02E9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReceiveInputWhenTransparent : 1;                         // 0x02EA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      AllowPerformanceWarnings : 1;                             // 0x02EB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ExecuteJSTimersThresholdMs;                               // 0x02EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpdateStylesAndLayoutThresholdMs;                         // 0x02F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecordRenderingCommandsThresholdMs;                       // 0x02F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PaintWarningThresholdMs;                                  // 0x02F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayersCountThreshold;                                     // 0x02FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerWidthThreshold;                                      // 0x0300(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LayerHeightThreshold;                                     // 0x0304(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableAdditionalDefaultStyles : 1;                       // 0x0308(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bDelayedUpdate : 1;                                       // 0x0309(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x1E6];                                     // 0x030A(0x01E6) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTBaseComponent");
		return ptr;
	}


	void TriggerJSEvent(const struct FString& Name, class UCoherentUIGTJSEvent* EventData);
	void ShowPaintRects(bool Show);
	void SetClickThroughAlphaThreshold(float threshold);
	void Resize(int Width, int Height);
	void Reload();
	void Redraw();
	void Load(const struct FString& path);
	bool IsTransparent();
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool IsDocumentReady();
	bool HasRequestedView();
	float GetClickThroughAlphaThreshold();
	void EnableDelayedUpdate(bool bEnabled);
	class UCoherentUIGTJSEvent* CreateJSEvent();
};


// Class CoherentUIGTPlugin.CoherentUIGTComponent
// 0x0030 (0x0520 - 0x04F0)
class UCoherentUIGTComponent : public UCoherentUIGTBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET
	int                                                Width;                                                    // 0x04F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Height;                                                   // 0x04FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      ManualTexture : 1;                                        // 0x0500(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0501(0x0003) MISSED OFFSET
	float                                              ClickThroughAlphaThreshold;                               // 0x0504(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Transparent : 1;                                          // 0x0508(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x17];                                      // 0x0509(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTComponent");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTHUD
// 0x0020 (0x0510 - 0x04F0)
class UCoherentUIGTHUD : public UCoherentUIGTBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04F0(0x0008) MISSED OFFSET
	class UMaterial*                                   HUDMaterial;                                              // 0x04F8(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    HUDMaterialInstance;                                      // 0x0500(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0508(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTHUD");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCoherentUIGTBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTBlueprintFunctionLibrary");
		return ptr;
	}

};


// Class CoherentUIGTPlugin.CoherentUIGTGameHUD
// 0x0088 (0x0558 - 0x04D0)
class ACoherentUIGTGameHUD : public AHUD
{
public:
	class UCoherentUIGTHUD*                            CoherentUIGTHUD;                                          // 0x04D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x80];                                      // 0x04D8(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTGameHUD");
		return ptr;
	}


	void SetupUIGTView(const struct FString& PageUrl, bool bIsTransparent, float ClickThroughAlphaThreshold, float AnimationFrameDefer, bool bDelayedUpdate);
};


// Class CoherentUIGTPlugin.CoherentUIGTInputActor
// 0x0058 (0x0440 - 0x03E8)
class ACoherentUIGTInputActor : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorMouseButtonDown;                  // 0x03E8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorMouseButtonUp;                    // 0x03F8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorKeyDown;                          // 0x0408(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCoherentUIGTInputActorKeyUp;                            // 0x0418(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0428(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTInputActor");
		return ptr;
	}


	void ToggleCoherentUIGTInputFocus();
	void SetLineTraceMode(TEnumAsByte<EGTInputWidgetLineTraceMode> Mode);
	void SetInputPropagationBehaviour(TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> Propagation);
	void SetCoherentUIGTViewFocus(class UCoherentUIGTBaseComponent* NewFocusedView);
	void SetCoherentUIGTInputFocus(bool FocusUI);
	bool IsJoystickInputWhileUIGTIsFocusedAllowed_DEPRECATED();
	bool IsCoherentUIGTFocused();
	void Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<ETextureAddress> AddressMode, TEnumAsByte<EGTInputWidgetRaycastQuality> RaycastQuality, int UVChannel);
	TEnumAsByte<ECoherentUIGTInputPropagationBehaviour> GetInputPropagationBehaviour();
	void AlwaysAcceptMouseInput(bool bAccept);
	void AllowJoystickInputWhileUIGTIsFocused_DEPRECATED(bool bAllow);
};


// Class CoherentUIGTPlugin.CoherentUIGTLiveView
// 0x0030 (0x0210 - 0x01E0)
class UCoherentUIGTLiveView : public UActorComponent
{
public:
	struct FString                                     LinkName;                                                 // 0x01E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor)
	class UTextureRenderTarget2D*                      Texture;                                                  // 0x01F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x01F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTLiveView");
		return ptr;
	}


	void OnLiveViewSizeRequest(class UCoherentUIGTBaseComponent* baseComponent, const struct FString& Name, int* Width, int* Height);
};


// Class CoherentUIGTPlugin.CoherentUIGTSettings
// 0x0040 (0x0068 - 0x0028)
class UCoherentUIGTSettings : public UObject
{
public:
	unsigned char                                      EnableLiveReload : 1;                                     // 0x0028(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                InspectorPort;                                            // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                WebdriverPort;                                            // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      EnableWebSecurity : 1;                                    // 0x0034(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      EnableLocalization : 1;                                   // 0x0035(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      RunAsynchronous : 1;                                      // 0x0036(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      ShowCoherentUIGTMenu : 1;                                 // 0x0037(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bRecursivelyBindUStructs : 1;                             // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      AllowPerformanceWarningsInEditor : 1;                     // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      ShowWarningsOnScreen : 1;                                 // 0x003A(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x003B(0x0001) UNKNOWN PROPERTY: EnumProperty CoherentUIGTPlugin.CoherentUIGTSettings.LogSeverity
	unsigned char                                      bRespectTitleSafeZone : 1;                                // 0x003C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      bRespectLetterboxing : 1;                                 // 0x003D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	struct FString                                     HUDMaterialName;                                          // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	struct FString                                     CoUIResourcesRoot;                                        // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_Config)
	unsigned char                                      TickWhileGameIsPaused : 1;                                // 0x0060(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0061(0x0001) UNKNOWN PROPERTY: EnumProperty CoherentUIGTPlugin.CoherentUIGTSettings.MSAA

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoherentUIGTPlugin.CoherentUIGTSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
