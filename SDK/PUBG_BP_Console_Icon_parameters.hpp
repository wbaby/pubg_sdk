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

// Function BP_Console_Icon.BP_Console_Icon_C.PreConstruct
struct UBP_Console_Icon_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_Console_Icon.BP_Console_Icon_C.Construct
struct UBP_Console_Icon_C_Construct_Params
{
};

// Function BP_Console_Icon.BP_Console_Icon_C.ExecuteUbergraph_BP_Console_Icon
struct UBP_Console_Icon_C_ExecuteUbergraph_BP_Console_Icon_Params
{
	int*                                               EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
