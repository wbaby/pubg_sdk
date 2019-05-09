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

// BlueprintGeneratedClass BP_TslBaseLobbySceneTravel_CameraMove_Fast.BP_TslBaseLobbySceneTravel_CameraMove_Fast_C
// 0x0020 (0x04A0 - 0x0480)
class ABP_TslBaseLobbySceneTravel_CameraMove_Fast_C : public ATslBaseLobbySceneTravel
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0488(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CameraMove_Value_F1BE5ABF41E9B30B7D41BDAC9436C831;        // 0x0490(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    CameraMove__Direction_F1BE5ABF41E9B30B7D41BDAC9436C831;   // 0x0494(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	class UTimelineComponent*                          CameraMove;                                               // 0x0498(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TslBaseLobbySceneTravel_CameraMove_Fast.BP_TslBaseLobbySceneTravel_CameraMove_Fast_C");
		return ptr;
	}


	void UserConstructionScript();
	void CameraMove__FinishedFunc();
	void CameraMove__UpdateFunc();
	void OnStartTravel();
	void ExecuteUbergraph_BP_TslBaseLobbySceneTravel_CameraMove_Fast(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
