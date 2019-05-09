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

// Class PhysXVehicles.VehicleAnimInstance
// 0x0560 (0x08F0 - 0x0390)
class UVehicleAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x540];                                     // 0x0390(0x0540) MISSED OFFSET
	class UWheeledVehicleMovementComponent*            WheeledVehicleMovementComponent;                          // 0x08D0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	unsigned char                                      bUseSupsensionInterpolation : 1;                          // 0x08D8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08D9(0x0003) MISSED OFFSET
	float                                              VehicleSuspensionInterpSpeed_ContactUpwards;              // 0x08DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VehicleSuspensionInterpSpeed_Contact;                     // 0x08E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              VehicleSuspensionInterpSpeed_NoContact;                   // 0x08E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x08E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleAnimInstance");
		return ptr;
	}


	class AWheeledVehicle* GetVehicle();
};


// Class PhysXVehicles.WheeledVehicle
// 0x0010 (0x0458 - 0x0448)
class AWheeledVehicle : public APawn
{
public:
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	class UWheeledVehicleMovementComponent*            VehicleMovement;                                          // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicle");
		return ptr;
	}

};


// Class PhysXVehicles.WheeledVehicleMovementComponent
// 0x0190 (0x0400 - 0x0270)
class UWheeledVehicleMovementComponent : public UPawnMovementComponent
{
public:
	unsigned char                                      bDeprecatedSpringOffsetMode : 1;                          // 0x0270(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0271(0x0007) MISSED OFFSET
	TArray<unsigned char>                              TirePunctured;                                            // 0x0278(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FWheelSetup>                         WheelSetups;                                              // 0x0288(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	TArray<struct FVehicleAntiRollbarSetup>            AntirollSetups;                                           // 0x0298(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              Mass;                                                     // 0x02A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DragCoefficient;                                          // 0x02AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChassisWidth;                                             // 0x02B0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChassisHeight;                                            // 0x02B4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bReverseAsBrake : 1;                                      // 0x02B8(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	float                                              DragArea;                                                 // 0x02BC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              EstimatedMaxEngineSpeed;                                  // 0x02C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              MaxEngineRPM;                                             // 0x02C4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugDragMagnitude;                                       // 0x02C8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     InertiaTensorScale;                                       // 0x02CC(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              MinNormalizedTireLoad;                                    // 0x02D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinNormalizedTireLoadFiltered;                            // 0x02DC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxNormalizedTireLoad;                                    // 0x02E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxNormalizedTireLoadFiltered;                            // 0x02E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThresholdLongitudinalSpeed;                               // 0x02E8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                LowForwardSpeedSubStepCount;                              // 0x02EC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                HighForwardSpeedSubStepCount;                             // 0x02F0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02F4(0x0004) MISSED OFFSET
	TArray<class UVehicleWheel*>                       Wheels;                                                   // 0x02F8(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      UnknownData03[0x18];                                      // 0x0308(0x0018) MISSED OFFSET
	unsigned char                                      bUseRVOAvoidance : 1;                                     // 0x0320(0x0001) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	float                                              RVOAvoidanceRadius;                                       // 0x0324(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RVOAvoidanceHeight;                                       // 0x0328(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AvoidanceConsiderationRadius;                             // 0x032C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RVOSteeringStep;                                          // 0x0330(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RVOThrottleStep;                                          // 0x0334(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AvoidanceUID;                                             // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	struct FNavAvoidanceMask                           AvoidanceGroup;                                           // 0x033C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToAvoid;                                            // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FNavAvoidanceMask                           GroupsToIgnore;                                           // 0x0344(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	float                                              AvoidanceWeight;                                          // 0x0348(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PendingLaunchVelocity;                                    // 0x034C(0x000C) (CPF_IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0358(0x0004) MISSED OFFSET
	struct FReplicatedVehicleState                     ReplicatedState;                                          // 0x035C(0x0014) (CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0370(0x0004) MISSED OFFSET
	float                                              RawSteeringInput;                                         // 0x0374(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RawThrottleInput;                                         // 0x0378(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              RawBrakeInput;                                            // 0x037C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      bRawHandbrakeInput : 1;                                   // 0x0380(0x0001) (CPF_Transient)
	unsigned char                                      bRawGearUpInput : 1;                                      // 0x0380(0x0001) (CPF_Transient)
	unsigned char                                      bRawGearDownInput : 1;                                    // 0x0380(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	float                                              LastForwardInput;                                         // 0x0384(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LastRightInput;                                           // 0x0388(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LastHandbrakeInput;                                       // 0x038C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                LastGear;                                                 // 0x0390(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SteeringInput;                                            // 0x0394(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0398(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              BrakeInput;                                               // 0x039C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              HandbrakeInput;                                           // 0x03A0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              IdleBrakeInput;                                           // 0x03A4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StopThreshold;                                            // 0x03A8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              WrongDirectionThreshold;                                  // 0x03AC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVehicleInputRate                           ThrottleInputRate;                                        // 0x03B0(0x0008) (CPF_Edit)
	struct FVehicleInputRate                           BrakeInputRate;                                           // 0x03B8(0x0008) (CPF_Edit)
	struct FVehicleInputRate                           HandbrakeInputRate;                                       // 0x03C0(0x0008) (CPF_Edit)
	struct FVehicleInputRate                           SteeringInputRate;                                        // 0x03C8(0x0008) (CPF_Edit)
	unsigned char                                      bWasAvoidanceUpdated : 1;                                 // 0x03D0(0x0001) (CPF_Transient)
	unsigned char                                      UnknownData08[0x2F];                                      // 0x03D1(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent");
		return ptr;
	}


	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear, uint32_t Checksum);
	void OnRep_TirePunctured(TArray<unsigned char> LastTirePunctured);
	bool GetUseAutoGears();
	int GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int GetCurrentGear();
};


// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// 0x0160 (0x0560 - 0x0400)
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0400(0x0088) MISSED OFFSET
	struct FVehicleDifferential4WData                  DifferentialSetup;                                        // 0x0488(0x001C) (CPF_Edit)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	struct FVehicleTransmissionData                    TransmissionSetup;                                        // 0x04A8(0x0030) (CPF_Edit)
	struct FRuntimeFloatCurve                          SteeringCurve;                                            // 0x04D8(0x0078) (CPF_Edit)
	float                                              AckermannAccuracy;                                        // 0x0550(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0554(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.WheeledVehicleMovementComponent4W");
		return ptr;
	}

};


// Class PhysXVehicles.VehicleWheel
// 0x00F8 (0x0120 - 0x0028)
class UVehicleWheel : public UObject
{
public:
	class UStaticMesh*                                 CollisionMesh;                                            // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bDontCreateShape : 1;                                     // 0x0030(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      bAutoAdjustCollisionSize : 1;                             // 0x0031(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FVector                                     Offset;                                                   // 0x0034(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              ShapeRadius;                                              // 0x0040(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ShapeWidth;                                               // 0x0044(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Mass;                                                     // 0x0048(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRate;                                              // 0x004C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SteerAngle;                                               // 0x0050(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bAffectedByHandbrake : 1;                                 // 0x0054(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	class UTireType*                                   TireType;                                                 // 0x0058(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTireConfig*                                 TireConfig;                                               // 0x0060(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LatStiffMaxLoad;                                          // 0x0068(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LatStiffValue;                                            // 0x006C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LongStiffValue;                                           // 0x0070(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionForceOffset;                                    // 0x0074(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionForceOffsetX;                                   // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SuspensionTravelDir;                                      // 0x007C(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	struct FVector                                     TireForceOffset;                                          // 0x0088(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	float                                              SuspensionMaxRaise;                                       // 0x0094(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionMaxDrop;                                        // 0x0098(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionNaturalFrequency;                               // 0x009C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspensionDampingRatio;                                   // 0x00A0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FWheelDetailedConfig                        WheelDetailedConfig;                                      // 0x00A4(0x0014) (CPF_Edit)
	float                                              MaxBrakeTorque;                                           // 0x00B8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxHandBrakeTorque;                                       // 0x00BC(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     QueryChannel;                                             // 0x00C0(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	class UWheeledVehicleMovementComponent*            VehicleSim;                                               // 0x00C8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	int                                                WheelIndex;                                               // 0x00D0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugLongSlip;                                            // 0x00D4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugLatSlip;                                             // 0x00D8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugNormalizedTireLoad;                                  // 0x00DC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00E0(0x0004) MISSED OFFSET
	float                                              DebugWheelTorque;                                         // 0x00E4(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugLongForce;                                           // 0x00E8(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              DebugLatForce;                                            // 0x00EC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x00F0(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     OldLocation;                                              // 0x00FC(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0108(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	float                                              RealWheelRotationSpeed;                                   // 0x0114(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.VehicleWheel");
		return ptr;
	}


	bool IsInAir();
	float GetSuspensionOffset();
	float GetSteerAngle();
	float GetRotationAngle();
	float GetLongitudinalSlip();
	float GetLateralSlip();
};


// Class PhysXVehicles.TireConfig
// 0x0050 (0x0080 - 0x0030)
class UTireConfig : public UDataAsset
{
public:
	float                                              FrictionScale;                                            // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FTireConfigMaterialFriction>         TireFrictionScales;                                       // 0x0038(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTireConfigFrictionVsSlipGraph              FrictionVsSlipConfig;                                     // 0x0050(0x0028) (CPF_Edit)
	unsigned char                                      bOverrideCamberStiffness : 1;                             // 0x0078(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	float                                              CamberStiffnessOverride;                                  // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.TireConfig");
		return ptr;
	}

};


// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// 0x0000 (0x0400 - 0x0400)
class USimpleWheeledVehicleMovementComponent : public UWheeledVehicleMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PhysXVehicles.SimpleWheeledVehicleMovementComponent");
		return ptr;
	}


	void SetUseAutoGears(bool bUseAuto);
	void SetThrottleInput(float Throttle);
	void SetTargetGear(int GearNum, bool bImmediate);
	void SetSteeringInput(float Steering);
	void SetHandbrakeInput(bool bNewHandbrake);
	void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToIgnore(int GroupFlags);
	void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	void SetGroupsToAvoid(int GroupFlags);
	void SetGearUp(bool bNewGearUp);
	void SetGearDown(bool bNewGearDown);
	void SetBrakeInput(float Brake);
	void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	void SetAvoidanceGroup(int GroupFlags);
	void SetAvoidanceEnabled(bool bEnable);
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int CurrentGear, uint32_t Checksum);
	void OnRep_TirePunctured(TArray<unsigned char> LastTirePunctured);
	bool GetUseAutoGears();
	int GetTargetGear();
	float GetForwardSpeed();
	float GetEngineRotationSpeed();
	float GetEngineMaxRotationSpeed();
	int GetCurrentGear();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
