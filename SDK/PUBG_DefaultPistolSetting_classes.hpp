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

// BlueprintGeneratedClass DefaultPistolSetting.DefaultPistolSetting_C
// 0x0000 (0x0E00 - 0x0E00)
class ADefaultPistolSetting_C : public ATslWeapon_Trajectory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultPistolSetting.DefaultPistolSetting_C");
		return ptr;
	}


	void SimulateUnderwaterTrail(const struct FVector& SurfaceImpactPoint, const struct FVector& ShootDirection, float TravelDistance);
	void SimulateUnderwaterHit(const struct FVector& UnderwaterImpactPoint, const struct FVector& ShootOrigin);
	void SimulateHit_UnReliable(const struct FHitResult& Impact, const struct FVector& RelLocation);
	void SimulateHit_Reliable(const struct FHitResult& Impact, const struct FVector& RelLocation);
	void Simulate_CreateAmmoInstance(const struct FVector& ServerStartTrace, const struct FVector& Dir, const struct FAttackId& AttackId);
	void SetCurrentRecoilValue(float InCurrent_RecoilValue);
	void SetCurrentBullet(int InCurrent_Bullet);
	void ServerWallCheckTest(const struct FVector& TraceStart, const struct FVector& TraceEnd);
	void ServerTestBallistics(const struct FVector& Origin, const struct FVector& OriginDir);
	void ServerNotifyHit(TArray<int> Ints2, uint32_t uintr, uint32_t uinta, uint32_t uintp, uint32_t uintb, float L3, float L4, float CR_P, float CR_Y, TArray<int> Ints, unsigned char h0, int h1, int h2, unsigned char uint1, int chksum1, int checksum_CD, const struct FVector& SI, const struct FVector& L1, const struct FVector& L2, int LC, uint16_t Segment, const struct FVector& Dir0, unsigned char bUnder, const struct FVector& E1, float S1, const struct FVector& ClientImpactLocation, const struct FVector& RelativeImpact, const struct FHitResult& Impact, TArray<int> Ints3, const struct FVector& ClientOrigin, const struct FVector& Origin, const struct FVector& TraceStart, const struct FVector_NetQuantizeNormal& ShootDir, float TravelDistance, const struct FAttackId& AttackId, uint32_t HitSeq, const struct FVector& RelLocation, float SpeedLoss, const struct FVector& OD, float ts, const struct FVector& IV);
	void ServerNotifyCrack(class ATslCharacter* TargetCharacter, const struct FVector_NetQuantize& LocationRelative, float BulletVelocity);
	void ServerNotifyAmmoSpawned(const struct FVector& ServerStartTrace, const struct FVector& Dir, const struct FAttackId& AttackId);
	void ServerLogBodyPenetration(int AttackId, const struct FName& DamageZone, float DamageDiff);
	void OnWorldOriginShifted(const struct FVector& InShiftVector);
	void OnRep_WeaponSpread(float LastWeaponSpread);
	bool IsRecoilDebugEnabled_BP();
	bool IsBulletInAir();
	class UWeaponTrajectoryData* GetWeaponTrajectoryData();
	struct FWeaponTrajectoryConfig GetWeaponTrajectoryConfig();
	struct FTrajectoryWeaponData GetTrajectoryConfig();
	float GetRecoilStartTime();
	struct FRecoilDebugInfo GetRecoilDebugInfo();
	int GetRecoilDebugCurrentBullet();
	struct FWeaponRecoilConfig GetRecoilConfig();
	float GetRecoilBlendInTime();
	float GetInertiaPitchAdditive();
	float GetCurrentStabilityVar();
	float GetCurrentReoveryTarget();
	float GetCurrentRecoilValue();
	struct FVector2D GetCurrentRecoilTarget();
	struct FRotator GetBulletRotation();
	struct FVector GetBulletLocation();
	void ClientWallCheckFail(const struct FVector& TraceStart, const struct FVector& TraceEnd, const struct FVector& Impact);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
