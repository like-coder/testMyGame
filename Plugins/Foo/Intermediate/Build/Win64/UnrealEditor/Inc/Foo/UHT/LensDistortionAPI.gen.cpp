// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foo/Classes/LensDistortionAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensDistortionAPI() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
FOO_API UScriptStruct* Z_Construct_UScriptStruct_FFooCameraModel();
UPackage* Z_Construct_UPackage__Script_Foo();
// End Cross Module References

// Begin ScriptStruct FFooCameraModel
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FooCameraModel;
class UScriptStruct* FFooCameraModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FooCameraModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FooCameraModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFooCameraModel, (UObject*)Z_Construct_UPackage__Script_Foo(), TEXT("FooCameraModel"));
	}
	return Z_Registration_Info_UScriptStruct_FooCameraModel.OuterSingleton;
}
template<> FOO_API UScriptStruct* StaticStruct<FFooCameraModel>()
{
	return FFooCameraModel::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFooCameraModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K1_MetaData[] = {
		{ "Category", "Lens Distortion|Camera Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radial parameter #1. */" },
#endif
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radial parameter #1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K2_MetaData[] = {
		{ "Category", "Lens Distortion|Camera Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radial parameter #2. */" },
#endif
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radial parameter #2." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_K3_MetaData[] = {
		{ "Category", "Lens Distortion|Camera Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Radial parameter #3. */" },
#endif
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Radial parameter #3." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[] = {
		{ "Category", "Lens Distortion|Camera Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tangential parameter #1. */" },
#endif
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tangential parameter #1." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[] = {
		{ "Category", "Lens Distortion|Camera Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Tangential parameter #2. */" },
#endif
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tangential parameter #2." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[] = {
		{ "Category", "Lens Distortion|Camera Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera matrix's Fx and Fy. */" },
#endif
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera matrix's Fx and Fy." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
		{ "Category", "Lens Distortion|Camera Model" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera matrix's Cx and Cy. */" },
#endif
		{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera matrix's Cx and Cy." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K2;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_K3;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_P1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_P2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_F;
	static const UECodeGen_Private::FStructPropertyParams NewProp_C;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFooCameraModel>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_K1 = { "K1", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFooCameraModel, K1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K1_MetaData), NewProp_K1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_K2 = { "K2", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFooCameraModel, K2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K2_MetaData), NewProp_K2_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_K3 = { "K3", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFooCameraModel, K3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_K3_MetaData), NewProp_K3_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_P1 = { "P1", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFooCameraModel, P1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P1_MetaData), NewProp_P1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_P2 = { "P2", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFooCameraModel, P2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_P2_MetaData), NewProp_P2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_F = { "F", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFooCameraModel, F), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_F_MetaData), NewProp_F_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFooCameraModel, C), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_C_MetaData), NewProp_C_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFooCameraModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_K1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_K2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_K3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_P1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_P2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_F,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewProp_C,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFooCameraModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFooCameraModel_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Foo,
	nullptr,
	&NewStructOps,
	"FooCameraModel",
	Z_Construct_UScriptStruct_FFooCameraModel_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFooCameraModel_Statics::PropPointers),
	sizeof(FFooCameraModel),
	alignof(FFooCameraModel),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFooCameraModel_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFooCameraModel_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFooCameraModel()
{
	if (!Z_Registration_Info_UScriptStruct_FooCameraModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FooCameraModel.InnerSingleton, Z_Construct_UScriptStruct_FFooCameraModel_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FooCameraModel.InnerSingleton;
}
// End ScriptStruct FFooCameraModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionAPI_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFooCameraModel::StaticStruct, Z_Construct_UScriptStruct_FFooCameraModel_Statics::NewStructOps, TEXT("FooCameraModel"), &Z_Registration_Info_UScriptStruct_FooCameraModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFooCameraModel), 3060991626U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionAPI_h_3779499646(TEXT("/Script/Foo"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionAPI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionAPI_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
