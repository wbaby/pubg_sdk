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

// ScriptStruct TslCommon.GameEventBase
// 0x0010
struct FGameEventBase
{
	int                                                _V;                                                       // 0x0000(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       _T;                                                       // 0x0008(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslCommon.LogCommon
// 0x0028
struct FLogCommon
{
	struct FString                                     MatchId;                                                  // 0x0000(0x0010) (CPF_ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0010(0x0010) (CPF_ZeroConstructor)
	float                                              IsGame;                                                   // 0x0020(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// ScriptStruct TslCommon.LogBase
// 0x0058
struct FLogBase
{
	struct FLogCommon                                  Common;                                                   // 0x0000(0x0028)
	int                                                _V;                                                       // 0x0028(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     _D;                                                       // 0x0030(0x0010) (CPF_ZeroConstructor)
	struct FString                                     _T;                                                       // 0x0040(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      _U : 1;                                                   // 0x0050(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
