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

// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// 0x0010 (0x01F0 - 0x01E0)
class UEasyAntiCheatNetComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EasyAntiCheatCommon.EasyAntiCheatNetComponent");
		return ptr;
	}


	void ToggleActive();
	void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	void SetTickableWhenPaused(bool bTickableWhenPaused);
	void SetIsReplicated(bool ShouldReplicate);
	void SetComponentTickInterval(float TickInterval);
	void SetComponentTickEnabled(bool bEnabled);
	void SetAutoActivate(bool bNewAutoActivate);
	void SetActive(bool bNewActive, bool bReset);
	void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ReceiveBeginPlay();
	void OnRep_IsActive();
	void K2_DestroyComponent(class UObject* Object);
	bool IsComponentTickEnabled();
	bool IsBeingDestroyed();
	bool IsActive();
	class AActor* GetOwner();
	float GetComponentTickInterval();
	void Deactivate();
	bool ComponentHasTag(const struct FName& Tag);
	void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	void Activate(bool bReset);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
