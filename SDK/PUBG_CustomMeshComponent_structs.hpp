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

// ScriptStruct CustomMeshComponent.CustomMeshTriangle
// 0x0024
struct FCustomMeshTriangle
{
	struct FVector                                     Vertex0;                                                  // 0x0000(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     Vertex1;                                                  // 0x000C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	struct FVector                                     Vertex2;                                                  // 0x0018(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
