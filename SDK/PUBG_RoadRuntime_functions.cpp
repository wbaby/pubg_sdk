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

// Function RoadRuntime.CrossActor.UpdateSideMesh
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeScale              (CPF_Parm, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACrossActor::UpdateSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.UpdateSideMesh");

	ACrossActor_UpdateSideMesh_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.UpdateSideActor
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ActorRelativeScale             (CPF_Parm, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACrossActor::UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.UpdateSideActor");

	ACrossActor_UpdateSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.ActorRelativeScale = ActorRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.PushSideMesh
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeScale              (CPF_Parm, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACrossActor::PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.PushSideMesh");

	ACrossActor_PushSideMesh_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.PushSideActor
// (FUNC_RequiredAPI, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ActorRelativeScale             (CPF_Parm, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ACrossActor::PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.PushSideActor");

	ACrossActor_PushSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.ActorRelativeScale = ActorRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.CrossActor.DestroySideObjects
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ACrossActor::DestroySideObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.CrossActor.DestroySideObjects");

	ACrossActor_DestroySideObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSplineMesh
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MeshIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::UpdateSplineMesh(int MeshIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSplineMesh");

	ARoadActor_UpdateSplineMesh_Params params;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSideMeshes
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeScale              (CPF_Parm, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InShift                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSpacing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::UpdateSideMeshes(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSideMeshes");

	ARoadActor_UpdateSideMeshes_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSideActor
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ActorRelativeScale             (CPF_Parm, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InShift                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSpacing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSideActor");

	ARoadActor_UpdateSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.ActorRelativeScale = ActorRelativeScale;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.UpdateSegment
// (FUNC_Final, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            SegmentIndex                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class USplineComponent*        SplineComponent                (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
// class UStaticMesh*             StaticMesh                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TEnumAsByte<ESplineMeshAxis>   InAxis                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::UpdateSegment(int SegmentIndex, class USplineComponent* SplineComponent, class UStaticMesh* StaticMesh, TEnumAsByte<ESplineMeshAxis> InAxis)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.UpdateSegment");

	ARoadActor_UpdateSegment_Params params;
	params.SegmentIndex = SegmentIndex;
	params.SplineComponent = SplineComponent;
	params.StaticMesh = StaticMesh;
	params.InAxis = InAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushSideMesh
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                MeshRelativeRotation           (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeScale              (CPF_Parm, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InShift                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSpacing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushSideMesh");

	ARoadActor_PushSideMesh_Params params;
	params.InPrototype = InPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeRotation = MeshRelativeRotation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushSideActor
// (FUNC_RequiredAPI, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UClass*                  InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 ActorRelativeLocation          (CPF_Parm, CPF_IsPlainOldData)
// struct FRotator                ActorRelativeRotation          (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 ActorRelativeScale             (CPF_Parm, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InShift                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            InSpacing                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsNormalized                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushSideActor");

	ARoadActor_PushSideActor_Params params;
	params.InPrototype = InPrototype;
	params.ActorRelativeLocation = ActorRelativeLocation;
	params.ActorRelativeRotation = ActorRelativeRotation;
	params.ActorRelativeScale = ActorRelativeScale;
	params.SocketIndex = SocketIndex;
	params.InShift = InShift;
	params.InSpacing = InSpacing;
	params.IsEnable = IsEnable;
	params.IsNormalized = IsNormalized;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.PushCurbsMeshes
// (FUNC_Final, FUNC_RequiredAPI, FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UStaticMesh*             InPrototype                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UStaticMesh*             InStartPrototype               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// class UStaticMesh*             InEndPrototype                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeLocation           (CPF_Parm, CPF_IsPlainOldData)
// struct FVector                 MeshRelativeScale              (CPF_Parm, CPF_IsPlainOldData)
// int                            SocketIndex                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           IsEnable                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InStartEnable                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// bool                           InEndEnable                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::PushCurbsMeshes(class UStaticMesh* InPrototype, class UStaticMesh* InStartPrototype, class UStaticMesh* InEndPrototype, const struct FVector& MeshRelativeLocation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool InStartEnable, bool InEndEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.PushCurbsMeshes");

	ARoadActor_PushCurbsMeshes_Params params;
	params.InPrototype = InPrototype;
	params.InStartPrototype = InStartPrototype;
	params.InEndPrototype = InEndPrototype;
	params.MeshRelativeLocation = MeshRelativeLocation;
	params.MeshRelativeScale = MeshRelativeScale;
	params.SocketIndex = SocketIndex;
	params.IsEnable = IsEnable;
	params.InStartEnable = InStartEnable;
	params.InEndEnable = InEndEnable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.DestroySideObjects
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ARoadActor::DestroySideObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.DestroySideObjects");

	ARoadActor_DestroySideObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.DestroySideCurbs
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ARoadActor::DestroySideCurbs()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.DestroySideCurbs");

	ARoadActor_DestroySideCurbs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.ClearSplineMeshes
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)

void ARoadActor::ClearSplineMeshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.ClearSplineMeshes");

	ARoadActor_ClearSplineMeshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RoadRuntime.RoadActor.ApproxLength
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FInterpCurveVector      SplineInfo                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// float                          Start                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          End                            (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            ApproxSections                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float ARoadActor::ApproxLength(const struct FInterpCurveVector& SplineInfo, float Start, float End, int ApproxSections)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.ApproxLength");

	ARoadActor_ApproxLength_Params params;
	params.SplineInfo = SplineInfo;
	params.Start = Start;
	params.End = End;
	params.ApproxSections = ApproxSections;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RoadRuntime.RoadActor.AddSplineMesh
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            MeshIndex                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ARoadActor::AddSplineMesh(int MeshIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function RoadRuntime.RoadActor.AddSplineMesh");

	ARoadActor_AddSplineMesh_Params params;
	params.MeshIndex = MeshIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
