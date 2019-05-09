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

// Class GameplayTasks.GameplayTask
// 0x0040 (0x0068 - 0x0028)
class UGameplayTask : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FName                                       InstanceName;                                             // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0038(0x0002) MISSED OFFSET
	unsigned char                                      UnknownData02[0x1];                                       // 0x0038(0x0001) UNKNOWN PROPERTY: EnumProperty GameplayTasks.GameplayTask.ResourceOverlapPolicy
	unsigned char                                      UnknownData03[0x25];                                      // 0x003B(0x0025) MISSED OFFSET
	class UGameplayTask*                               ChildTask;                                                // 0x0060(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask");
		return ptr;
	}


	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};


// Class GameplayTasks.GameplayTaskOwnerInterface
// 0x0000 (0x0028 - 0x0028)
class UGameplayTaskOwnerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskOwnerInterface");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTaskResource
// 0x0010 (0x0038 - 0x0028)
class UGameplayTaskResource : public UObject
{
public:
	int                                                ManualResourceID;                                         // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Config, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int8_t                                             AutoResourceID;                                           // 0x002C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	unsigned char                                      bManuallySetID : 1;                                       // 0x0030(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTaskResource");
		return ptr;
	}

};


// Class GameplayTasks.GameplayTask_ClaimResource
// 0x0000 (0x0068 - 0x0068)
class UGameplayTask_ClaimResource : public UGameplayTask
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_ClaimResource");
		return ptr;
	}


	void ReadyForActivation();
	void GenericGameplayTaskDelegate__DelegateSignature();
	void EndTask();
};


// Class GameplayTasks.GameplayTask_SpawnActor
// 0x0040 (0x00A8 - 0x0068)
class UGameplayTask_SpawnActor : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    SUCCESS;                                                  // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                              // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0088(0x0018) MISSED OFFSET
	class UClass*                                      ClassToSpawn;                                             // 0x00A0(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_SpawnActor");
		return ptr;
	}


	class UGameplayTask_SpawnActor* SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* Class, bool bSpawnOnlyOnAuthority);
	void FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor);
};


// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// 0x0030 (0x0098 - 0x0068)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTimeExpired;                                            // 0x0078(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0088(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_TimeLimitedExecution");
		return ptr;
	}


	void TaskFinishDelegate__DelegateSignature();
};


// Class GameplayTasks.GameplayTask_WaitDelay
// 0x0018 (0x0080 - 0x0068)
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                 // 0x0068(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTask_WaitDelay");
		return ptr;
	}


	class UGameplayTask_WaitDelay* TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority);
	void TaskDelayDelegate__DelegateSignature();
};


// Class GameplayTasks.GameplayTasksComponent
// 0x0070 (0x0250 - 0x01E0)
class UGameplayTasksComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET
	TArray<class UGameplayTask*>                       SimulatedTasks;                                           // 0x01E8(0x0010) (CPF_Net, CPF_ZeroConstructor)
	TArray<class UGameplayTask*>                       TaskPriorityQueue;                                        // 0x01F8(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0208(0x0010) MISSED OFFSET
	TArray<class UGameplayTask*>                       TickingTasks;                                             // 0x0218(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0228(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnClaimedResourcesChange;                                 // 0x0230(0x0010) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTasks.GameplayTasksComponent");
		return ptr;
	}


	void OnRep_SimulatedTasks();
	void K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
