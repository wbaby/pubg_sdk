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

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.IsCarePackageComming
struct UBP_FlaregunUiWidget_C_IsCarePackageComming_Params
{
	bool                                               IsCarePackageComing;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               IsVehicleComing;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.ShowTitle
struct UBP_FlaregunUiWidget_C_ShowTitle_Params
{
	bool                                               bShow;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.IsCharacterInWhiteZone
struct UBP_FlaregunUiWidget_C_IsCharacterInWhiteZone_Params
{
	bool                                               IsIn;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.SetVehicleNumber
struct UBP_FlaregunUiWidget_C_SetVehicleNumber_Params
{
	int*                                               NumVehicle;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              CanFire;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              WaitingMine;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.SetPackageNumber
struct UBP_FlaregunUiWidget_C_SetPackageNumber_Params
{
	int*                                               NumPackage;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              CanFire;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              WaitingMine;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.Tick
struct UBP_FlaregunUiWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (CPF_Parm, CPF_IsPlainOldData)
	float*                                             InDeltaTime;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_FlaregunUiWidget.BP_FlaregunUiWidget_C.ExecuteUbergraph_BP_FlaregunUiWidget
struct UBP_FlaregunUiWidget_C_ExecuteUbergraph_BP_FlaregunUiWidget_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
