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

// Class LocationServicesBPLibrary.LocationServices
// 0x0000 (0x0028 - 0x0028)
class ULocationServices : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LocationServicesBPLibrary.LocationServices");
		return ptr;
	}

};


// Class LocationServicesBPLibrary.LocationServicesImpl
// 0x0010 (0x0038 - 0x0028)
class ULocationServicesImpl : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnLocationChanged;                                        // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LocationServicesBPLibrary.LocationServicesImpl");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
