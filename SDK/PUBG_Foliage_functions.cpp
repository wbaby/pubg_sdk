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

// Function Engine.Actor.WasRecentlyRendered
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Tolerance                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::WasRecentlyRendered(float Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.WasRecentlyRendered");

	AInstancedFoliageActor_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UserConstructionScript
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UserConstructionScript");

	AInstancedFoliageActor_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::TearOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TearOff");

	AInstancedFoliageActor_TearOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SnapRootComponentTo
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  InParentActor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   InSocketName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SnapRootComponentTo");

	AInstancedFoliageActor_SnapRootComponentTo_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickGroup
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETickingGroup>     NewTickGroup                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickGroup");

	AInstancedFoliageActor_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickableWhenPaused
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bTickableWhenPaused            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::SetTickableWhenPaused(bool bTickableWhenPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickableWhenPaused");

	AInstancedFoliageActor_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicates
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bInReplicates                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::SetReplicates(bool bInReplicates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicates");

	AInstancedFoliageActor_SetReplicates_Params params;
	params.bInReplicates = bInReplicates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicateMovement
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bInReplicateMovement           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::SetReplicateMovement(bool bInReplicateMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicateMovement");

	AInstancedFoliageActor_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetOwner
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  NewOwner                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::SetOwner(class AActor* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetOwner");

	AInstancedFoliageActor_SetOwner_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetLifeSpan
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InLifespan                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::SetLifeSpan(float InLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetLifeSpan");

	AInstancedFoliageActor_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickInterval
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          TickInterval                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::SetActorTickInterval(float TickInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickInterval");

	AInstancedFoliageActor_SetActorTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickEnabled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bEnabled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::SetActorTickEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickEnabled");

	AInstancedFoliageActor_SetActorTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorScale3D
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewScale3D                     (CPF_Parm, CPF_IsPlainOldData)

void AInstancedFoliageActor::SetActorScale3D(const struct FVector& NewScale3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorScale3D");

	AInstancedFoliageActor_SetActorScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorRelativeScale3D
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewRelativeScale               (CPF_Parm, CPF_IsPlainOldData)

void AInstancedFoliageActor::SetActorRelativeScale3D(const struct FVector& NewRelativeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorRelativeScale3D");

	AInstancedFoliageActor_SetActorRelativeScale3D_Params params;
	params.NewRelativeScale = NewRelativeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorHiddenInGame
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bNewHidden                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::SetActorHiddenInGame(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorHiddenInGame");

	AInstancedFoliageActor_SetActorHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorEnableCollision
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bNewActorEnableCollision       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::SetActorEnableCollision(bool bNewActorEnableCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorEnableCollision");

	AInstancedFoliageActor_SetActorEnableCollision_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UActorComponent*         PrerequisiteComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AInstancedFoliageActor::RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteComponent");

	AInstancedFoliageActor_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  PrerequisiteActor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteActor");

	AInstancedFoliageActor_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveTick
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveTick");

	AInstancedFoliageActor_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveRadialDamage
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          DamageReceived                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult              HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class AController*             InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveRadialDamage");

	AInstancedFoliageActor_ReceiveRadialDamage_Params params;
	params.DamageReceived = DamageReceived;
	params.DamageType = DamageType;
	params.Origin = Origin;
	params.HitInfo = HitInfo;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceivePointDamage
// (FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitLocation                    (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 HitNormal                      (CPF_Parm, CPF_IsPlainOldData)
// class UPrimitiveComponent*     HitComponent                   (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ShotFromDirection              (CPF_Parm, CPF_IsPlainOldData)
// class AController*             InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              HitInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AInstancedFoliageActor::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceivePointDamage");

	AInstancedFoliageActor_ReceivePointDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.HitComponent = HitComponent;
	params.BoneName = BoneName;
	params.ShotFromDirection = ShotFromDirection;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveHit
// (FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UPrimitiveComponent*     MyComp                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  Other                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bSelfMoved                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitLocation                    (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 HitNormal                      (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 NormalImpulse                  (CPF_Parm, CPF_IsPlainOldData)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AInstancedFoliageActor::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveHit");

	AInstancedFoliageActor_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveEndPlay
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveEndPlay");

	AInstancedFoliageActor_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveDestroyed");

	AInstancedFoliageActor_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveBeginPlay");

	AInstancedFoliageActor_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveAnyDamage
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Damage                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UDamageType*             DamageType                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AController*             InstigatedBy                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class AActor*                  DamageCauser                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveAnyDamage");

	AInstancedFoliageActor_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnReleased
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FKey                    ButtonReleased                 (CPF_Parm)

void AInstancedFoliageActor::ReceiveActorOnReleased(const struct FKey& ButtonReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnReleased");

	AInstancedFoliageActor_ReceiveActorOnReleased_Params params;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchLeave
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchLeave");

	AInstancedFoliageActor_ReceiveActorOnInputTouchLeave_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnter
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnter");

	AInstancedFoliageActor_ReceiveActorOnInputTouchEnter_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnd
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnd");

	AInstancedFoliageActor_ReceiveActorOnInputTouchEnd_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchBegin
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchBegin");

	AInstancedFoliageActor_ReceiveActorOnInputTouchBegin_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnClicked
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FKey                    ButtonPressed                  (CPF_Parm)

void AInstancedFoliageActor::ReceiveActorOnClicked(const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnClicked");

	AInstancedFoliageActor_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndOverlap
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndOverlap");

	AInstancedFoliageActor_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndCursorOver");

	AInstancedFoliageActor_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginOverlap");

	AInstancedFoliageActor_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginCursorOver");

	AInstancedFoliageActor_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Role
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::OnRep_Role()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Role");

	AInstancedFoliageActor_OnRep_Role_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::OnRep_ReplicateMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicateMovement");

	AInstancedFoliageActor_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::OnRep_ReplicatedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicatedMovement");

	AInstancedFoliageActor_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::OnRep_Owner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Owner");

	AInstancedFoliageActor_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::OnRep_Instigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Instigator");

	AInstancedFoliageActor_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::OnRep_AttachmentReplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_AttachmentReplication");

	AInstancedFoliageActor_OnRep_AttachmentReplication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeNoise
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Loudness                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class APawn*                   NoiseInstigator                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 NoiseLocation                  (CPF_Parm, CPF_IsPlainOldData)
// float                          MaxRange                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Tag                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeNoise");

	AInstancedFoliageActor_MakeNoise_Params params;
	params.Loudness = Loudness;
	params.NoiseInstigator = NoiseInstigator;
	params.NoiseLocation = NoiseLocation;
	params.MaxRange = MaxRange;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.MakeMIDForMaterial
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UMaterialInterface*      Parent                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* AInstancedFoliageActor::MakeMIDForMaterial(class UMaterialInterface* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeMIDForMaterial");

	AInstancedFoliageActor_MakeMIDForMaterial_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_TeleportTo
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 DestLocation                   (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                DestRotation                   (CPF_Parm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_TeleportTo");

	AInstancedFoliageActor_K2_TeleportTo_Params params;
	params.DestLocation = DestLocation;
	params.DestRotation = DestRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorTransform
// (FUNC_RequiredAPI, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTransform              NewTransform                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           bSweep                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepHitResult                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorTransform");

	AInstancedFoliageActor_K2_SetActorTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRotation
// (FUNC_RequiredAPI, FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRotator                NewRotation                    (CPF_Parm, CPF_IsPlainOldData)
// bool                           bTeleportPhysics               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRotation");

	AInstancedFoliageActor_K2_SetActorRotation_Params params;
	params.NewRotation = NewRotation;
	params.bTeleportPhysics = bTeleportPhysics;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorRelativeTransform
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTransform              NewRelativeTransform           (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           bSweep                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepHitResult                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeTransform");

	AInstancedFoliageActor_K2_SetActorRelativeTransform_Params params;
	params.NewRelativeTransform = NewRelativeTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeRotation
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRotator                NewRelativeRotation            (CPF_Parm, CPF_IsPlainOldData)
// bool                           bSweep                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepHitResult                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeRotation");

	AInstancedFoliageActor_K2_SetActorRelativeRotation_Params params;
	params.NewRelativeRotation = NewRelativeRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorRelativeLocation
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewRelativeLocation            (CPF_Parm, CPF_IsPlainOldData)
// bool                           bSweep                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepHitResult                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeLocation");

	AInstancedFoliageActor_K2_SetActorRelativeLocation_Params params;
	params.NewRelativeLocation = NewRelativeLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_SetActorLocationAndRotation
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewLocation                    (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                NewRotation                    (CPF_Parm, CPF_IsPlainOldData)
// bool                           bSweep                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepHitResult                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocationAndRotation");

	AInstancedFoliageActor_K2_SetActorLocationAndRotation_Params params;
	params.NewLocation = NewLocation;
	params.NewRotation = NewRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_SetActorLocation
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewLocation                    (CPF_Parm, CPF_IsPlainOldData)
// bool                           bSweep                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepHitResult                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocation");

	AInstancedFoliageActor_K2_SetActorLocation_Params params;
	params.NewLocation = NewLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_OnReset
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnReset");

	AInstancedFoliageActor_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_OnEndViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnEndViewTarget");

	AInstancedFoliageActor_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnBecomeViewTarget
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnBecomeViewTarget");

	AInstancedFoliageActor_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_GetRootComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USceneComponent* AInstancedFoliageActor::K2_GetRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetRootComponent");

	AInstancedFoliageActor_K2_GetRootComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorRotation
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator AInstancedFoliageActor::K2_GetActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorRotation");

	AInstancedFoliageActor_K2_GetActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorLocation
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AInstancedFoliageActor::K2_GetActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorLocation");

	AInstancedFoliageActor_K2_GetActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_DetachFromActor
// (FUNC_Final, FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::K2_DetachFromActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DetachFromActor");

	AInstancedFoliageActor_K2_DetachFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UActorComponent*         Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_DestroyComponent(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyComponent");

	AInstancedFoliageActor_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::K2_DestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyActor");

	AInstancedFoliageActor_K2_DestroyActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToComponent
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USceneComponent*         Parent                         (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   SocketName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWeldSimulatedBodies           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToComponent");

	AInstancedFoliageActor_K2_AttachToComponent_Params params;
	params.Parent = Parent;
	params.SocketName = SocketName;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachToActor
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  ParentActor                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   SocketName                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWeldSimulatedBodies           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToActor");

	AInstancedFoliageActor_K2_AttachToActor_Params params;
	params.ParentActor = ParentActor;
	params.SocketName = SocketName;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentToActor
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  InParentActor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   InSocketName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EAttachLocation>   AttachLocationType             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWeldSimulatedBodies           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentToActor");

	AInstancedFoliageActor_K2_AttachRootComponentToActor_Params params;
	params.InParentActor = InParentActor;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AttachRootComponentTo
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USceneComponent*         InParent                       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// struct FName                   InSocketName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<EAttachLocation>   AttachLocationType             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bWeldSimulatedBodies           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentTo");

	AInstancedFoliageActor_K2_AttachRootComponentTo_Params params;
	params.InParent = InParent;
	params.InSocketName = InSocketName;
	params.AttachLocationType = AttachLocationType;
	params.bWeldSimulatedBodies = bWeldSimulatedBodies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_AddActorWorldTransform
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTransform              DeltaTransform                 (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           bSweep                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepHitResult                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldTransform");

	AInstancedFoliageActor_K2_AddActorWorldTransform_Params params;
	params.DeltaTransform = DeltaTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldRotation
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRotator                DeltaRotation                  (CPF_Parm, CPF_IsPlainOldData)
// bool                           bSweep                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepHitResult                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldRotation");

	AInstancedFoliageActor_K2_AddActorWorldRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorWorldOffset
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 DeltaLocation                  (CPF_Parm, CPF_IsPlainOldData)
// bool                           bSweep                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepHitResult                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldOffset");

	AInstancedFoliageActor_K2_AddActorWorldOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalTransform
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTransform              NewTransform                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           bSweep                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepHitResult                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalTransform");

	AInstancedFoliageActor_K2_AddActorLocalTransform_Params params;
	params.NewTransform = NewTransform;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalRotation
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRotator                DeltaRotation                  (CPF_Parm, CPF_IsPlainOldData)
// bool                           bSweep                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepHitResult                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalRotation");

	AInstancedFoliageActor_K2_AddActorLocalRotation_Params params;
	params.DeltaRotation = DeltaRotation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.K2_AddActorLocalOffset
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 DeltaLocation                  (CPF_Parm, CPF_IsPlainOldData)
// bool                           bSweep                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              SweepHitResult                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           bTeleport                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalOffset");

	AInstancedFoliageActor_K2_AddActorLocalOffset_Params params;
	params.DeltaLocation = DeltaLocation;
	params.bSweep = bSweep;
	params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepHitResult != nullptr)
		*SweepHitResult = params.SweepHitResult;
}


// Function Engine.Actor.IsOverlappingActor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Other                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::IsOverlappingActor(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsOverlappingActor");

	AInstancedFoliageActor_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsChildActor
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::IsChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsChildActor");

	AInstancedFoliageActor_IsChildActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorTickEnabled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::IsActorTickEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorTickEnabled");

	AInstancedFoliageActor_IsActorTickEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorBeingDestroyed
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::IsActorBeingDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorBeingDestroyed");

	AInstancedFoliageActor_IsActorBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.HasAuthority
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::HasAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HasAuthority");

	AInstancedFoliageActor_HasAuthority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVerticalDistanceTo
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInstancedFoliageActor::GetVerticalDistanceTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVerticalDistanceTo");

	AInstancedFoliageActor_GetVerticalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetVelocity
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AInstancedFoliageActor::GetVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVelocity");

	AInstancedFoliageActor_GetVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTransform
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform AInstancedFoliageActor::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTransform");

	AInstancedFoliageActor_GetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTickableWhenPaused
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::GetTickableWhenPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTickableWhenPaused");

	AInstancedFoliageActor_GetTickableWhenPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetSquaredDistanceTo
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInstancedFoliageActor::GetSquaredDistanceTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetSquaredDistanceTo");

	AInstancedFoliageActor_GetSquaredDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetRemoteRole
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ENetRole>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ENetRole> AInstancedFoliageActor::GetRemoteRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRemoteRole");

	AInstancedFoliageActor_GetRemoteRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UChildActorComponent*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UChildActorComponent* AInstancedFoliageActor::GetParentComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentComponent");

	AInstancedFoliageActor_GetParentComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* AInstancedFoliageActor::GetParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentActor");

	AInstancedFoliageActor_GetParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOwner
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* AInstancedFoliageActor::GetOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOwner");

	AInstancedFoliageActor_GetOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOverlappingComponents
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class UPrimitiveComponent*> OverlappingComponents          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void AInstancedFoliageActor::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingComponents");

	AInstancedFoliageActor_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingComponents != nullptr)
		*OverlappingComponents = params.OverlappingComponents;
}


// Function Engine.Actor.GetOverlappingActors
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class AActor*>          OverlappingActors              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// class UClass*                  ClassFilter                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingActors");

	AInstancedFoliageActor_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.Actor.GetLifeSpan
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInstancedFoliageActor::GetLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLifeSpan");

	AInstancedFoliageActor_GetLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigatorController
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AController*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AController* AInstancedFoliageActor::GetInstigatorController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigatorController");

	AInstancedFoliageActor_GetInstigatorController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigator
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APawn* AInstancedFoliageActor::GetInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigator");

	AInstancedFoliageActor_GetInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputVectorAxisValue
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FKey                    InputAxisKey                   (CPF_ConstParm, CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AInstancedFoliageActor::GetInputVectorAxisValue(const struct FKey& InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputVectorAxisValue");

	AInstancedFoliageActor_GetInputVectorAxisValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisValue
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   InputAxisName                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInstancedFoliageActor::GetInputAxisValue(const struct FName& InputAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisValue");

	AInstancedFoliageActor_GetInputAxisValue_Params params;
	params.InputAxisName = InputAxisName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInputAxisKeyValue
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FKey                    InputAxisKey                   (CPF_ConstParm, CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInstancedFoliageActor::GetInputAxisKeyValue(const struct FKey& InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisKeyValue");

	AInstancedFoliageActor_GetInputAxisKeyValue_Params params;
	params.InputAxisKey = InputAxisKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDotProductTo
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInstancedFoliageActor::GetHorizontalDotProductTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDotProductTo");

	AInstancedFoliageActor_GetHorizontalDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetHorizontalDistanceTo
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInstancedFoliageActor::GetHorizontalDistanceTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDistanceTo");

	AInstancedFoliageActor_GetHorizontalDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetGameTimeSinceCreation
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInstancedFoliageActor::GetGameTimeSinceCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetGameTimeSinceCreation");

	AInstancedFoliageActor_GetGameTimeSinceCreation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDotProductTo
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInstancedFoliageActor::GetDotProductTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDotProductTo");

	AInstancedFoliageActor_GetDotProductTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetDistanceTo
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInstancedFoliageActor::GetDistanceTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDistanceTo");

	AInstancedFoliageActor_GetDistanceTo_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByTag
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  ComponentClass                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   Tag                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UActorComponent*> AInstancedFoliageActor::GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByTag");

	AInstancedFoliageActor_GetComponentsByTag_Params params;
	params.ComponentClass = ComponentClass;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentsByClass
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  ComponentClass                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<class UActorComponent*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UActorComponent*> AInstancedFoliageActor::GetComponentsByClass(class UClass* ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByClass");

	AInstancedFoliageActor_GetComponentsByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetComponentByClass
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  ComponentClass                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UActorComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UActorComponent* AInstancedFoliageActor::GetComponentByClass(class UClass* ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentByClass");

	AInstancedFoliageActor_GetComponentByClass_Params params;
	params.ComponentClass = ComponentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentSocketName
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName AInstancedFoliageActor::GetAttachParentSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentSocketName");

	AInstancedFoliageActor_GetAttachParentSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* AInstancedFoliageActor::GetAttachParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentActor");

	AInstancedFoliageActor_GetAttachParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachedActors
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class AActor*>          OutActors                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void AInstancedFoliageActor::GetAttachedActors(TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachedActors");

	AInstancedFoliageActor_GetAttachedActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutActors != nullptr)
		*OutActors = params.OutActors;
}


// Function Engine.Actor.GetAllChildActors
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class AActor*>          ChildActors                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// bool                           bIncludeDescendants            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAllChildActors");

	AInstancedFoliageActor_GetAllChildActors_Params params;
	params.bIncludeDescendants = bIncludeDescendants;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildActors != nullptr)
		*ChildActors = params.ChildActors;
}


// Function Engine.Actor.GetActorUpVector
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AInstancedFoliageActor::GetActorUpVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorUpVector");

	AInstancedFoliageActor_GetActorUpVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTimeDilation
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInstancedFoliageActor::GetActorTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTimeDilation");

	AInstancedFoliageActor_GetActorTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTickInterval
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AInstancedFoliageActor::GetActorTickInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTickInterval");

	AInstancedFoliageActor_GetActorTickInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorScale3D
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AInstancedFoliageActor::GetActorScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorScale3D");

	AInstancedFoliageActor_GetActorScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRightVector
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AInstancedFoliageActor::GetActorRightVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRightVector");

	AInstancedFoliageActor_GetActorRightVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRelativeScale3D
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AInstancedFoliageActor::GetActorRelativeScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRelativeScale3D");

	AInstancedFoliageActor_GetActorRelativeScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorForwardVector
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AInstancedFoliageActor::GetActorForwardVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorForwardVector");

	AInstancedFoliageActor_GetActorForwardVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorEyesViewPoint
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 OutLocation                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FRotator                OutRotation                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void AInstancedFoliageActor::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEyesViewPoint");

	AInstancedFoliageActor_GetActorEyesViewPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (OutRotation != nullptr)
		*OutRotation = params.OutRotation;
}


// Function Engine.Actor.GetActorEnableCollision
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::GetActorEnableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEnableCollision");

	AInstancedFoliageActor_GetActorEnableCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorBounds
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bOnlyCollidingComponents       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 BoxExtent                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void AInstancedFoliageActor::GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorBounds");

	AInstancedFoliageActor_GetActorBounds_Params params;
	params.bOnlyCollidingComponents = bOnlyCollidingComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Origin != nullptr)
		*Origin = params.Origin;
	if (BoxExtent != nullptr)
		*BoxExtent = params.BoxExtent;
}


// Function Engine.Actor.ForceNetUpdate
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::ForceNetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ForceNetUpdate");

	AInstancedFoliageActor_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void AInstancedFoliageActor::FlushNetDormancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FlushNetDormancy");

	AInstancedFoliageActor_FlushNetDormancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EnableInput
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::EnableInput(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EnableInput");

	AInstancedFoliageActor_EnableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DisableInput
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::DisableInput(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DisableInput");

	AInstancedFoliageActor_DisableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DetachRootComponentFromParent
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bMaintainWorldPosition         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::DetachRootComponentFromParent(bool bMaintainWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DetachRootComponentFromParent");

	AInstancedFoliageActor_DetachRootComponentFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UActorComponent*         PrerequisiteComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void AInstancedFoliageActor::AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteComponent");

	AInstancedFoliageActor_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  PrerequisiteActor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AInstancedFoliageActor::AddTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteActor");

	AInstancedFoliageActor_AddTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddComponent
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   TemplateName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bManualAttachment              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FTransform              RelativeTransform              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// class UObject*                 ComponentTemplateContext       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UActorComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UActorComponent* AInstancedFoliageActor::AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddComponent");

	AInstancedFoliageActor_AddComponent_Params params;
	params.TemplateName = TemplateName;
	params.bManualAttachment = bManualAttachment;
	params.RelativeTransform = RelativeTransform;
	params.ComponentTemplateContext = ComponentTemplateContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.ActorHasTag
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   Tag                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AInstancedFoliageActor::ActorHasTag(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ActorHasTag");

	AInstancedFoliageActor_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Foliage.InteractiveFoliageActor.CapsuleTouched
// (FUNC_BlueprintCosmetic, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UPrimitiveComponent*     OverlappedComp                 (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class AActor*                  Other                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// int                            OtherBodyIndex                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bFromSweep                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              OverlapInfo                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AInteractiveFoliageActor::CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& OverlapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.InteractiveFoliageActor.CapsuleTouched");

	AInteractiveFoliageActor_CapsuleTouched_Params params;
	params.OverlappedComp = OverlappedComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.OverlapInfo = OverlapInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.SetStaticMesh
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UStaticMesh*             NewMesh                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UInteractiveFoliageComponent::SetStaticMesh(class UStaticMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.SetStaticMesh");

	UInteractiveFoliageComponent_SetStaticMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.StaticMeshComponent.SetForcedLodModel
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            NewForcedLodModel              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractiveFoliageComponent::SetForcedLodModel(int NewForcedLodModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.SetForcedLodModel");

	UInteractiveFoliageComponent_SetForcedLodModel_Params params;
	params.NewForcedLodModel = NewForcedLodModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.OnRep_StaticMesh
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UStaticMesh*             OldStaticMesh                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UInteractiveFoliageComponent::OnRep_StaticMesh(class UStaticMesh* OldStaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.OnRep_StaticMesh");

	UInteractiveFoliageComponent_OnRep_StaticMesh_Params params;
	params.OldStaticMesh = OldStaticMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.GetLocalBounds
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Min                            (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 Max                            (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)

void UInteractiveFoliageComponent::GetLocalBounds(struct FVector* Min, struct FVector* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.GetLocalBounds");

	UInteractiveFoliageComponent_GetLocalBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function Foliage.ProceduralFoliageSpawner.Simulate
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            NumSteps                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UProceduralFoliageSpawner::Simulate(int NumSteps)
{
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.ProceduralFoliageSpawner.Simulate");

	UProceduralFoliageSpawner_Simulate_Params params;
	params.NumSteps = NumSteps;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
