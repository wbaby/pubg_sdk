#pragma once

// PlayerUnknown's Battlegrounds (2.4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImmediatePhysics.AnimNode_RigidBody
// 0x01A0 (0x0298 - 0x00F8)
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
	class UPhysicsAsset*                               OverridePhysicsAsset;                                     // 0x00F8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     OverrideWorldGravity;                                     // 0x0100(0x000C) (CPF_Edit, CPF_IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     OverlapChannel;                                           // 0x010C(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bEnableWorldGeometry : 1;                                 // 0x010D(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bComponentSpaceSimulation : 1;                            // 0x010E(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bOverrideWorldGravity : 1;                                // 0x010F(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CachedBoundsScale;                                        // 0x0110(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x184];                                     // 0x0114(0x0184) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
