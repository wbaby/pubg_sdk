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

// Class RoadRuntime.CrossActor
// 0x0030 (0x0428 - 0x03F8)
class ACrossActor : public AStaticMeshActor
{
public:
	struct FString                                     UniqueKey;                                                // 0x03F8(0x0010) (CPF_ZeroConstructor)
	TArray<struct FCrossActorManager>                  SideActors;                                               // 0x0408(0x0010) (CPF_ZeroConstructor)
	TArray<struct FCrossMeshManager>                   SideMeshes;                                               // 0x0418(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RoadRuntime.CrossActor");
		return ptr;
	}


	void UpdateSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized);
	void UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized);
	void PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized);
	void PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, bool IsEnable, bool IsNormalized);
	void DestroySideObjects();
};


// Class RoadRuntime.RoadActor
// 0x0088 (0x0470 - 0x03E8)
class ARoadActor : public AActor
{
public:
	TEnumAsByte<ESplineMeshAxis>                       SplineMeshAxis;                                           // 0x03E8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03E9(0x0003) MISSED OFFSET
	struct FVector                                     LocalOffset;                                              // 0x03EC(0x000C) (CPF_IsPlainOldData)
	class ARoadActor*                                  Father;                                                   // 0x03F8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FString                                     UniqueKey;                                                // 0x0400(0x0010) (CPF_ZeroConstructor)
	class USplineComponent*                            Spline;                                                   // 0x0410(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                Index;                                                    // 0x0418(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Segmentation;                                             // 0x041C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                StepGeneration;                                           // 0x0420(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Size;                                                     // 0x0424(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 RoadMesh;                                                 // 0x0428(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class USplineMeshComponent*>                RoadMeshesComp;                                           // 0x0430(0x0010) (CPF_ExportObject, CPF_ZeroConstructor)
	TArray<struct FSideActorManager>                   SideActors;                                               // 0x0440(0x0010) (CPF_ZeroConstructor)
	TArray<struct FSideMeshManager>                    SideMeshes;                                               // 0x0450(0x0010) (CPF_ZeroConstructor)
	TArray<struct FCurbsManager>                       SideCurbs;                                                // 0x0460(0x0010) (CPF_ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class RoadRuntime.RoadActor");
		return ptr;
	}


	void UpdateSplineMesh(int MeshIndex);
	void UpdateSideMeshes(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized);
	void UpdateSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized);
	void UpdateSegment(int SegmentIndex, class USplineComponent* SplineComponent, class UStaticMesh* StaticMesh, TEnumAsByte<ESplineMeshAxis> InAxis);
	void PushSideMesh(class UStaticMesh* InPrototype, const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation, const struct FVector& MeshRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized);
	void PushSideActor(class UClass* InPrototype, const struct FVector& ActorRelativeLocation, const struct FRotator& ActorRelativeRotation, const struct FVector& ActorRelativeScale, int SocketIndex, int InShift, int InSpacing, bool IsEnable, bool IsNormalized);
	void PushCurbsMeshes(class UStaticMesh* InPrototype, class UStaticMesh* InStartPrototype, class UStaticMesh* InEndPrototype, const struct FVector& MeshRelativeLocation, const struct FVector& MeshRelativeScale, int SocketIndex, bool IsEnable, bool InStartEnable, bool InEndEnable);
	void DestroySideObjects();
	void DestroySideCurbs();
	void ClearSplineMeshes();
	float ApproxLength(const struct FInterpCurveVector& SplineInfo, float Start, float End, int ApproxSections);
	void AddSplineMesh(int MeshIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
