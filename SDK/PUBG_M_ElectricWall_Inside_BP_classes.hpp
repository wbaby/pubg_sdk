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

// BlueprintGeneratedClass M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C
// 0x0020 (0x0478 - 0x0458)
class AM_ElectricWall_Inside_BP_C : public ATslPostProcessEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0458(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0460(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              _____0______0_F1196C2844F052526643A091F7753F02;           // 0x0468(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____0__Direction_F1196C2844F052526643A091F7753F02;       // 0x046C(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          타임라인_1;                                               // 0x0470(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void 타임라인_0__FinishedFunc();
	void 타임라인_0__UpdateFunc();
	void ReceiveBeginPlay();
	void Custom_Event_1();
	void OnSetEffectParameter(struct FString* ParameterName, float* Value);
	void ExecuteUbergraph_M_ElectricWall_Inside_BP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
