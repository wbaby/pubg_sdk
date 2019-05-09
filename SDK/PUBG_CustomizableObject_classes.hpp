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

// Class CustomizableObject.CustomizableSkeletalComponent
// 0x0050 (0x04D0 - 0x0480)
class UCustomizableSkeletalComponent : public USceneComponent
{
public:
	unsigned char                                      bPendingUpdateSkeletalMesh : 1;                           // 0x0480(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	float                                              SkippedLastRenderTime;                                    // 0x0484(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCustomizableObjectInstance*                 CustomizableObjectInstance;                               // 0x0488(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0490(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableSkeletalComponent");
		return ptr;
	}


	void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);
};


// Class CustomizableObject.CustomizableObjectInstance
// 0x0198 (0x01C0 - 0x0028)
class UCustomizableObjectInstance : public UObject
{
public:
	class UCustomizableObject*                         CustomizableObject;                                       // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0030(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_Transient, CPF_EditConst, CPF_IsPlainOldData)
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;                                           // 0x0038(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;                                            // 0x0048(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;                                          // 0x0058(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters;                                        // 0x0068(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;                                         // 0x0078(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;                                      // 0x0088(0x0010) (CPF_Edit, CPF_EditFixedSize, CPF_ZeroConstructor, CPF_EditConst)
	unsigned char                                      bBuildParameterDecorations : 1;                           // 0x0098(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0099(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    UpdatedDelegate;                                          // 0x00A0(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_BlueprintAssignable)
	unsigned char                                      UnknownData01[0x90];                                      // 0x00B0(0x0090) MISSED OFFSET
	struct FString                                     SkeletalMeshStatus;                                       // 0x0140(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0150(0x0058) MISSED OFFSET
	class UCustomizableInstancePrivateData*            PrivateData;                                              // 0x01A8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObjectInstance");
		return ptr;
	}


	void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);
	void SetVectorParameterSelectedOption(const struct FString& VectorParamName, const struct FLinearColor& VectorValue);
	void SetRandomValues();
	void SetProjectorValue(const struct FString& ProjectorParamName, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float upX, float upY, float upZ, float ScaleX, float ScaleY, float ScaleZ, float Angle);
	void SetProjectorParameterType(const struct FString& ParamName);
	void SetIntParameterSelectedOption(const struct FString& ParamName, const struct FString& SelectedOptionName);
	void SetFloatParameterSelectedOption(const struct FString& FloatParamName, float FloatValue);
	void SetCurrentState(const struct FString& StateName);
	void SetBoolParameterSelectedOption(const struct FString& BoolParamName, bool BoolValue);
	bool IsParameterRelevant(const struct FString& ParamName);
	void GetProjectorParameterType(const struct FString& ParamName);
	class UTexture2D* GetParameterDescription(const struct FString& ParamName, int DescIndex);
	struct FString GetIntParameterSelectedOption(const struct FString& ParamName);
	float GetFloatParameterSelectedOption(const struct FString& FloatParamName);
	struct FString GetCurrentState();
	bool GetBoolParameterSelectedOption(const struct FString& BoolParamName);
	int FindVectorParameterNameIndex(const struct FString& ParamName);
	int FindProjectorParameterNameIndex(const struct FString& ParamName);
	int FindIntParameterNameIndex(const struct FString& ParamName);
	int FindFloatParameterNameIndex(const struct FString& ParamName);
	int FindBoolParameterNameIndex(const struct FString& ParamName);
};


// Class CustomizableObject.CustomizableInstancePrivateData
// 0x0218 (0x0240 - 0x0028)
class UCustomizableInstancePrivateData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FGeneratedMaterial>                  GeneratedMaterials;                                       // 0x0030(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FGeneratedMesh>                      GeneratedMeshes;                                          // 0x0040(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FGeneratedTexture>                   GeneratedTextures;                                        // 0x0050(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData01[0x88];                                      // 0x0060(0x0088) MISSED OFFSET
	TArray<struct FParameterDecorations>               ParameterDecorations;                                     // 0x00E8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData02[0xE8];                                      // 0x00F8(0x00E8) MISSED OFFSET
	TArray<class UMaterialInterface*>                  ReferencedMaterials;                                      // 0x01E0(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	unsigned char                                      UnknownData03[0x50];                                      // 0x01F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableInstancePrivateData");
		return ptr;
	}

};


// Class CustomizableObject.CustomizableObject
// 0x01B0 (0x01D8 - 0x0028)
class UCustomizableObject : public UObject
{
public:
	class USkeletalMesh*                               ReferenceSkeletalMesh;                                    // 0x0028(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 ReferenceStaticMesh;                                      // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0038(0x0001) UNKNOWN PROPERTY: EnumProperty CustomizableObject.CustomizableObject.Relevancy
	unsigned char                                      bDisableTextureLayoutManagement : 1;                      // 0x0039(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	TArray<TAssetPtr<class UMaterialInterface>>        ReferencedMaterials;                                      // 0x0040(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TArray<struct FMutableModelImageProperties>        ImageProperties;                                          // 0x0050(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_EditConst)
	TMap<struct FString, struct FCustomizableObjectIdPair> GroupNodeMap;                                             // 0x0060(0x0050) (CPF_ZeroConstructor)
	struct FCompilationOptions                         CompileOptions;                                           // 0x00B0(0x0020)
	struct FCustomizableObjectExportOptions            ExportOptions;                                            // 0x00D0(0x0018)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00E8(0x0001) UNKNOWN PROPERTY: EnumProperty CustomizableObject.CustomizableObject.MeshCompileType
	unsigned char                                      UnknownData03[0x7];                                       // 0x00E9(0x0007) MISSED OFFSET
	TArray<class UCustomizableObject*>                 WorkingSet;                                               // 0x00F0(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	struct FGuid                                       VersionId;                                                // 0x0100(0x0010) (CPF_IsPlainOldData)
	TArray<struct FMutableModelParameterProperties>    ParameterProperties;                                      // 0x0110(0x0010) (CPF_ZeroConstructor)
	TMap<struct FString, struct FParameterUIData>      ParameterUIDataMap;                                       // 0x0120(0x0050) (CPF_ZeroConstructor)
	TMap<struct FString, struct FParameterUIData>      StateUIDataMap;                                           // 0x0170(0x0050) (CPF_ZeroConstructor)
	unsigned char                                      bIsChildObject : 1;                                       // 0x01C0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData04[0x17];                                      // 0x01C1(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObject");
		return ptr;
	}


	struct FParameterUIData GetStateUIMetadataFromIndex(int StateIndex);
	struct FParameterUIData GetStateUIMetadata(const struct FString& StateName);
	struct FString GetStateParameterName(const struct FString& StateName, int ParameterIndex);
	int GetStateParameterCount(const struct FString& StateName);
	struct FString GetStateName(int StateIndex);
	int GetStateCount();
	struct FParameterUIData GetParameterUIMetadataFromIndex(int ParamIndex);
	struct FParameterUIData GetParameterUIMetadata(const struct FString& ParamName);
	void GetParameterTypeByName(const struct FString& Name);
	void GetParameterType(int ParamIndex);
	struct FString GetParameterName(int ParamIndex);
	int GetParameterDescriptionCount(const struct FString& ParamName);
	int GetParameterCount();
	int GetIntParameterNumOptions(int ParamIndex);
	struct FString GetIntParameterAvailableOption(int ParamIndex, int K);
	int FindParameter(const struct FString& Name);
};


// Class CustomizableObject.CustomizableSystemImageProvider
// 0x0000 (0x0028 - 0x0028)
class UCustomizableSystemImageProvider : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableSystemImageProvider");
		return ptr;
	}

};


// Class CustomizableObject.CustomizableObjectImageProviderArray
// 0x0098 (0x00C0 - 0x0028)
class UCustomizableObjectImageProviderArray : public UCustomizableSystemImageProvider
{
public:
	TArray<class UTexture2D*>                          Textures;                                                 // 0x0028(0x0010) (CPF_Edit, CPF_ZeroConstructor)
	unsigned char                                      UnknownData00[0x88];                                      // 0x0038(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObjectImageProviderArray");
		return ptr;
	}

};


// Class CustomizableObject.CustomizableObjectSystem
// 0x0110 (0x0138 - 0x0028)
class UCustomizableObjectSystem : public UObject
{
public:
	TArray<struct FPendingReleaseSkeletalMeshInfo>     PendingReleaseSkeletalMesh;                               // 0x0028(0x0010) (CPF_ZeroConstructor)
	class UCustomizableObjectImageProviderArray*       PreviewExternalImageProvider;                             // 0x0038(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0040(0x00D8) MISSED OFFSET
	TArray<class UTexture2D*>                          ProtectedCachedTextures;                                  // 0x0118(0x0010) (CPF_ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0128(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.CustomizableObjectSystem");
		return ptr;
	}

};


// Class CustomizableObject.InstanceUpdatedHelper
// 0x0008 (0x0030 - 0x0028)
class UInstanceUpdatedHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomizableObject.InstanceUpdatedHelper");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
