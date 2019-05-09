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

// Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterTrail
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 SurfaceImpactPoint             (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ShootDirection                 (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          TravelDistance                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeapM1911_C::SimulateUnderwaterTrail(const struct FVector& SurfaceImpactPoint, const struct FVector& ShootDirection, float TravelDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterTrail");

	AWeapM1911_C_SimulateUnderwaterTrail_Params params;
	params.SurfaceImpactPoint = SurfaceImpactPoint;
	params.ShootDirection = ShootDirection;
	params.TravelDistance = TravelDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterHit
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 UnderwaterImpactPoint          (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ShootOrigin                    (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AWeapM1911_C::SimulateUnderwaterHit(const struct FVector& UnderwaterImpactPoint, const struct FVector& ShootOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.SimulateUnderwaterHit");

	AWeapM1911_C_SimulateUnderwaterHit_Params params;
	params.UnderwaterImpactPoint = UnderwaterImpactPoint;
	params.ShootOrigin = ShootOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable
// (FUNC_BlueprintAuthorityOnly, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FHitResult              Impact                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 RelLocation                    (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)

void AWeapM1911_C::SimulateHit_UnReliable(const struct FHitResult& Impact, const struct FVector& RelLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.SimulateHit_UnReliable");

	AWeapM1911_C_SimulateHit_UnReliable_Params params;
	params.Impact = Impact;
	params.RelLocation = RelLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable
// (FUNC_BlueprintAuthorityOnly, FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FHitResult              Impact                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 RelLocation                    (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)

void AWeapM1911_C::SimulateHit_Reliable(const struct FHitResult& Impact, const struct FVector& RelLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.SimulateHit_Reliable");

	AWeapM1911_C_SimulateHit_Reliable_Params params;
	params.Impact = Impact;
	params.RelLocation = RelLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.Simulate_CreateAmmoInstance
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ServerStartTrace               (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Dir                            (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FAttackId               AttackId                       (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void AWeapM1911_C::Simulate_CreateAmmoInstance(const struct FVector& ServerStartTrace, const struct FVector& Dir, const struct FAttackId& AttackId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.Simulate_CreateAmmoInstance");

	AWeapM1911_C_Simulate_CreateAmmoInstance_Params params;
	params.ServerStartTrace = ServerStartTrace;
	params.Dir = Dir;
	params.AttackId = AttackId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SetCurrentRecoilValue
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          InCurrent_RecoilValue          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeapM1911_C::SetCurrentRecoilValue(float InCurrent_RecoilValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.SetCurrentRecoilValue");

	AWeapM1911_C_SetCurrentRecoilValue_Params params;
	params.InCurrent_RecoilValue = InCurrent_RecoilValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.SetCurrentBullet
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            InCurrent_Bullet               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeapM1911_C::SetCurrentBullet(int InCurrent_Bullet)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.SetCurrentBullet");

	AWeapM1911_C_SetCurrentBullet_Params params;
	params.InCurrent_Bullet = InCurrent_Bullet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerWallCheckTest
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 TraceStart                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 TraceEnd                       (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AWeapM1911_C::ServerWallCheckTest(const struct FVector& TraceStart, const struct FVector& TraceEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.ServerWallCheckTest");

	AWeapM1911_C_ServerWallCheckTest_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerTestBallistics
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 Origin                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 OriginDir                      (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AWeapM1911_C::ServerTestBallistics(const struct FVector& Origin, const struct FVector& OriginDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.ServerTestBallistics");

	AWeapM1911_C_ServerTestBallistics_Params params;
	params.Origin = Origin;
	params.OriginDir = OriginDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerNotifyHit
// (FUNC_Net, FUNC_NetReliable, FUNC_NetRequest, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// TArray<int>                    Ints2                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
// uint32_t                       uintr                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// uint32_t                       uinta                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// uint32_t                       uintp                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// uint32_t                       uintb                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          L3                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          L4                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CR_P                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          CR_Y                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// TArray<int>                    Ints                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
// unsigned char                  h0                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            h1                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            h2                             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// unsigned char                  uint1                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            chksum1                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// int                            checksum_CD                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 SI                             (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 L1                             (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 L2                             (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// int                            LC                             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// uint16_t                       Segment                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Dir0                           (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// unsigned char                  bUnder                         (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 E1                             (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          S1                             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 ClientImpactLocation           (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 RelativeImpact                 (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FHitResult              Impact                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// TArray<int>                    Ints3                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm)
// struct FVector                 ClientOrigin                   (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Origin                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 TraceStart                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector_NetQuantizeNormal ShootDir                       (CPF_Parm)
// float                          TravelDistance                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FAttackId               AttackId                       (CPF_Parm)
// uint32_t                       HitSeq                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 RelLocation                    (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)
// float                          SpeedLoss                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector                 OD                             (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// float                          ts                             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 IV                             (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AWeapM1911_C::ServerNotifyHit(TArray<int> Ints2, uint32_t uintr, uint32_t uinta, uint32_t uintp, uint32_t uintb, float L3, float L4, float CR_P, float CR_Y, TArray<int> Ints, unsigned char h0, int h1, int h2, unsigned char uint1, int chksum1, int checksum_CD, const struct FVector& SI, const struct FVector& L1, const struct FVector& L2, int LC, uint16_t Segment, const struct FVector& Dir0, unsigned char bUnder, const struct FVector& E1, float S1, const struct FVector& ClientImpactLocation, const struct FVector& RelativeImpact, const struct FHitResult& Impact, TArray<int> Ints3, const struct FVector& ClientOrigin, const struct FVector& Origin, const struct FVector& TraceStart, const struct FVector_NetQuantizeNormal& ShootDir, float TravelDistance, const struct FAttackId& AttackId, uint32_t HitSeq, const struct FVector& RelLocation, float SpeedLoss, const struct FVector& OD, float ts, const struct FVector& IV)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.ServerNotifyHit");

	AWeapM1911_C_ServerNotifyHit_Params params;
	params.Ints2 = Ints2;
	params.uintr = uintr;
	params.uinta = uinta;
	params.uintp = uintp;
	params.uintb = uintb;
	params.L3 = L3;
	params.L4 = L4;
	params.CR_P = CR_P;
	params.CR_Y = CR_Y;
	params.Ints = Ints;
	params.h0 = h0;
	params.h1 = h1;
	params.h2 = h2;
	params.uint1 = uint1;
	params.chksum1 = chksum1;
	params.checksum_CD = checksum_CD;
	params.SI = SI;
	params.L1 = L1;
	params.L2 = L2;
	params.LC = LC;
	params.Segment = Segment;
	params.Dir0 = Dir0;
	params.bUnder = bUnder;
	params.E1 = E1;
	params.S1 = S1;
	params.ClientImpactLocation = ClientImpactLocation;
	params.RelativeImpact = RelativeImpact;
	params.Impact = Impact;
	params.Ints3 = Ints3;
	params.ClientOrigin = ClientOrigin;
	params.Origin = Origin;
	params.TraceStart = TraceStart;
	params.ShootDir = ShootDir;
	params.TravelDistance = TravelDistance;
	params.AttackId = AttackId;
	params.HitSeq = HitSeq;
	params.RelLocation = RelLocation;
	params.SpeedLoss = SpeedLoss;
	params.OD = OD;
	params.ts = ts;
	params.IV = IV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerNotifyCrack
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class ATslCharacter*           TargetCharacter                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FVector_NetQuantize     LocationRelative               (CPF_Parm)
// float                          BulletVelocity                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeapM1911_C::ServerNotifyCrack(class ATslCharacter* TargetCharacter, const struct FVector_NetQuantize& LocationRelative, float BulletVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.ServerNotifyCrack");

	AWeapM1911_C_ServerNotifyCrack_Params params;
	params.TargetCharacter = TargetCharacter;
	params.LocationRelative = LocationRelative;
	params.BulletVelocity = BulletVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerNotifyAmmoSpawned
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ServerStartTrace               (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Dir                            (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FAttackId               AttackId                       (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)

void AWeapM1911_C::ServerNotifyAmmoSpawned(const struct FVector& ServerStartTrace, const struct FVector& Dir, const struct FAttackId& AttackId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.ServerNotifyAmmoSpawned");

	AWeapM1911_C_ServerNotifyAmmoSpawned_Params params;
	params.ServerStartTrace = ServerStartTrace;
	params.Dir = Dir;
	params.AttackId = AttackId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.ServerLogBodyPenetration
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            AttackId                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// struct FName                   DamageZone                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
// float                          DamageDiff                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeapM1911_C::ServerLogBodyPenetration(int AttackId, const struct FName& DamageZone, float DamageDiff)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.ServerLogBodyPenetration");

	AWeapM1911_C_ServerLogBodyPenetration_Params params;
	params.AttackId = AttackId;
	params.DamageZone = DamageZone;
	params.DamageDiff = DamageDiff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.OnWorldOriginShifted
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 InShiftVector                  (CPF_ConstParm, CPF_Parm, CPF_IsPlainOldData)

void AWeapM1911_C::OnWorldOriginShifted(const struct FVector& InShiftVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.OnWorldOriginShifted");

	AWeapM1911_C_OnWorldOriginShifted_Params params;
	params.InShiftVector = InShiftVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.OnRep_WeaponSpread
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          LastWeaponSpread               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void AWeapM1911_C::OnRep_WeaponSpread(float LastWeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.OnRep_WeaponSpread");

	AWeapM1911_C_OnRep_WeaponSpread_Params params;
	params.LastWeaponSpread = LastWeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGame.TslWeapon_Trajectory.IsRecoilDebugEnabled_BP
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AWeapM1911_C::IsRecoilDebugEnabled_BP()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.IsRecoilDebugEnabled_BP");

	AWeapM1911_C_IsRecoilDebugEnabled_BP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.IsBulletInAir
// (FUNC_Final, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

bool AWeapM1911_C::IsBulletInAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.IsBulletInAir");

	AWeapM1911_C_IsBulletInAir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetWeaponTrajectoryData
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// class UWeaponTrajectoryData*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

class UWeaponTrajectoryData* AWeapM1911_C::GetWeaponTrajectoryData()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetWeaponTrajectoryData");

	AWeapM1911_C_GetWeaponTrajectoryData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetWeaponTrajectoryConfig
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FWeaponTrajectoryConfig ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm)

struct FWeaponTrajectoryConfig AWeapM1911_C::GetWeaponTrajectoryConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetWeaponTrajectoryConfig");

	AWeapM1911_C_GetWeaponTrajectoryConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetTrajectoryConfig
// (FUNC_Net, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FTrajectoryWeaponData   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FTrajectoryWeaponData AWeapM1911_C::GetTrajectoryConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetTrajectoryConfig");

	AWeapM1911_C_GetTrajectoryConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetRecoilStartTime
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AWeapM1911_C::GetRecoilStartTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetRecoilStartTime");

	AWeapM1911_C_GetRecoilStartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetRecoilDebugInfo
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRecoilDebugInfo        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FRecoilDebugInfo AWeapM1911_C::GetRecoilDebugInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetRecoilDebugInfo");

	AWeapM1911_C_GetRecoilDebugInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetRecoilDebugCurrentBullet
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

int AWeapM1911_C::GetRecoilDebugCurrentBullet()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetRecoilDebugCurrentBullet");

	AWeapM1911_C_GetRecoilDebugCurrentBullet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetRecoilConfig
// (FUNC_NetReliable, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FWeaponRecoilConfig     ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm)

struct FWeaponRecoilConfig AWeapM1911_C::GetRecoilConfig()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetRecoilConfig");

	AWeapM1911_C_GetRecoilConfig_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetRecoilBlendInTime
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AWeapM1911_C::GetRecoilBlendInTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetRecoilBlendInTime");

	AWeapM1911_C_GetRecoilBlendInTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetInertiaPitchAdditive
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AWeapM1911_C::GetInertiaPitchAdditive()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetInertiaPitchAdditive");

	AWeapM1911_C_GetInertiaPitchAdditive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetCurrentStabilityVar
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AWeapM1911_C::GetCurrentStabilityVar()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetCurrentStabilityVar");

	AWeapM1911_C_GetCurrentStabilityVar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetCurrentReoveryTarget
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AWeapM1911_C::GetCurrentReoveryTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetCurrentReoveryTarget");

	AWeapM1911_C_GetCurrentReoveryTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilValue
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)

float AWeapM1911_C::GetCurrentRecoilValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilValue");

	AWeapM1911_C_GetCurrentRecoilValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilTarget
// (FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector2D AWeapM1911_C::GetCurrentRecoilTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetCurrentRecoilTarget");

	AWeapM1911_C_GetCurrentRecoilTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetBulletRotation
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FRotator AWeapM1911_C::GetBulletRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetBulletRotation");

	AWeapM1911_C_GetBulletRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.GetBulletLocation
// (FUNC_BlueprintAuthorityOnly, FUNC_BlueprintCosmetic, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)

struct FVector AWeapM1911_C::GetBulletLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.GetBulletLocation");

	AWeapM1911_C_GetBulletLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TslGame.TslWeapon_Trajectory.ClientWallCheckFail
// (FUNC_BlueprintAuthorityOnly, FUNC_MulticastDelegate, FUNC_Public, FUNC_Private, FUNC_Protected, FUNC_Delegate, FUNC_NetServer, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_NetClient, FUNC_DLLImport, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const, FUNC_NetValidate)
// Parameters:
// struct FVector                 TraceStart                     (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 TraceEnd                       (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)
// struct FVector                 Impact                         (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm, CPF_IsPlainOldData)

void AWeapM1911_C::ClientWallCheckFail(const struct FVector& TraceStart, const struct FVector& TraceEnd, const struct FVector& Impact)
{
	static auto fn = UObject::FindObject<UFunction>("Function TslGame.TslWeapon_Trajectory.ClientWallCheckFail");

	AWeapM1911_C_ClientWallCheckFail_Params params;
	params.TraceStart = TraceStart;
	params.TraceEnd = TraceEnd;
	params.Impact = Impact;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
