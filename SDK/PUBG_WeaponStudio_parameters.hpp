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

// Function WeaponStudio.WeaponStudio_C.UserConstructionScript
struct AWeaponStudio_C_UserConstructionScript_Params
{
};

// Function WeaponStudio.WeaponStudio_C.SetMeshTransform
struct AWeaponStudio_C_SetMeshTransform_Params
{
	class UMeshComponent**                             Mesh;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function WeaponStudio.WeaponStudio_C.ExecuteUbergraph_WeaponStudio
struct AWeaponStudio_C_ExecuteUbergraph_WeaponStudio_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
