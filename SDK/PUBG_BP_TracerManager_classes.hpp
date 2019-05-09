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

// BlueprintGeneratedClass BP_TracerManager.BP_TracerManager_C
// 0x0000 (0x0518 - 0x0518)
class ABP_TracerManager_C : public ATslTracerManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TracerManager.BP_TracerManager_C");
		return ptr;
	}


	void Multi_AddInstance(const struct FTracerSimulationServerData& InTracerData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
