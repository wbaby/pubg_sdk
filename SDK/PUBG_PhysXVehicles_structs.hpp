#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W
{
	EVehicleDifferential4W__LimitedSlip_4W = 0,
	EVehicleDifferential4W__LimitedSlip_FrontDrive = 1,
	EVehicleDifferential4W__LimitedSlip_RearDrive = 2,
	EVehicleDifferential4W__Open_4W = 3,
	EVehicleDifferential4W__Open_FrontDrive = 4,
	EVehicleDifferential4W__Open_RearDrive = 5,
	EVehicleDifferential4W__EVehicleDifferential4W_MAX = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct PhysXVehicles.WheelSetup
// 0x0030
struct FWheelSetup
{
	class UClass*                                      WheelClass;                                               // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      PuncturedWheelClass;                                      // 0x0008(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      DefaultWheelClass;                                        // 0x0010(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0018(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     AdditionalOffset;                                         // 0x0020(0x000C) (CPF_Edit, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleAntiRollbarSetup
// 0x000C
struct FVehicleAntiRollbarSetup
{
	uint32_t                                           Wheel0;                                                   // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	uint32_t                                           Wheel1;                                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Stiffness;                                                // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.ReplicatedVehicleState
// 0x0014
struct FReplicatedVehicleState
{
	float                                              SteeringInput;                                            // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ThrottleInput;                                            // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BrakeInput;                                               // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HandbrakeInput;                                           // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentGear;                                              // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleInputRate
// 0x0008
struct FVehicleInputRate
{
	float                                              RiseRate;                                                 // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FallRate;                                                 // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleEngineData
// 0x0090
struct FVehicleEngineData
{
	struct FRuntimeFloatCurve                          TorqueCurve;                                              // 0x0000(0x0078) (CPF_Edit)
	float                                              MaxRPM;                                                   // 0x0078(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MOI;                                                      // 0x007C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRateFullThrottle;                                  // 0x0080(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchEngaged;                     // 0x0084(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DampingRateZeroThrottleClutchDisengaged;                  // 0x0088(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleDifferential4WData
// 0x001C
struct FVehicleDifferential4WData
{
	TEnumAsByte<EVehicleDifferential4W>                DifferentialType;                                         // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FrontRearSplit;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrontLeftRightSplit;                                      // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RearLeftRightSplit;                                       // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CentreBias;                                               // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrontBias;                                                // 0x0014(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RearBias;                                                 // 0x0018(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleGearData
// 0x000C
struct FVehicleGearData
{
	float                                              Ratio;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DownRatio;                                                // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              UpRatio;                                                  // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
// 0x0030
struct FVehicleTransmissionData
{
	unsigned char                                      bUseGearAutoBox : 1;                                      // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GearSwitchTime;                                           // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GearAutoBoxLatency;                                       // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FinalRatio;                                               // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FVehicleGearData>                    ForwardGears;                                             // 0x0010(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	float                                              ReverseGearRatio;                                         // 0x0020(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NeutralGearUpRatio;                                       // 0x0024(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClutchStrength;                                           // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.WheelDetailedConfig
// 0x0014
struct FWheelDetailedConfig
{
	float                                              CamberAtRest;                                             // 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CamberAtMaxCompression;                                   // 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              CamberAtMaxDroop;                                         // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ToeAngle;                                                 // 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MOIOverride;                                              // 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
// 0x0010
struct FTireConfigMaterialFriction
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0000(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FrictionScale;                                            // 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.TireConfigFrictionVsSlipGraph
// 0x0028
struct FTireConfigFrictionVsSlipGraph
{
	unsigned char                                      bOverrideDefaultFrictionVsSlipGraph : 1;                  // 0x0000(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FVector2D>                           FrictionSlipDatas;                                        // 0x0008(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.VehicleAnimInstanceProxy
// 0x0020 (0x0530 - 0x0510)
struct FVehicleAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0510(0x0020) MISSED OFFSET
};

// ScriptStruct PhysXVehicles.PhysXWheelState
// 0x0048
struct FPhysXWheelState
{
	float                                              LongitudinalSlip;                                         // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LateralSlip;                                              // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspSpringForce;                                          // 0x0008(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              TireFriction;                                             // 0x000C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bInAir : 1;                                               // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              RotationSpeed;                                            // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Radius;                                                   // 0x0018(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0020(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SuspJounce;                                               // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     LatDir;                                                   // 0x002C(0x000C) (CPF_IsPlainOldData)
	struct FVector                                     LongDir;                                                  // 0x0038(0x000C) (CPF_IsPlainOldData)
};

// ScriptStruct PhysXVehicles.AnimNode_WheelHandler
// 0x0018 (0x0110 - 0x00F8)
struct FAnimNode_WheelHandler : public FAnimNode_SkeletalControlBase
{
	struct FComponentSpacePoseLink                     ComponentPose;                                            // 0x0030(0x0018) (CPF_Edit, CPF_BlueprintVisible)
	int                                                LODThreshold;                                             // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ActualAlpha;                                              // 0x004C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0050(0x0001) UNKNOWN PROPERTY: EnumProperty AnimGraphRuntime.AnimNode_SkeletalControlBase.AlphaInputType
	unsigned char                                      bAlphaBoolEnabled : 1;                                    // 0x0051(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              ALPHA;                                                    // 0x0054(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBias                             AlphaScaleBias;                                           // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible)
	struct FInputAlphaBoolBlend                        AlphaBoolBlend;                                           // 0x0060(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FName                                       AlphaCurveName;                                           // 0x00B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FInputScaleBiasClamp                        AlphaScaleBiasClamp;                                      // 0x00B8(0x0030) (CPF_Edit, CPF_BlueprintVisible)
	unsigned char                                      UnknownData02[0x28];                                      // 0x00E8(0x0028) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
