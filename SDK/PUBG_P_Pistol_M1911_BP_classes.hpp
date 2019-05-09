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

// BlueprintGeneratedClass P_Pistol_M1911_BP.P_Pistol_M1911_BP_C
// 0x0000 (0x0498 - 0x0498)
class AP_Pistol_M1911_BP_C : public ATslParticle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass P_Pistol_M1911_BP.P_Pistol_M1911_BP_C");
		return ptr;
	}


	void SetParticleParameter(const struct FName& Name, const struct FVector& Value, bool bEnableRTPC);
	void OnParticleFinish(class UParticleSystemComponent* PSystem);
	void OnParticleCollide(const struct FName& EventName, float EmitterTime, int ParticleTime, const struct FVector& Location, const struct FVector& Velocity, const struct FVector& Direction, const struct FVector& Normal, const struct FName& BoneName, class UPhysicalMaterial* PhysMat);
	void OnParameterUpdated();
	void GetWaterVolumeHeight(bool* OutbIsInWater, float* OutWaterHeight);
	TEnumAsByte<EPhysicalSurface> GetPhysicalSurfaceFromRay(const struct FVector& StartActorOffset, const struct FVector& TraceRay);
	struct FVector GetParticleVectorParamter(const struct FName& Name, const struct FVector& DefaultValue);
	float GetParticleParamterByName(const struct FName& Name, float DefaultValue);
	float GetParticleParamter(const struct FString& Name, float DefaultValue);
	float GetEmitterGlobalSpawnRateScale();
	void ForceSpawn(int emitterIndex, const struct FVector& InLocation);
	void AttachToParent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
