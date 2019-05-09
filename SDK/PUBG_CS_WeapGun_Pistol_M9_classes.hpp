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

// BlueprintGeneratedClass CS_WeapGun_Pistol_M9.CS_WeapGun_Pistol_M9_C
// 0x0000 (0x0160 - 0x0160)
class UCS_WeapGun_Pistol_M9_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CS_WeapGun_Pistol_M9.CS_WeapGun_Pistol_M9_C");
		return ptr;
	}


	void ReceiveStopShake(bool bImmediately);
	void ReceivePlayShake(float Scale);
	bool ReceiveIsFinished();
	void BlueprintUpdateCameraShake(float DeltaTime, float ALPHA, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
