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

// Function TslGame.TslTracerManager.Multi_AddInstance
struct ABP_TracerManager_C_Multi_AddInstance_Params
{
	struct FTracerSimulationServerData                 InTracerData;                                             // (CPF_ConstParm, CPF_Parm, CPF_ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
