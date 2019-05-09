#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterTrail
struct AWeapM1911_C_SimulateUnderwaterTrail_Params
{
	struct FVector                                     SurfaceImpactPoint;                                       // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     ShootDirection;                                           // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              TravelDistance;                                           // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterHit
struct AWeapM1911_C_SimulateUnderwaterHit_Params
{
	struct FVector                                     UnderwaterImpactPoint;                                    // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     ShootOrigin;                                              // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable
struct AWeapM1911_C_SimulateHit_UnReliable_Params
{
	struct FHitResult                                  Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     RelLocation;                                              // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable
struct AWeapM1911_C_SimulateHit_Reliable_Params
{
	struct FHitResult                                  Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     RelLocation;                                              // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.Simulate_CreateAmmoInstance
struct AWeapM1911_C_Simulate_CreateAmmoInstance_Params
{
	struct FVector                                     ServerStartTrace;                                         // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     Dir;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.SetCurrentRecoilValue
struct AWeapM1911_C_SetCurrentRecoilValue_Params
{
	float                                              InCurrent_RecoilValue;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.SetCurrentBullet
struct AWeapM1911_C_SetCurrentBullet_Params
{
	int                                                InCurrent_Bullet;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerWallCheckTest
struct AWeapM1911_C_ServerWallCheckTest_Params
{
	struct FVector                                     TraceStart;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerTestBallistics
struct AWeapM1911_C_ServerTestBallistics_Params
{
	struct FVector                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     OriginDir;                                                // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyHit
struct AWeapM1911_C_ServerNotifyHit_Params
{
	TArray<int>                                        Ints2;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
	uint32_t                                           uintr;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           uinta;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           uintp;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           uintb;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              L3;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              L4;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CR_P;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CR_Y;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<int>                                        Ints;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
	unsigned char                                      h0;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                h1;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                h2;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      uint1;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                chksum1;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                checksum_CD;                                              // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     SI;                                                       // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     L1;                                                       // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     L2;                                                       // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	int                                                LC;                                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	uint16_t                                           Segment;                                                  // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     Dir0;                                                     // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	unsigned char                                      bUnder;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     E1;                                                       // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              S1;                                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     ClientImpactLocation;                                     // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     RelativeImpact;                                           // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FHitResult                                  Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	TArray<int>                                        Ints3;                                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FVector                                     ClientOrigin;                                             // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     Origin;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ShootDir;                                                 // (CPF_Parm)
	float                                              TravelDistance;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (CPF_Parm)
	uint32_t                                           HitSeq;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     RelLocation;                                              // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
	float                                              SpeedLoss;                                                // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OD;                                                       // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	float                                              ts;                                                       // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     IV;                                                       // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyCrack
struct AWeapM1911_C_ServerNotifyCrack_Params
{
	class ATslCharacter*                               TargetCharacter;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector_NetQuantize                         LocationRelative;                                         // (CPF_Parm)
	float                                              BulletVelocity;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ServerNotifyAmmoSpawned
struct AWeapM1911_C_ServerNotifyAmmoSpawned_Params
{
	struct FVector                                     ServerStartTrace;                                         // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     Dir;                                                      // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FAttackId                                   AttackId;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.ServerLogBodyPenetration
struct AWeapM1911_C_ServerLogBodyPenetration_Params
{
	int                                                AttackId;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DamageZone;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageDiff;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.OnWorldOriginShifted
struct AWeapM1911_C_OnWorldOriginShifted_Params
{
	struct FVector                                     InShiftVector;                                            // (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.OnRep_WeaponSpread
struct AWeapM1911_C_OnRep_WeaponSpread_Params
{
	float                                              LastWeaponSpread;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.IsRecoilDebugEnabled_BP
struct AWeapM1911_C_IsRecoilDebugEnabled_BP_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.IsBulletInAir
struct AWeapM1911_C_IsBulletInAir_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetWeaponTrajectoryData
struct AWeapM1911_C_GetWeaponTrajectoryData_Params
{
	class UWeaponTrajectoryData*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetWeaponTrajectoryConfig
struct AWeapM1911_C_GetWeaponTrajectoryConfig_Params
{
	struct FWeaponTrajectoryConfig                     ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.GetTrajectoryConfig
struct AWeapM1911_C_GetTrajectoryConfig_Params
{
	struct FTrajectoryWeaponData                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslWeapon_Trajectory.GetRecoilStartTime
struct AWeapM1911_C_GetRecoilStartTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetRecoilDebugInfo
struct AWeapM1911_C_GetRecoilDebugInfo_Params
{
	struct FRecoilDebugInfo                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function TslGame.TslWeapon_Trajectory.GetRecoilDebugCurrentBullet
struct AWeapM1911_C_GetRecoilDebugCurrentBullet_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetRecoilConfig
struct AWeapM1911_C_GetRecoilConfig_Params
{
	struct FWeaponRecoilConfig                         ReturnValue;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm)
};

// Function TslGame.TslWeapon_Trajectory.GetRecoilBlendInTime
struct AWeapM1911_C_GetRecoilBlendInTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetInertiaPitchAdditive
struct AWeapM1911_C_GetInertiaPitchAdditive_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentStabilityVar
struct AWeapM1911_C_GetCurrentStabilityVar_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentReoveryTarget
struct AWeapM1911_C_GetCurrentReoveryTarget_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilValue
struct AWeapM1911_C_GetCurrentRecoilValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilTarget
struct AWeapM1911_C_GetCurrentRecoilTarget_Params
{
	struct FVector2D                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetBulletRotation
struct AWeapM1911_C_GetBulletRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.GetBulletLocation
struct AWeapM1911_C_GetBulletLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function TslGame.TslWeapon_Trajectory.ClientWallCheckFail
struct AWeapM1911_C_ClientWallCheckFail_Params
{
	struct FVector                                     TraceStart;                                               // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     Impact;                                                   // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
