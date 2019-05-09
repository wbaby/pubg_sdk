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

// Class SubstanceCore.SubstanceGraphInstance
// 0x00E8 (0x0110 - 0x0028)
class USubstanceGraphInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FString                                     PackageURL;                                               // 0x0030(0x0010) (CPF_ZeroConstructor)
	class USubstanceInstanceFactory*                   ParentFactory;                                            // 0x0040(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<uint32_t, class USubstanceImageInput*>        ImageSources;                                             // 0x0048(0x0050) (CPF_ZeroConstructor)
	class UMaterial*                                   CreatedMaterial;                                          // 0x0098(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TMap<int, struct FGuid>                            OutputTextureLinkData;                                    // 0x00A0(0x0050) (CPF_ZeroConstructor)
	unsigned char                                      bIsFrozen : 1;                                            // 0x00F0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x1F];                                      // 0x00F1(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubstanceCore.SubstanceGraphInstance");
		return ptr;
	}


	void SetInputString(const struct FString& Identifier, const struct FString& Value);
	void SetInputInt(const struct FString& Identifier, TArray<int> InputValues);
	bool SetInputImg(const struct FString& InputName, class UObject* Value);
	void SetInputFloat(const struct FString& Identifier, TArray<float> InputValues);
	void SetInputColor(const struct FString& Identifier, const struct FLinearColor& Color);
	void SetInputBool(const struct FString& Identifier, bool Bool);
	struct FSubstanceIntInputDesc GetIntInputDesc(const struct FString& Identifier);
	struct FSubstanceInstanceDesc GetInstanceDesc();
	TEnumAsByte<ESubstanceInputType> GetInputType(const struct FString& InputName);
	struct FString GetInputString(const struct FString& Identifier);
	TArray<struct FString> GetInputNames();
	TArray<int> GetInputInt(const struct FString& Identifier);
	TArray<float> GetInputFloat(const struct FString& Identifier);
	struct FLinearColor GetInputColor(const struct FString& Identifier);
	bool GetInputBool(const struct FString& Identifier);
	struct FSubstanceFloatInputDesc GetFloatInputDesc(const struct FString& Identifier);
};


// Class SubstanceCore.SubstanceImageInput
// 0x0140 (0x0168 - 0x0028)
class USubstanceImageInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF8];                                      // 0x0028(0x00F8) MISSED OFFSET
	int                                                CompressionLevelRGB;                                      // 0x0120(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CompressionLevelAlpha;                                    // 0x0124(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SizeX;                                                    // 0x0128(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                SizeY;                                                    // 0x012C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	int                                                NumComponents;                                            // 0x0130(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET
	struct FString                                     SourceFilePath;                                           // 0x0138(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	struct FString                                     SourceFileTimestamp;                                      // 0x0148(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst)
	TArray<class USubstanceGraphInstance*>             Consumers;                                                // 0x0158(0x0010) (CPF_ZeroConstructor, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubstanceCore.SubstanceImageInput");
		return ptr;
	}

};


// Class SubstanceCore.SubstanceInstanceFactory
// 0x0058 (0x0080 - 0x0028)
class USubstanceInstanceFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	struct FString                                     RelativeSourceFilePath;                                   // 0x0038(0x0010) (CPF_ZeroConstructor)
	struct FString                                     AbsoluteSourceFilePath;                                   // 0x0048(0x0010) (CPF_ZeroConstructor)
	struct FString                                     SourceFileTimestamp;                                      // 0x0058(0x0010) (CPF_ZeroConstructor)
	TEnumAsByte<ESubstanceGenerationMode>              GenerationMode;                                           // 0x0068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0069(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubstanceCore.SubstanceInstanceFactory");
		return ptr;
	}

};


// Class SubstanceCore.SubstanceSettings
// 0x0018 (0x0040 - 0x0028)
class USubstanceSettings : public UObject
{
public:
	int                                                MemoryBudgetMb;                                           // 0x0028(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                CPUCores;                                                 // 0x002C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                AsyncLoadMipClip;                                         // 0x0030(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	int                                                MaxAsyncSubstancesRenderedPerFrame;                       // 0x0034(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<ESubstanceGenerationMode>              DefaultGenerationMode;                                    // 0x0038(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	TEnumAsByte<ESubstanceEngineType>                  SubstanceEngine;                                          // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubstanceCore.SubstanceSettings");
		return ptr;
	}

};


// Class SubstanceCore.SubstanceTexture2D
// 0x0070 (0x0150 - 0x00E0)
class USubstanceTexture2D : public UTexture2DDynamic
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x00E0(0x0040) MISSED OFFSET
	class USubstanceGraphInstance*                     ParentInstance;                                           // 0x0120(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressX;                                                 // 0x0128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETextureAddress>                       AddressY;                                                 // 0x0129(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      bCooked : 1;                                              // 0x012A(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x25];                                      // 0x012B(0x0025) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubstanceCore.SubstanceTexture2D");
		return ptr;
	}


	TEnumAsByte<ESubChannelType> GetChannel();
};


// Class SubstanceCore.SubstanceUtility
// 0x0000 (0x0028 - 0x0028)
class USubstanceUtility : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SubstanceCore.SubstanceUtility");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
