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

// Function Engine.StaticMeshComponent.SetStaticMesh
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UStaticMesh*             NewMesh                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool UControlPointMeshComponent::SetStaticMesh(class UStaticMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.SetStaticMesh");

	UControlPointMeshComponent_SetStaticMesh_Params params;
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

void UControlPointMeshComponent::SetForcedLodModel(int NewForcedLodModel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.SetForcedLodModel");

	UControlPointMeshComponent_SetForcedLodModel_Params params;
	params.NewForcedLodModel = NewForcedLodModel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.StaticMeshComponent.OnRep_StaticMesh
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UStaticMesh*             OldStaticMesh                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void UControlPointMeshComponent::OnRep_StaticMesh(class UStaticMesh* OldStaticMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.OnRep_StaticMesh");

	UControlPointMeshComponent_OnRep_StaticMesh_Params params;
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

void UControlPointMeshComponent::GetLocalBounds(struct FVector* Min, struct FVector* Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.StaticMeshComponent.GetLocalBounds");

	UControlPointMeshComponent_GetLocalBounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Min != nullptr)
		*Min = params.Min;
	if (Max != nullptr)
		*Max = params.Max;
}


// Function Engine.Actor.WasRecentlyRendered
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Tolerance                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ALandscapeGizmoActor::WasRecentlyRendered(float Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.WasRecentlyRendered");

	ALandscapeGizmoActor_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UserConstructionScript
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UserConstructionScript");

	ALandscapeGizmoActor_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::TearOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TearOff");

	ALandscapeGizmoActor_TearOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SnapRootComponentTo
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  InParentActor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   InSocketName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SnapRootComponentTo");

	ALandscapeGizmoActor_SnapRootComponentTo_Params params;
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

void ALandscapeGizmoActor::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickGroup");

	ALandscapeGizmoActor_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickableWhenPaused
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bTickableWhenPaused            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::SetTickableWhenPaused(bool bTickableWhenPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickableWhenPaused");

	ALandscapeGizmoActor_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicates
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bInReplicates                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::SetReplicates(bool bInReplicates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicates");

	ALandscapeGizmoActor_SetReplicates_Params params;
	params.bInReplicates = bInReplicates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicateMovement
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bInReplicateMovement           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::SetReplicateMovement(bool bInReplicateMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicateMovement");

	ALandscapeGizmoActor_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetOwner
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  NewOwner                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::SetOwner(class AActor* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetOwner");

	ALandscapeGizmoActor_SetOwner_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetLifeSpan
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InLifespan                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::SetLifeSpan(float InLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetLifeSpan");

	ALandscapeGizmoActor_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickInterval
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          TickInterval                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::SetActorTickInterval(float TickInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickInterval");

	ALandscapeGizmoActor_SetActorTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickEnabled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bEnabled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::SetActorTickEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickEnabled");

	ALandscapeGizmoActor_SetActorTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorScale3D
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewScale3D                     (CPF_Parm, CPF_IsPlainOldData)

void ALandscapeGizmoActor::SetActorScale3D(const struct FVector& NewScale3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorScale3D");

	ALandscapeGizmoActor_SetActorScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorRelativeScale3D
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewRelativeScale               (CPF_Parm, CPF_IsPlainOldData)

void ALandscapeGizmoActor::SetActorRelativeScale3D(const struct FVector& NewRelativeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorRelativeScale3D");

	ALandscapeGizmoActor_SetActorRelativeScale3D_Params params;
	params.NewRelativeScale = NewRelativeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorHiddenInGame
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bNewHidden                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::SetActorHiddenInGame(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorHiddenInGame");

	ALandscapeGizmoActor_SetActorHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorEnableCollision
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bNewActorEnableCollision       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::SetActorEnableCollision(bool bNewActorEnableCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorEnableCollision");

	ALandscapeGizmoActor_SetActorEnableCollision_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UActorComponent*         PrerequisiteComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ALandscapeGizmoActor::RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteComponent");

	ALandscapeGizmoActor_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  PrerequisiteActor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteActor");

	ALandscapeGizmoActor_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveTick
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveTick");

	ALandscapeGizmoActor_ReceiveTick_Params params;
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

void ALandscapeGizmoActor::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveRadialDamage");

	ALandscapeGizmoActor_ReceiveRadialDamage_Params params;
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

void ALandscapeGizmoActor::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceivePointDamage");

	ALandscapeGizmoActor_ReceivePointDamage_Params params;
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

void ALandscapeGizmoActor::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveHit");

	ALandscapeGizmoActor_ReceiveHit_Params params;
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

void ALandscapeGizmoActor::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveEndPlay");

	ALandscapeGizmoActor_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveDestroyed");

	ALandscapeGizmoActor_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveBeginPlay");

	ALandscapeGizmoActor_ReceiveBeginPlay_Params params;

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

void ALandscapeGizmoActor::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveAnyDamage");

	ALandscapeGizmoActor_ReceiveAnyDamage_Params params;
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

void ALandscapeGizmoActor::ReceiveActorOnReleased(const struct FKey& ButtonReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnReleased");

	ALandscapeGizmoActor_ReceiveActorOnReleased_Params params;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchLeave
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchLeave");

	ALandscapeGizmoActor_ReceiveActorOnInputTouchLeave_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnter
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnter");

	ALandscapeGizmoActor_ReceiveActorOnInputTouchEnter_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnd
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnd");

	ALandscapeGizmoActor_ReceiveActorOnInputTouchEnd_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchBegin
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchBegin");

	ALandscapeGizmoActor_ReceiveActorOnInputTouchBegin_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnClicked
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FKey                    ButtonPressed                  (CPF_Parm)

void ALandscapeGizmoActor::ReceiveActorOnClicked(const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnClicked");

	ALandscapeGizmoActor_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndOverlap
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndOverlap");

	ALandscapeGizmoActor_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndCursorOver");

	ALandscapeGizmoActor_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginOverlap");

	ALandscapeGizmoActor_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginCursorOver");

	ALandscapeGizmoActor_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Role
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::OnRep_Role()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Role");

	ALandscapeGizmoActor_OnRep_Role_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::OnRep_ReplicateMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicateMovement");

	ALandscapeGizmoActor_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::OnRep_ReplicatedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicatedMovement");

	ALandscapeGizmoActor_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::OnRep_Owner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Owner");

	ALandscapeGizmoActor_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::OnRep_Instigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Instigator");

	ALandscapeGizmoActor_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::OnRep_AttachmentReplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_AttachmentReplication");

	ALandscapeGizmoActor_OnRep_AttachmentReplication_Params params;

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

void ALandscapeGizmoActor::MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeNoise");

	ALandscapeGizmoActor_MakeNoise_Params params;
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

class UMaterialInstanceDynamic* ALandscapeGizmoActor::MakeMIDForMaterial(class UMaterialInterface* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeMIDForMaterial");

	ALandscapeGizmoActor_MakeMIDForMaterial_Params params;
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

bool ALandscapeGizmoActor::K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_TeleportTo");

	ALandscapeGizmoActor_K2_TeleportTo_Params params;
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

bool ALandscapeGizmoActor::K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorTransform");

	ALandscapeGizmoActor_K2_SetActorTransform_Params params;
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

bool ALandscapeGizmoActor::K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRotation");

	ALandscapeGizmoActor_K2_SetActorRotation_Params params;
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

void ALandscapeGizmoActor::K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeTransform");

	ALandscapeGizmoActor_K2_SetActorRelativeTransform_Params params;
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

void ALandscapeGizmoActor::K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeRotation");

	ALandscapeGizmoActor_K2_SetActorRelativeRotation_Params params;
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

void ALandscapeGizmoActor::K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeLocation");

	ALandscapeGizmoActor_K2_SetActorRelativeLocation_Params params;
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

bool ALandscapeGizmoActor::K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocationAndRotation");

	ALandscapeGizmoActor_K2_SetActorLocationAndRotation_Params params;
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

bool ALandscapeGizmoActor::K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocation");

	ALandscapeGizmoActor_K2_SetActorLocation_Params params;
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

void ALandscapeGizmoActor::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnReset");

	ALandscapeGizmoActor_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::K2_OnEndViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnEndViewTarget");

	ALandscapeGizmoActor_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnBecomeViewTarget
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnBecomeViewTarget");

	ALandscapeGizmoActor_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_GetRootComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USceneComponent* ALandscapeGizmoActor::K2_GetRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetRootComponent");

	ALandscapeGizmoActor_K2_GetRootComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorRotation
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator ALandscapeGizmoActor::K2_GetActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorRotation");

	ALandscapeGizmoActor_K2_GetActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorLocation
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ALandscapeGizmoActor::K2_GetActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorLocation");

	ALandscapeGizmoActor_K2_GetActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_DetachFromActor
// (FUNC_Final, FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::K2_DetachFromActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DetachFromActor");

	ALandscapeGizmoActor_K2_DetachFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UActorComponent*         Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ALandscapeGizmoActor::K2_DestroyComponent(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyComponent");

	ALandscapeGizmoActor_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::K2_DestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyActor");

	ALandscapeGizmoActor_K2_DestroyActor_Params params;

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

void ALandscapeGizmoActor::K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToComponent");

	ALandscapeGizmoActor_K2_AttachToComponent_Params params;
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

void ALandscapeGizmoActor::K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToActor");

	ALandscapeGizmoActor_K2_AttachToActor_Params params;
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

void ALandscapeGizmoActor::K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentToActor");

	ALandscapeGizmoActor_K2_AttachRootComponentToActor_Params params;
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

void ALandscapeGizmoActor::K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentTo");

	ALandscapeGizmoActor_K2_AttachRootComponentTo_Params params;
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

void ALandscapeGizmoActor::K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldTransform");

	ALandscapeGizmoActor_K2_AddActorWorldTransform_Params params;
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

void ALandscapeGizmoActor::K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldRotation");

	ALandscapeGizmoActor_K2_AddActorWorldRotation_Params params;
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

void ALandscapeGizmoActor::K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldOffset");

	ALandscapeGizmoActor_K2_AddActorWorldOffset_Params params;
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

void ALandscapeGizmoActor::K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalTransform");

	ALandscapeGizmoActor_K2_AddActorLocalTransform_Params params;
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

void ALandscapeGizmoActor::K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalRotation");

	ALandscapeGizmoActor_K2_AddActorLocalRotation_Params params;
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

void ALandscapeGizmoActor::K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalOffset");

	ALandscapeGizmoActor_K2_AddActorLocalOffset_Params params;
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

bool ALandscapeGizmoActor::IsOverlappingActor(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsOverlappingActor");

	ALandscapeGizmoActor_IsOverlappingActor_Params params;
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

bool ALandscapeGizmoActor::IsChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsChildActor");

	ALandscapeGizmoActor_IsChildActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorTickEnabled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ALandscapeGizmoActor::IsActorTickEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorTickEnabled");

	ALandscapeGizmoActor_IsActorTickEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorBeingDestroyed
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ALandscapeGizmoActor::IsActorBeingDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorBeingDestroyed");

	ALandscapeGizmoActor_IsActorBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.HasAuthority
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ALandscapeGizmoActor::HasAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HasAuthority");

	ALandscapeGizmoActor_HasAuthority_Params params;

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

float ALandscapeGizmoActor::GetVerticalDistanceTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVerticalDistanceTo");

	ALandscapeGizmoActor_GetVerticalDistanceTo_Params params;
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

struct FVector ALandscapeGizmoActor::GetVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVelocity");

	ALandscapeGizmoActor_GetVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTransform
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform ALandscapeGizmoActor::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTransform");

	ALandscapeGizmoActor_GetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTickableWhenPaused
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ALandscapeGizmoActor::GetTickableWhenPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTickableWhenPaused");

	ALandscapeGizmoActor_GetTickableWhenPaused_Params params;

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

float ALandscapeGizmoActor::GetSquaredDistanceTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetSquaredDistanceTo");

	ALandscapeGizmoActor_GetSquaredDistanceTo_Params params;
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

TEnumAsByte<ENetRole> ALandscapeGizmoActor::GetRemoteRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRemoteRole");

	ALandscapeGizmoActor_GetRemoteRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UChildActorComponent*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UChildActorComponent* ALandscapeGizmoActor::GetParentComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentComponent");

	ALandscapeGizmoActor_GetParentComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* ALandscapeGizmoActor::GetParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentActor");

	ALandscapeGizmoActor_GetParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOwner
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* ALandscapeGizmoActor::GetOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOwner");

	ALandscapeGizmoActor_GetOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOverlappingComponents
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class UPrimitiveComponent*> OverlappingComponents          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ALandscapeGizmoActor::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingComponents");

	ALandscapeGizmoActor_GetOverlappingComponents_Params params;

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

void ALandscapeGizmoActor::GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingActors");

	ALandscapeGizmoActor_GetOverlappingActors_Params params;
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

float ALandscapeGizmoActor::GetLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLifeSpan");

	ALandscapeGizmoActor_GetLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigatorController
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AController*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AController* ALandscapeGizmoActor::GetInstigatorController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigatorController");

	ALandscapeGizmoActor_GetInstigatorController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigator
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APawn* ALandscapeGizmoActor::GetInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigator");

	ALandscapeGizmoActor_GetInstigator_Params params;

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

struct FVector ALandscapeGizmoActor::GetInputVectorAxisValue(const struct FKey& InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputVectorAxisValue");

	ALandscapeGizmoActor_GetInputVectorAxisValue_Params params;
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

float ALandscapeGizmoActor::GetInputAxisValue(const struct FName& InputAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisValue");

	ALandscapeGizmoActor_GetInputAxisValue_Params params;
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

float ALandscapeGizmoActor::GetInputAxisKeyValue(const struct FKey& InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisKeyValue");

	ALandscapeGizmoActor_GetInputAxisKeyValue_Params params;
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

float ALandscapeGizmoActor::GetHorizontalDotProductTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDotProductTo");

	ALandscapeGizmoActor_GetHorizontalDotProductTo_Params params;
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

float ALandscapeGizmoActor::GetHorizontalDistanceTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDistanceTo");

	ALandscapeGizmoActor_GetHorizontalDistanceTo_Params params;
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

float ALandscapeGizmoActor::GetGameTimeSinceCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetGameTimeSinceCreation");

	ALandscapeGizmoActor_GetGameTimeSinceCreation_Params params;

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

float ALandscapeGizmoActor::GetDotProductTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDotProductTo");

	ALandscapeGizmoActor_GetDotProductTo_Params params;
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

float ALandscapeGizmoActor::GetDistanceTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDistanceTo");

	ALandscapeGizmoActor_GetDistanceTo_Params params;
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

TArray<class UActorComponent*> ALandscapeGizmoActor::GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByTag");

	ALandscapeGizmoActor_GetComponentsByTag_Params params;
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

TArray<class UActorComponent*> ALandscapeGizmoActor::GetComponentsByClass(class UClass* ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByClass");

	ALandscapeGizmoActor_GetComponentsByClass_Params params;
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

class UActorComponent* ALandscapeGizmoActor::GetComponentByClass(class UClass* ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentByClass");

	ALandscapeGizmoActor_GetComponentByClass_Params params;
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

struct FName ALandscapeGizmoActor::GetAttachParentSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentSocketName");

	ALandscapeGizmoActor_GetAttachParentSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* ALandscapeGizmoActor::GetAttachParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentActor");

	ALandscapeGizmoActor_GetAttachParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachedActors
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class AActor*>          OutActors                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ALandscapeGizmoActor::GetAttachedActors(TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachedActors");

	ALandscapeGizmoActor_GetAttachedActors_Params params;

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

void ALandscapeGizmoActor::GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAllChildActors");

	ALandscapeGizmoActor_GetAllChildActors_Params params;
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

struct FVector ALandscapeGizmoActor::GetActorUpVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorUpVector");

	ALandscapeGizmoActor_GetActorUpVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTimeDilation
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ALandscapeGizmoActor::GetActorTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTimeDilation");

	ALandscapeGizmoActor_GetActorTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTickInterval
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ALandscapeGizmoActor::GetActorTickInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTickInterval");

	ALandscapeGizmoActor_GetActorTickInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorScale3D
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ALandscapeGizmoActor::GetActorScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorScale3D");

	ALandscapeGizmoActor_GetActorScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRightVector
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ALandscapeGizmoActor::GetActorRightVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRightVector");

	ALandscapeGizmoActor_GetActorRightVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRelativeScale3D
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ALandscapeGizmoActor::GetActorRelativeScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRelativeScale3D");

	ALandscapeGizmoActor_GetActorRelativeScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorForwardVector
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ALandscapeGizmoActor::GetActorForwardVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorForwardVector");

	ALandscapeGizmoActor_GetActorForwardVector_Params params;

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

void ALandscapeGizmoActor::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEyesViewPoint");

	ALandscapeGizmoActor_GetActorEyesViewPoint_Params params;

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

bool ALandscapeGizmoActor::GetActorEnableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEnableCollision");

	ALandscapeGizmoActor_GetActorEnableCollision_Params params;

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

void ALandscapeGizmoActor::GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorBounds");

	ALandscapeGizmoActor_GetActorBounds_Params params;
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

void ALandscapeGizmoActor::ForceNetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ForceNetUpdate");

	ALandscapeGizmoActor_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActor::FlushNetDormancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FlushNetDormancy");

	ALandscapeGizmoActor_FlushNetDormancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EnableInput
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::EnableInput(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EnableInput");

	ALandscapeGizmoActor_EnableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DisableInput
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::DisableInput(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DisableInput");

	ALandscapeGizmoActor_DisableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DetachRootComponentFromParent
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bMaintainWorldPosition         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::DetachRootComponentFromParent(bool bMaintainWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DetachRootComponentFromParent");

	ALandscapeGizmoActor_DetachRootComponentFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UActorComponent*         PrerequisiteComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ALandscapeGizmoActor::AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteComponent");

	ALandscapeGizmoActor_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  PrerequisiteActor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActor::AddTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteActor");

	ALandscapeGizmoActor_AddTickPrerequisiteActor_Params params;
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

class UActorComponent* ALandscapeGizmoActor::AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddComponent");

	ALandscapeGizmoActor_AddComponent_Params params;
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

bool ALandscapeGizmoActor::ActorHasTag(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ActorHasTag");

	ALandscapeGizmoActor_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.WasRecentlyRendered
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          Tolerance                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ALandscapeGizmoActiveActor::WasRecentlyRendered(float Tolerance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.WasRecentlyRendered");

	ALandscapeGizmoActiveActor_WasRecentlyRendered_Params params;
	params.Tolerance = Tolerance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.UserConstructionScript
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.UserConstructionScript");

	ALandscapeGizmoActiveActor_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.TearOff
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::TearOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.TearOff");

	ALandscapeGizmoActiveActor_TearOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SnapRootComponentTo
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  InParentActor                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   InSocketName                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SnapRootComponentTo");

	ALandscapeGizmoActiveActor_SnapRootComponentTo_Params params;
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

void ALandscapeGizmoActiveActor::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickGroup");

	ALandscapeGizmoActiveActor_SetTickGroup_Params params;
	params.NewTickGroup = NewTickGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetTickableWhenPaused
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bTickableWhenPaused            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::SetTickableWhenPaused(bool bTickableWhenPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetTickableWhenPaused");

	ALandscapeGizmoActiveActor_SetTickableWhenPaused_Params params;
	params.bTickableWhenPaused = bTickableWhenPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicates
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bInReplicates                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::SetReplicates(bool bInReplicates)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicates");

	ALandscapeGizmoActiveActor_SetReplicates_Params params;
	params.bInReplicates = bInReplicates;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetReplicateMovement
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bInReplicateMovement           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::SetReplicateMovement(bool bInReplicateMovement)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetReplicateMovement");

	ALandscapeGizmoActiveActor_SetReplicateMovement_Params params;
	params.bInReplicateMovement = bInReplicateMovement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetOwner
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  NewOwner                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::SetOwner(class AActor* NewOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetOwner");

	ALandscapeGizmoActiveActor_SetOwner_Params params;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetLifeSpan
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InLifespan                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::SetLifeSpan(float InLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetLifeSpan");

	ALandscapeGizmoActiveActor_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickInterval
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          TickInterval                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::SetActorTickInterval(float TickInterval)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickInterval");

	ALandscapeGizmoActiveActor_SetActorTickInterval_Params params;
	params.TickInterval = TickInterval;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorTickEnabled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bEnabled                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::SetActorTickEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorTickEnabled");

	ALandscapeGizmoActiveActor_SetActorTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorScale3D
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewScale3D                     (CPF_Parm, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::SetActorScale3D(const struct FVector& NewScale3D)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorScale3D");

	ALandscapeGizmoActiveActor_SetActorScale3D_Params params;
	params.NewScale3D = NewScale3D;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorRelativeScale3D
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewRelativeScale               (CPF_Parm, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::SetActorRelativeScale3D(const struct FVector& NewRelativeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorRelativeScale3D");

	ALandscapeGizmoActiveActor_SetActorRelativeScale3D_Params params;
	params.NewRelativeScale = NewRelativeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorHiddenInGame
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bNewHidden                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::SetActorHiddenInGame(bool bNewHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorHiddenInGame");

	ALandscapeGizmoActiveActor_SetActorHiddenInGame_Params params;
	params.bNewHidden = bNewHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.SetActorEnableCollision
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bNewActorEnableCollision       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::SetActorEnableCollision(bool bNewActorEnableCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.SetActorEnableCollision");

	ALandscapeGizmoActiveActor_SetActorEnableCollision_Params params;
	params.bNewActorEnableCollision = bNewActorEnableCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UActorComponent*         PrerequisiteComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteComponent");

	ALandscapeGizmoActiveActor_RemoveTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.RemoveTickPrerequisiteActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  PrerequisiteActor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.RemoveTickPrerequisiteActor");

	ALandscapeGizmoActiveActor_RemoveTickPrerequisiteActor_Params params;
	params.PrerequisiteActor = PrerequisiteActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveTick
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          DeltaSeconds                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveTick");

	ALandscapeGizmoActiveActor_ReceiveTick_Params params;
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

void ALandscapeGizmoActiveActor::ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveRadialDamage");

	ALandscapeGizmoActiveActor_ReceiveRadialDamage_Params params;
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

void ALandscapeGizmoActiveActor::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceivePointDamage");

	ALandscapeGizmoActiveActor_ReceivePointDamage_Params params;
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

void ALandscapeGizmoActiveActor::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveHit");

	ALandscapeGizmoActiveActor_ReceiveHit_Params params;
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

void ALandscapeGizmoActiveActor::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveEndPlay");

	ALandscapeGizmoActiveActor_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveDestroyed
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveDestroyed");

	ALandscapeGizmoActiveActor_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveBeginPlay
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveBeginPlay");

	ALandscapeGizmoActiveActor_ReceiveBeginPlay_Params params;

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

void ALandscapeGizmoActiveActor::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveAnyDamage");

	ALandscapeGizmoActiveActor_ReceiveAnyDamage_Params params;
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

void ALandscapeGizmoActiveActor::ReceiveActorOnReleased(const struct FKey& ButtonReleased)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnReleased");

	ALandscapeGizmoActiveActor_ReceiveActorOnReleased_Params params;
	params.ButtonReleased = ButtonReleased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchLeave
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchLeave");

	ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchLeave_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnter
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnter");

	ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchEnter_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchEnd
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchEnd");

	ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchEnd_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnInputTouchBegin
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ETouchIndex>       FingerIndex                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnInputTouchBegin");

	ALandscapeGizmoActiveActor_ReceiveActorOnInputTouchBegin_Params params;
	params.FingerIndex = FingerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorOnClicked
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FKey                    ButtonPressed                  (CPF_Parm)

void ALandscapeGizmoActiveActor::ReceiveActorOnClicked(const struct FKey& ButtonPressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorOnClicked");

	ALandscapeGizmoActiveActor_ReceiveActorOnClicked_Params params;
	params.ButtonPressed = ButtonPressed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndOverlap
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndOverlap");

	ALandscapeGizmoActiveActor_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorEndCursorOver
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::ReceiveActorEndCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorEndCursorOver");

	ALandscapeGizmoActiveActor_ReceiveActorEndCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginOverlap
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  OtherActor                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginOverlap");

	ALandscapeGizmoActiveActor_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.ReceiveActorBeginCursorOver
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::ReceiveActorBeginCursorOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ReceiveActorBeginCursorOver");

	ALandscapeGizmoActiveActor_ReceiveActorBeginCursorOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Role
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::OnRep_Role()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Role");

	ALandscapeGizmoActiveActor_OnRep_Role_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicateMovement
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::OnRep_ReplicateMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicateMovement");

	ALandscapeGizmoActiveActor_OnRep_ReplicateMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_ReplicatedMovement
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::OnRep_ReplicatedMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_ReplicatedMovement");

	ALandscapeGizmoActiveActor_OnRep_ReplicatedMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Owner
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::OnRep_Owner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Owner");

	ALandscapeGizmoActiveActor_OnRep_Owner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_Instigator
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::OnRep_Instigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_Instigator");

	ALandscapeGizmoActiveActor_OnRep_Instigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.OnRep_AttachmentReplication
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::OnRep_AttachmentReplication()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.OnRep_AttachmentReplication");

	ALandscapeGizmoActiveActor_OnRep_AttachmentReplication_Params params;

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

void ALandscapeGizmoActiveActor::MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeNoise");

	ALandscapeGizmoActiveActor_MakeNoise_Params params;
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

class UMaterialInstanceDynamic* ALandscapeGizmoActiveActor::MakeMIDForMaterial(class UMaterialInterface* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.MakeMIDForMaterial");

	ALandscapeGizmoActiveActor_MakeMIDForMaterial_Params params;
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

bool ALandscapeGizmoActiveActor::K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_TeleportTo");

	ALandscapeGizmoActiveActor_K2_TeleportTo_Params params;
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

bool ALandscapeGizmoActiveActor::K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorTransform");

	ALandscapeGizmoActiveActor_K2_SetActorTransform_Params params;
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

bool ALandscapeGizmoActiveActor::K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRotation");

	ALandscapeGizmoActiveActor_K2_SetActorRotation_Params params;
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

void ALandscapeGizmoActiveActor::K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeTransform");

	ALandscapeGizmoActiveActor_K2_SetActorRelativeTransform_Params params;
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

void ALandscapeGizmoActiveActor::K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeRotation");

	ALandscapeGizmoActiveActor_K2_SetActorRelativeRotation_Params params;
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

void ALandscapeGizmoActiveActor::K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorRelativeLocation");

	ALandscapeGizmoActiveActor_K2_SetActorRelativeLocation_Params params;
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

bool ALandscapeGizmoActiveActor::K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocationAndRotation");

	ALandscapeGizmoActiveActor_K2_SetActorLocationAndRotation_Params params;
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

bool ALandscapeGizmoActiveActor::K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_SetActorLocation");

	ALandscapeGizmoActiveActor_K2_SetActorLocation_Params params;
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

void ALandscapeGizmoActiveActor::K2_OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnReset");

	ALandscapeGizmoActiveActor_K2_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnEndViewTarget
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_OnEndViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnEndViewTarget");

	ALandscapeGizmoActiveActor_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_OnBecomeViewTarget
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_OnBecomeViewTarget(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_OnBecomeViewTarget");

	ALandscapeGizmoActiveActor_K2_OnBecomeViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_GetRootComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USceneComponent*         ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class USceneComponent* ALandscapeGizmoActiveActor::K2_GetRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetRootComponent");

	ALandscapeGizmoActiveActor_K2_GetRootComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorRotation
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator ALandscapeGizmoActiveActor::K2_GetActorRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorRotation");

	ALandscapeGizmoActiveActor_K2_GetActorRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_GetActorLocation
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::K2_GetActorLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_GetActorLocation");

	ALandscapeGizmoActiveActor_K2_GetActorLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.K2_DetachFromActor
// (FUNC_Final, FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::K2_DetachFromActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DetachFromActor");

	ALandscapeGizmoActiveActor_K2_DetachFromActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UActorComponent*         Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::K2_DestroyComponent(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyComponent");

	ALandscapeGizmoActiveActor_K2_DestroyComponent_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.K2_DestroyActor
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::K2_DestroyActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_DestroyActor");

	ALandscapeGizmoActiveActor_K2_DestroyActor_Params params;

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

void ALandscapeGizmoActiveActor::K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToComponent");

	ALandscapeGizmoActiveActor_K2_AttachToComponent_Params params;
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

void ALandscapeGizmoActiveActor::K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachToActor");

	ALandscapeGizmoActiveActor_K2_AttachToActor_Params params;
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

void ALandscapeGizmoActiveActor::K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentToActor");

	ALandscapeGizmoActiveActor_K2_AttachRootComponentToActor_Params params;
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

void ALandscapeGizmoActiveActor::K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AttachRootComponentTo");

	ALandscapeGizmoActiveActor_K2_AttachRootComponentTo_Params params;
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

void ALandscapeGizmoActiveActor::K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldTransform");

	ALandscapeGizmoActiveActor_K2_AddActorWorldTransform_Params params;
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

void ALandscapeGizmoActiveActor::K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldRotation");

	ALandscapeGizmoActiveActor_K2_AddActorWorldRotation_Params params;
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

void ALandscapeGizmoActiveActor::K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorWorldOffset");

	ALandscapeGizmoActiveActor_K2_AddActorWorldOffset_Params params;
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

void ALandscapeGizmoActiveActor::K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalTransform");

	ALandscapeGizmoActiveActor_K2_AddActorLocalTransform_Params params;
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

void ALandscapeGizmoActiveActor::K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalRotation");

	ALandscapeGizmoActiveActor_K2_AddActorLocalRotation_Params params;
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

void ALandscapeGizmoActiveActor::K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.K2_AddActorLocalOffset");

	ALandscapeGizmoActiveActor_K2_AddActorLocalOffset_Params params;
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

bool ALandscapeGizmoActiveActor::IsOverlappingActor(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsOverlappingActor");

	ALandscapeGizmoActiveActor_IsOverlappingActor_Params params;
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

bool ALandscapeGizmoActiveActor::IsChildActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsChildActor");

	ALandscapeGizmoActiveActor_IsChildActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorTickEnabled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ALandscapeGizmoActiveActor::IsActorTickEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorTickEnabled");

	ALandscapeGizmoActiveActor_IsActorTickEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.IsActorBeingDestroyed
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ALandscapeGizmoActiveActor::IsActorBeingDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.IsActorBeingDestroyed");

	ALandscapeGizmoActiveActor_IsActorBeingDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.HasAuthority
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ALandscapeGizmoActiveActor::HasAuthority()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.HasAuthority");

	ALandscapeGizmoActiveActor_HasAuthority_Params params;

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

float ALandscapeGizmoActiveActor::GetVerticalDistanceTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVerticalDistanceTo");

	ALandscapeGizmoActiveActor_GetVerticalDistanceTo_Params params;
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

struct FVector ALandscapeGizmoActiveActor::GetVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetVelocity");

	ALandscapeGizmoActiveActor_GetVelocity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTransform
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FTransform ALandscapeGizmoActiveActor::GetTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTransform");

	ALandscapeGizmoActiveActor_GetTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetTickableWhenPaused
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ALandscapeGizmoActiveActor::GetTickableWhenPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetTickableWhenPaused");

	ALandscapeGizmoActiveActor_GetTickableWhenPaused_Params params;

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

float ALandscapeGizmoActiveActor::GetSquaredDistanceTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetSquaredDistanceTo");

	ALandscapeGizmoActiveActor_GetSquaredDistanceTo_Params params;
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

TEnumAsByte<ENetRole> ALandscapeGizmoActiveActor::GetRemoteRole()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetRemoteRole");

	ALandscapeGizmoActiveActor_GetRemoteRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UChildActorComponent*    ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_InstancedReference, CPF_IsPlainOldData)

class UChildActorComponent* ALandscapeGizmoActiveActor::GetParentComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentComponent");

	ALandscapeGizmoActiveActor_GetParentComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetParentActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* ALandscapeGizmoActiveActor::GetParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetParentActor");

	ALandscapeGizmoActiveActor_GetParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOwner
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* ALandscapeGizmoActiveActor::GetOwner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOwner");

	ALandscapeGizmoActiveActor_GetOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetOverlappingComponents
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class UPrimitiveComponent*> OverlappingComponents          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ALandscapeGizmoActiveActor::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingComponents");

	ALandscapeGizmoActiveActor_GetOverlappingComponents_Params params;

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

void ALandscapeGizmoActiveActor::GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetOverlappingActors");

	ALandscapeGizmoActiveActor_GetOverlappingActors_Params params;
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

float ALandscapeGizmoActiveActor::GetLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetLifeSpan");

	ALandscapeGizmoActiveActor_GetLifeSpan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigatorController
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AController*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AController* ALandscapeGizmoActiveActor::GetInstigatorController()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigatorController");

	ALandscapeGizmoActiveActor_GetInstigatorController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetInstigator
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APawn*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class APawn* ALandscapeGizmoActiveActor::GetInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInstigator");

	ALandscapeGizmoActiveActor_GetInstigator_Params params;

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

struct FVector ALandscapeGizmoActiveActor::GetInputVectorAxisValue(const struct FKey& InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputVectorAxisValue");

	ALandscapeGizmoActiveActor_GetInputVectorAxisValue_Params params;
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

float ALandscapeGizmoActiveActor::GetInputAxisValue(const struct FName& InputAxisName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisValue");

	ALandscapeGizmoActiveActor_GetInputAxisValue_Params params;
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

float ALandscapeGizmoActiveActor::GetInputAxisKeyValue(const struct FKey& InputAxisKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetInputAxisKeyValue");

	ALandscapeGizmoActiveActor_GetInputAxisKeyValue_Params params;
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

float ALandscapeGizmoActiveActor::GetHorizontalDotProductTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDotProductTo");

	ALandscapeGizmoActiveActor_GetHorizontalDotProductTo_Params params;
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

float ALandscapeGizmoActiveActor::GetHorizontalDistanceTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetHorizontalDistanceTo");

	ALandscapeGizmoActiveActor_GetHorizontalDistanceTo_Params params;
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

float ALandscapeGizmoActiveActor::GetGameTimeSinceCreation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetGameTimeSinceCreation");

	ALandscapeGizmoActiveActor_GetGameTimeSinceCreation_Params params;

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

float ALandscapeGizmoActiveActor::GetDotProductTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDotProductTo");

	ALandscapeGizmoActiveActor_GetDotProductTo_Params params;
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

float ALandscapeGizmoActiveActor::GetDistanceTo(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetDistanceTo");

	ALandscapeGizmoActiveActor_GetDistanceTo_Params params;
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

TArray<class UActorComponent*> ALandscapeGizmoActiveActor::GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByTag");

	ALandscapeGizmoActiveActor_GetComponentsByTag_Params params;
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

TArray<class UActorComponent*> ALandscapeGizmoActiveActor::GetComponentsByClass(class UClass* ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentsByClass");

	ALandscapeGizmoActiveActor_GetComponentsByClass_Params params;
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

class UActorComponent* ALandscapeGizmoActiveActor::GetComponentByClass(class UClass* ComponentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetComponentByClass");

	ALandscapeGizmoActiveActor_GetComponentByClass_Params params;
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

struct FName ALandscapeGizmoActiveActor::GetAttachParentSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentSocketName");

	ALandscapeGizmoActiveActor_GetAttachParentSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachParentActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class AActor* ALandscapeGizmoActiveActor::GetAttachParentActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachParentActor");

	ALandscapeGizmoActiveActor_GetAttachParentActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetAttachedActors
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class AActor*>          OutActors                      (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ALandscapeGizmoActiveActor::GetAttachedActors(TArray<class AActor*>* OutActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAttachedActors");

	ALandscapeGizmoActiveActor_GetAttachedActors_Params params;

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

void ALandscapeGizmoActiveActor::GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetAllChildActors");

	ALandscapeGizmoActiveActor_GetAllChildActors_Params params;
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

struct FVector ALandscapeGizmoActiveActor::GetActorUpVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorUpVector");

	ALandscapeGizmoActiveActor_GetActorUpVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTimeDilation
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ALandscapeGizmoActiveActor::GetActorTimeDilation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTimeDilation");

	ALandscapeGizmoActiveActor_GetActorTimeDilation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorTickInterval
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ALandscapeGizmoActiveActor::GetActorTickInterval()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorTickInterval");

	ALandscapeGizmoActiveActor_GetActorTickInterval_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorScale3D
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::GetActorScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorScale3D");

	ALandscapeGizmoActiveActor_GetActorScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRightVector
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::GetActorRightVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRightVector");

	ALandscapeGizmoActiveActor_GetActorRightVector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorRelativeScale3D
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::GetActorRelativeScale3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorRelativeScale3D");

	ALandscapeGizmoActiveActor_GetActorRelativeScale3D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.Actor.GetActorForwardVector
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ALandscapeGizmoActiveActor::GetActorForwardVector()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorForwardVector");

	ALandscapeGizmoActiveActor_GetActorForwardVector_Params params;

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

void ALandscapeGizmoActiveActor::GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEyesViewPoint");

	ALandscapeGizmoActiveActor_GetActorEyesViewPoint_Params params;

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

bool ALandscapeGizmoActiveActor::GetActorEnableCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorEnableCollision");

	ALandscapeGizmoActiveActor_GetActorEnableCollision_Params params;

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

void ALandscapeGizmoActiveActor::GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.GetActorBounds");

	ALandscapeGizmoActiveActor_GetActorBounds_Params params;
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

void ALandscapeGizmoActiveActor::ForceNetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ForceNetUpdate");

	ALandscapeGizmoActiveActor_ForceNetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.FlushNetDormancy
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ALandscapeGizmoActiveActor::FlushNetDormancy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.FlushNetDormancy");

	ALandscapeGizmoActiveActor_FlushNetDormancy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.EnableInput
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::EnableInput(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.EnableInput");

	ALandscapeGizmoActiveActor_EnableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DisableInput
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APlayerController*       PlayerController               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::DisableInput(class APlayerController* PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DisableInput");

	ALandscapeGizmoActiveActor_DisableInput_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.DetachRootComponentFromParent
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bMaintainWorldPosition         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::DetachRootComponentFromParent(bool bMaintainWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.DetachRootComponentFromParent");

	ALandscapeGizmoActiveActor_DetachRootComponentFromParent_Params params;
	params.bMaintainWorldPosition = bMaintainWorldPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteComponent
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UActorComponent*         PrerequisiteComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteComponent");

	ALandscapeGizmoActiveActor_AddTickPrerequisiteComponent_Params params;
	params.PrerequisiteComponent = PrerequisiteComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.Actor.AddTickPrerequisiteActor
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  PrerequisiteActor              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeGizmoActiveActor::AddTickPrerequisiteActor(class AActor* PrerequisiteActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddTickPrerequisiteActor");

	ALandscapeGizmoActiveActor_AddTickPrerequisiteActor_Params params;
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

class UActorComponent* ALandscapeGizmoActiveActor::AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.AddComponent");

	ALandscapeGizmoActiveActor_AddComponent_Params params;
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

bool ALandscapeGizmoActiveActor::ActorHasTag(const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Actor.ActorHasTag");

	ALandscapeGizmoActiveActor_ActorHasTag_Params params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.WakeRigidBody
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::WakeRigidBody(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WakeRigidBody");

	ULandscapeGizmoRenderComponent_WakeRigidBody_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.WakeAllRigidBodies
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ULandscapeGizmoRenderComponent::WakeAllRigidBodies()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.WakeAllRigidBodies");

	ULandscapeGizmoRenderComponent_WakeAllRigidBodies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetWalkableSlopeOverride
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FWalkableSlopeOverride  NewOverride                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetWalkableSlopeOverride(const struct FWalkableSlopeOverride& NewOverride)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetWalkableSlopeOverride");

	ULandscapeGizmoRenderComponent_SetWalkableSlopeOverride_Params params;
	params.NewOverride = NewOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetUseCCD
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           InUseCCD                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetUseCCD(bool InUseCCD, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetUseCCD");

	ULandscapeGizmoRenderComponent_SetUseCCD_Params params;
	params.InUseCCD = InUseCCD;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetTranslucentSortPriority
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            NewTranslucentSortPriority     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetTranslucentSortPriority(int NewTranslucentSortPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetTranslucentSortPriority");

	ULandscapeGizmoRenderComponent_SetTranslucentSortPriority_Params params;
	params.NewTranslucentSortPriority = NewTranslucentSortPriority;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetSimulatePhysics
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bSimulate                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetSimulatePhysics(bool bSimulate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetSimulatePhysics");

	ULandscapeGizmoRenderComponent_SetSimulatePhysics_Params params;
	params.bSimulate = bSimulate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderInMono
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bValue                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetRenderInMono(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderInMono");

	ULandscapeGizmoRenderComponent_SetRenderInMono_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderInMainPass
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bValue                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetRenderInMainPass(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderInMainPass");

	ULandscapeGizmoRenderComponent_SetRenderInMainPass_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetRenderCustomDepth
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bValue                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetRenderCustomDepth(bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetRenderCustomDepth");

	ULandscapeGizmoRenderComponent_SetRenderCustomDepth_Params params;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysMaterialOverride
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UPhysicalMaterial*       NewPhysMaterial                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysMaterialOverride");

	ULandscapeGizmoRenderComponent_SetPhysMaterialOverride_Params params;
	params.NewPhysMaterial = NewPhysMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          NewMaxAngVel                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAddToCurrent                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocity");

	ULandscapeGizmoRenderComponent_SetPhysicsMaxAngularVelocity_Params params;
	params.NewMaxAngVel = NewMaxAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewVel                         (CPF_Parm, CPF_IsPlainOldData)
// bool                           bAddToCurrent                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsLinearVelocity");

	ULandscapeGizmoRenderComponent_SetPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewAngVel                      (CPF_Parm, CPF_IsPlainOldData)
// bool                           bAddToCurrent                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetPhysicsAngularVelocity");

	ULandscapeGizmoRenderComponent_SetPhysicsAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOwnerNoSee
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bNewOwnerNoSee                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetOwnerNoSee(bool bNewOwnerNoSee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetOwnerNoSee");

	ULandscapeGizmoRenderComponent_SetOwnerNoSee_Params params;
	params.bNewOwnerNoSee = bNewOwnerNoSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetOnlyOwnerSee
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bNewOnlyOwnerSee               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetOnlyOwnerSee(bool bNewOnlyOwnerSee)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetOnlyOwnerSee");

	ULandscapeGizmoRenderComponent_SetOnlyOwnerSee_Params params;
	params.bNewOnlyOwnerSee = bNewOnlyOwnerSee;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bNewNotifyRigidBodyCollision   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetNotifyRigidBodyCollision");

	ULandscapeGizmoRenderComponent_SetNotifyRigidBodyCollision_Params params;
	params.bNewNotifyRigidBodyCollision = bNewNotifyRigidBodyCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterialByName
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   MaterialSlotName               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInterface*      Material                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetMaterialByName(const struct FName& MaterialSlotName, class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMaterialByName");

	ULandscapeGizmoRenderComponent_SetMaterialByName_Params params;
	params.MaterialSlotName = MaterialSlotName;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMaterial
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ElementIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInterface*      Material                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetMaterial(int ElementIndex, class UMaterialInterface* Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMaterial");

	ULandscapeGizmoRenderComponent_SetMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassScale
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          InMassScale                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetMassScale(const struct FName& BoneName, float InMassScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMassScale");

	ULandscapeGizmoRenderComponent_SetMassScale_Params params;
	params.BoneName = BoneName;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetMassOverrideInKg
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          MassInKg                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bOverrideMass                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetMassOverrideInKg(const struct FName& BoneName, float MassInKg, bool bOverrideMass)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetMassOverrideInKg");

	ULandscapeGizmoRenderComponent_SetMassOverrideInKg_Params params;
	params.BoneName = BoneName;
	params.MassInKg = MassInKg;
	params.bOverrideMass = bOverrideMass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLockedAxis
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EDOFMode>          LockedAxis                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetLockedAxis(TEnumAsByte<EDOFMode> LockedAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLockedAxis");

	ULandscapeGizmoRenderComponent_SetLockedAxis_Params params;
	params.LockedAxis = LockedAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetLinearDamping
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InDamping                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetLinearDamping(float InDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetLinearDamping");

	ULandscapeGizmoRenderComponent_SetLinearDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetEnableGravity
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           bGravityEnabled                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetEnableGravity(bool bGravityEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetEnableGravity");

	ULandscapeGizmoRenderComponent_SetEnableGravity_Params params;
	params.bGravityEnabled = bGravityEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ULandscapeGizmoRenderComponent::SetCustomDepthStencilWriteMask()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask");

	ULandscapeGizmoRenderComponent_SetCustomDepthStencilWriteMask_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCustomDepthStencilValue
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCustomDepthStencilValue(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCustomDepthStencilValue");

	ULandscapeGizmoRenderComponent_SetCustomDepthStencilValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCullDistance
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          NewCullDistance                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCullDistance(float NewCullDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCullDistance");

	ULandscapeGizmoRenderComponent_SetCullDistance_Params params;
	params.NewCullDistance = NewCullDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetConstraintMode
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<EDOFMode>          ConstraintMode                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetConstraintMode(TEnumAsByte<EDOFMode> ConstraintMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetConstraintMode");

	ULandscapeGizmoRenderComponent_SetConstraintMode_Params params;
	params.ConstraintMode = ConstraintMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToChannel
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ECollisionChannel> Channel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ECollisionResponse> NewResponse                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionResponseToChannel");

	ULandscapeGizmoRenderComponent_SetCollisionResponseToChannel_Params params;
	params.Channel = Channel;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ECollisionResponse> NewResponse                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionResponseToAllChannels");

	ULandscapeGizmoRenderComponent_SetCollisionResponseToAllChannels_Params params;
	params.NewResponse = NewResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionProfileName
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   InCollisionProfileName         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCollisionProfileName(const struct FName& InCollisionProfileName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionProfileName");

	ULandscapeGizmoRenderComponent_SetCollisionProfileName_Params params;
	params.InCollisionProfileName = InCollisionProfileName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionObjectType
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ECollisionChannel> Channel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionObjectType");

	ULandscapeGizmoRenderComponent_SetCollisionObjectType_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCollisionEnabled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ECollisionEnabled> NewType                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCollisionEnabled");

	ULandscapeGizmoRenderComponent_SetCollisionEnabled_Params params;
	params.NewType = NewType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCenterOfMass
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 CenterOfMassOffset             (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCenterOfMass(const struct FVector& CenterOfMassOffset, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCenterOfMass");

	ULandscapeGizmoRenderComponent_SetCenterOfMass_Params params;
	params.CenterOfMassOffset = CenterOfMassOffset;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetCastShadow
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           NewCastShadow                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetCastShadow(bool NewCastShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetCastShadow");

	ULandscapeGizmoRenderComponent_SetCastShadow_Params params;
	params.NewCastShadow = NewCastShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetBoundsScale
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          NewBoundsScale                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetBoundsScale(float NewBoundsScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetBoundsScale");

	ULandscapeGizmoRenderComponent_SetBoundsScale_Params params;
	params.NewBoundsScale = NewBoundsScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAngularDamping
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InDamping                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetAngularDamping(float InDamping)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAngularDamping");

	ULandscapeGizmoRenderComponent_SetAngularDamping_Params params;
	params.InDamping = InDamping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllUseCCD
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           InUseCCD                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetAllUseCCD(bool InUseCCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllUseCCD");

	ULandscapeGizmoRenderComponent_SetAllUseCCD_Params params;
	params.InUseCCD = InUseCCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewVel                         (CPF_Parm, CPF_IsPlainOldData)
// bool                           bAddToCurrent                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetAllPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity");

	ULandscapeGizmoRenderComponent_SetAllPhysicsLinearVelocity_Params params;
	params.NewVel = NewVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocity
// (FUNC_Final, FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 NewAngVel                      (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// bool                           bAddToCurrent                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetAllPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllPhysicsAngularVelocity");

	ULandscapeGizmoRenderComponent_SetAllPhysicsAngularVelocity_Params params;
	params.NewAngVel = NewAngVel;
	params.bAddToCurrent = bAddToCurrent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.SetAllMassScale
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InMassScale                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::SetAllMassScale(float InMassScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.SetAllMassScale");

	ULandscapeGizmoRenderComponent_SetAllMassScale_Params params;
	params.InMassScale = InMassScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ScaleByMomentOfInertia
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 InputVector                    (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::ScaleByMomentOfInertia(const struct FVector& InputVector, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ScaleByMomentOfInertia");

	ULandscapeGizmoRenderComponent_ScaleByMomentOfInertia_Params params;
	params.InputVector = InputVector;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.PutRigidBodyToSleep
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::PutRigidBodyToSleep(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.PutRigidBodyToSleep");

	ULandscapeGizmoRenderComponent_PutRigidBodyToSleep_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.K2_LineTraceComponent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_Net, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 TraceStart                     (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 TraceEnd                       (CPF_Parm, CPF_IsPlainOldData)
// bool                           bTraceComplex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bShowTrace                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 HitLocation                    (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FVector                 HitNormal                      (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FHitResult              OutHit                         (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULandscapeGizmoRenderComponent::K2_LineTraceComponent(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool bTraceComplex, bool bShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_LineTraceComponent");

	ULandscapeGizmoRenderComponent_K2_LineTraceComponent_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.bTraceComplex = bTraceComplex;
	params.bShowTrace = bShowTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitLocation != nullptr)
		*HitLocation = params.HitLocation;
	if (HitNormal != nullptr)
		*HitNormal = params.HitNormal;
	if (BoneName != nullptr)
		*BoneName = params.BoneName;
	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULandscapeGizmoRenderComponent::K2_IsQueryCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled");

	ULandscapeGizmoRenderComponent_K2_IsQueryCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULandscapeGizmoRenderComponent::K2_IsPhysicsCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled");

	ULandscapeGizmoRenderComponent_K2_IsPhysicsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.K2_IsCollisionEnabled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULandscapeGizmoRenderComponent::K2_IsCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.K2_IsCollisionEnabled");

	ULandscapeGizmoRenderComponent_K2_IsCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingComponent
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UPrimitiveComponent*     OtherComp                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULandscapeGizmoRenderComponent::IsOverlappingComponent(class UPrimitiveComponent* OtherComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsOverlappingComponent");

	ULandscapeGizmoRenderComponent_IsOverlappingComponent_Params params;
	params.OtherComp = OtherComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsOverlappingActor
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Other                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULandscapeGizmoRenderComponent::IsOverlappingActor(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsOverlappingActor");

	ULandscapeGizmoRenderComponent_IsOverlappingActor_Params params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsGravityEnabled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULandscapeGizmoRenderComponent::IsGravityEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsGravityEnabled");

	ULandscapeGizmoRenderComponent_IsGravityEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULandscapeGizmoRenderComponent::IsAnyRigidBodyAwake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IsAnyRigidBodyAwake");

	ULandscapeGizmoRenderComponent_IsAnyRigidBodyAwake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UPrimitiveComponent*     Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// bool                           bShouldIgnore                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::IgnoreComponentWhenMoving(class UPrimitiveComponent* Component, bool bShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IgnoreComponentWhenMoving");

	ULandscapeGizmoRenderComponent_IgnoreComponentWhenMoving_Params params;
	params.Component = Component;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.IgnoreActorWhenMoving
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bShouldIgnore                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.IgnoreActorWhenMoving");

	ULandscapeGizmoRenderComponent_IgnoreActorWhenMoving_Params params;
	params.Actor = Actor;
	params.bShouldIgnore = bShouldIgnore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.GetWalkableSlopeOverride
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FWalkableSlopeOverride  ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_IsPlainOldData)

struct FWalkableSlopeOverride ULandscapeGizmoRenderComponent::GetWalkableSlopeOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetWalkableSlopeOverride");

	ULandscapeGizmoRenderComponent_GetWalkableSlopeOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Point                          (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::GetPhysicsLinearVelocityAtPoint(const struct FVector& Point, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint");

	ULandscapeGizmoRenderComponent_GetPhysicsLinearVelocityAtPoint_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::GetPhysicsLinearVelocity(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsLinearVelocity");

	ULandscapeGizmoRenderComponent_GetPhysicsLinearVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::GetPhysicsAngularVelocity(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetPhysicsAngularVelocity");

	ULandscapeGizmoRenderComponent_GetPhysicsAngularVelocity_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetOverlappingComponents
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class UPrimitiveComponent*> InOverlappingComponents        (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)

void ULandscapeGizmoRenderComponent::GetOverlappingComponents(TArray<class UPrimitiveComponent*>* InOverlappingComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlappingComponents");

	ULandscapeGizmoRenderComponent_GetOverlappingComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InOverlappingComponents != nullptr)
		*InOverlappingComponents = params.InOverlappingComponents;
}


// Function Engine.PrimitiveComponent.GetOverlappingActors
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class AActor*>          OverlappingActors              (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
// class UClass*                  ClassFilter                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlappingActors");

	ULandscapeGizmoRenderComponent_GetOverlappingActors_Params params;
	params.ClassFilter = ClassFilter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OverlappingActors != nullptr)
		*OverlappingActors = params.OverlappingActors;
}


// Function Engine.PrimitiveComponent.GetOverlapInfos
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<struct FOverlapInfo>    ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm)

TArray<struct FOverlapInfo> ULandscapeGizmoRenderComponent::GetOverlapInfos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetOverlapInfos");

	ULandscapeGizmoRenderComponent_GetOverlapInfos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetNumMaterials
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int ULandscapeGizmoRenderComponent::GetNumMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetNumMaterials");

	ULandscapeGizmoRenderComponent_GetNumMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            FaceIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInterface* ULandscapeGizmoRenderComponent::GetMaterialFromCollisionFaceIndex(int FaceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex");

	ULandscapeGizmoRenderComponent_GetMaterialFromCollisionFaceIndex_Params params;
	params.FaceIndex = FaceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMaterial
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ElementIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInterface*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInterface* ULandscapeGizmoRenderComponent::GetMaterial(int ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMaterial");

	ULandscapeGizmoRenderComponent_GetMaterial_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMassScale
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ULandscapeGizmoRenderComponent::GetMassScale(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMassScale");

	ULandscapeGizmoRenderComponent_GetMassScale_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetMass
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ULandscapeGizmoRenderComponent::GetMass()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetMass");

	ULandscapeGizmoRenderComponent_GetMass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetLinearDamping
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ULandscapeGizmoRenderComponent::GetLinearDamping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetLinearDamping");

	ULandscapeGizmoRenderComponent_GetLinearDamping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetInertiaTensor
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::GetInertiaTensor(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetInertiaTensor");

	ULandscapeGizmoRenderComponent_GetInertiaTensor_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionResponseToChannel
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ECollisionChannel> Channel                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ECollisionResponse> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ECollisionResponse> ULandscapeGizmoRenderComponent::GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionResponseToChannel");

	ULandscapeGizmoRenderComponent_GetCollisionResponseToChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionProfileName
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

struct FName ULandscapeGizmoRenderComponent::GetCollisionProfileName()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionProfileName");

	ULandscapeGizmoRenderComponent_GetCollisionProfileName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionObjectType
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ECollisionChannel> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ECollisionChannel> ULandscapeGizmoRenderComponent::GetCollisionObjectType()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionObjectType");

	ULandscapeGizmoRenderComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCollisionEnabled
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TEnumAsByte<ECollisionEnabled> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

TEnumAsByte<ECollisionEnabled> ULandscapeGizmoRenderComponent::GetCollisionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCollisionEnabled");

	ULandscapeGizmoRenderComponent_GetCollisionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetClosestPointOnCollision
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Point                          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 OutPointOnBody                 (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ULandscapeGizmoRenderComponent::GetClosestPointOnCollision(const struct FVector& Point, const struct FName& BoneName, struct FVector* OutPointOnBody)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetClosestPointOnCollision");

	ULandscapeGizmoRenderComponent_GetClosestPointOnCollision_Params params;
	params.Point = Point;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPointOnBody != nullptr)
		*OutPointOnBody = params.OutPointOnBody;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetCenterOfMass
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector ULandscapeGizmoRenderComponent::GetCenterOfMass(const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetCenterOfMass");

	ULandscapeGizmoRenderComponent_GetCenterOfMass_Params params;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.GetAngularDamping
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ULandscapeGizmoRenderComponent::GetAngularDamping()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.GetAngularDamping");

	ULandscapeGizmoRenderComponent_GetAngularDamping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ElementIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInterface*      SourceMaterial                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* ULandscapeGizmoRenderComponent::CreateDynamicMaterialInstance(int ElementIndex, class UMaterialInterface* SourceMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateDynamicMaterialInstance");

	ULandscapeGizmoRenderComponent_CreateDynamicMaterialInstance_Params params;
	params.ElementIndex = ElementIndex;
	params.SourceMaterial = SourceMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ElementIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInterface*      Parent                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* ULandscapeGizmoRenderComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int ElementIndex, class UMaterialInterface* Parent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial");

	ULandscapeGizmoRenderComponent_CreateAndSetMaterialInstanceDynamicFromMaterial_Params params;
	params.ElementIndex = ElementIndex;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ElementIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UMaterialInstanceDynamic* ULandscapeGizmoRenderComponent::CreateAndSetMaterialInstanceDynamic(int ElementIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic");

	ULandscapeGizmoRenderComponent_CreateAndSetMaterialInstanceDynamic_Params params;
	params.ElementIndex = ElementIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class UPrimitiveComponent*> ReturnValue                    (CPF_ExportObject, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class UPrimitiveComponent*> ULandscapeGizmoRenderComponent::CopyArrayOfMoveIgnoreComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents");

	ULandscapeGizmoRenderComponent_CopyArrayOfMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm)

TArray<class AActor*> ULandscapeGizmoRenderComponent::CopyArrayOfMoveIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors");

	ULandscapeGizmoRenderComponent_CopyArrayOfMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ULandscapeGizmoRenderComponent::ClearMoveIgnoreComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ClearMoveIgnoreComponents");

	ULandscapeGizmoRenderComponent_ClearMoveIgnoreComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.ClearMoveIgnoreActors
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ULandscapeGizmoRenderComponent::ClearMoveIgnoreActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.ClearMoveIgnoreActors");

	ULandscapeGizmoRenderComponent_ClearMoveIgnoreActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.CanCharacterStepUp
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class APawn*                   Pawn                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool ULandscapeGizmoRenderComponent::CanCharacterStepUp(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.CanCharacterStepUp");

	ULandscapeGizmoRenderComponent_CanCharacterStepUp_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Engine.PrimitiveComponent.AddTorque
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Torque                         (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAccelChange                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddTorque(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddTorque");

	ULandscapeGizmoRenderComponent_AddTorque_Params params;
	params.Torque = Torque;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialImpulse
// (FUNC_RequiredAPI, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Origin                         (CPF_Parm, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Strength                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff> Falloff                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bVelChange                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddRadialImpulse(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddRadialImpulse");

	ULandscapeGizmoRenderComponent_AddRadialImpulse_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddRadialForce
// (FUNC_RequiredAPI, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Origin                         (CPF_Parm, CPF_IsPlainOldData)
// float                          Radius                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          Strength                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ERadialImpulseFalloff> Falloff                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAccelChange                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddRadialForce(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddRadialForce");

	ULandscapeGizmoRenderComponent_AddRadialForce_Params params;
	params.Origin = Origin;
	params.Radius = Radius;
	params.Strength = Strength;
	params.Falloff = Falloff;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulseAtLocation
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Impulse                        (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddImpulseAtLocation(const struct FVector& Impulse, const struct FVector& Location, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddImpulseAtLocation");

	ULandscapeGizmoRenderComponent_AddImpulseAtLocation_Params params;
	params.Impulse = Impulse;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddImpulse
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Impulse                        (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bVelChange                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddImpulse");

	ULandscapeGizmoRenderComponent_AddImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocationLocal
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 force                          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddForceAtLocationLocal(const struct FVector& force, const struct FVector& Location, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForceAtLocationLocal");

	ULandscapeGizmoRenderComponent_AddForceAtLocationLocal_Params params;
	params.force = force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForceAtLocation
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 force                          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 Location                       (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddForceAtLocation(const struct FVector& force, const struct FVector& Location, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForceAtLocation");

	ULandscapeGizmoRenderComponent_AddForceAtLocation_Params params;
	params.force = force;
	params.Location = Location;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddForce
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 force                          (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bAccelChange                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddForce(const struct FVector& force, const struct FName& BoneName, bool bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddForce");

	ULandscapeGizmoRenderComponent_AddForce_Params params;
	params.force = force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Engine.PrimitiveComponent.AddAngularImpulse
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Impulse                        (CPF_Parm, CPF_IsPlainOldData)
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bVelChange                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ULandscapeGizmoRenderComponent::AddAngularImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function Engine.PrimitiveComponent.AddAngularImpulse");

	ULandscapeGizmoRenderComponent_AddAngularImpulse_Params params;
	params.Impulse = Impulse;
	params.BoneName = BoneName;
	params.bVelChange = bVelChange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.EditorApplySpline
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USplineComponent*        InSplineComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          StartWidth                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndWidth                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartSideFalloff               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndSideFalloff                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartRoll                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndRoll                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumSubdivisions                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRaiseHeights                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bLowerHeights                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULandscapeLayerInfoObject* PaintLayer                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ALandscapeProxy_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InLODDistanceFactor            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ALandscapeProxy_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.EditorApplySpline
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class USplineComponent*        InSplineComponent              (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// float                          StartWidth                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndWidth                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartSideFalloff               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndSideFalloff                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          StartRoll                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          EndRoll                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            NumSubdivisions                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bRaiseHeights                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           bLowerHeights                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class ULandscapeLayerInfoObject* PaintLayer                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscape::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ALandscape_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InLODDistanceFactor            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ALandscape::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ALandscape_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
