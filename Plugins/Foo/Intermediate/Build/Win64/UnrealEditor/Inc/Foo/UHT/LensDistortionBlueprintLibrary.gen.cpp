// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foo/Classes/LensDistortionBlueprintLibrary.h"
#include "Foo/Classes/LensDistortionAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensDistortionBlueprintLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
FOO_API UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary();
FOO_API UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary_NoRegister();
FOO_API UScriptStruct* Z_Construct_UScriptStruct_FFooCameraModel();
UPackage* Z_Construct_UPackage__Script_Foo();
// End Cross Module References

// Begin Class ULensDistortionBlueprintLibrary Function DrawUVDisplacementToRenderTarget
struct Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics
{
	struct LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms
	{
		const UObject* WorldContextObject;
		FFooCameraModel CameraModel;
		float DistortedHorizontalFOV;
		float DistortedAspectRatio;
		float UndistortOverscanFactor;
		UTextureRenderTarget2D* OutputRenderTarget;
		float OutputMultiply;
		float OutputAdd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foo | Lens Distortion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Draws UV displacement map within the output render target.\n\x09 * - Red & green channels hold the distortion displacement;\n\x09 * - Blue & alpha channels hold the undistortion displacement.\n\x09 * @param DistortedHorizontalFOV The desired horizontal FOV in the distorted render.\n\x09 * @param DistortedAspectRatio The desired aspect ratio of the distorted render.\n\x09 * @param UndistortOverscanFactor The factor of the overscan for the undistorted render.\n\x09 * @param OutputRenderTarget The render target to draw to. Don't necessarily need to have same resolution or aspect ratio as distorted render.\n\x09 * @param OutputMultiply The multiplication factor applied on the displacement.\n\x09 * @param OutputAdd Value added to the multiplied displacement before storing into the output render target.\n\x09 */" },
#endif
		{ "CPP_Default_OutputAdd", "0.500000" },
		{ "CPP_Default_OutputMultiply", "0.500000" },
		{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Draws UV displacement map within the output render target.\n- Red & green channels hold the distortion displacement;\n- Blue & alpha channels hold the undistortion displacement.\n@param DistortedHorizontalFOV The desired horizontal FOV in the distorted render.\n@param DistortedAspectRatio The desired aspect ratio of the distorted render.\n@param UndistortOverscanFactor The factor of the overscan for the undistorted render.\n@param OutputRenderTarget The render target to draw to. Don't necessarily need to have same resolution or aspect ratio as distorted render.\n@param OutputMultiply The multiplication factor applied on the displacement.\n@param OutputAdd Value added to the multiplied displacement before storing into the output render target." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortedHorizontalFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortedAspectRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UndistortOverscanFactor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputMultiply;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputAdd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_CameraModel = { "CameraModel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, CameraModel), Z_Construct_UScriptStruct_FFooCameraModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModel_MetaData), NewProp_CameraModel_MetaData) }; // 3060991626
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_DistortedHorizontalFOV = { "DistortedHorizontalFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, DistortedHorizontalFOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_DistortedAspectRatio = { "DistortedAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, DistortedAspectRatio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_UndistortOverscanFactor = { "UndistortOverscanFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, UndistortOverscanFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputRenderTarget = { "OutputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputMultiply = { "OutputMultiply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, OutputMultiply), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputAdd = { "OutputAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, OutputAdd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_CameraModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_DistortedHorizontalFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_DistortedAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_UndistortOverscanFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputMultiply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputAdd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionBlueprintLibrary, nullptr, "DrawUVDisplacementToRenderTarget", nullptr, nullptr, Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULensDistortionBlueprintLibrary::execDrawUVDisplacementToRenderTarget)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_CameraModel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistortedHorizontalFOV);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistortedAspectRatio);
	P_GET_PROPERTY(FFloatProperty,Z_Param_UndistortOverscanFactor);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OutputMultiply);
	P_GET_PROPERTY(FFloatProperty,Z_Param_OutputAdd);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULensDistortionBlueprintLibrary::DrawUVDisplacementToRenderTarget(Z_Param_WorldContextObject,Z_Param_Out_CameraModel,Z_Param_DistortedHorizontalFOV,Z_Param_DistortedAspectRatio,Z_Param_UndistortOverscanFactor,Z_Param_OutputRenderTarget,Z_Param_OutputMultiply,Z_Param_OutputAdd);
	P_NATIVE_END;
}
// End Class ULensDistortionBlueprintLibrary Function DrawUVDisplacementToRenderTarget

// Begin Class ULensDistortionBlueprintLibrary Function EqualEqual_CompareLensDistortionModels
struct Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics
{
	struct LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms
	{
		FFooCameraModel A;
		FFooCameraModel B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns true if A is equal to B (A == B) */" },
#endif
		{ "CompactNodeTitle", "==" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The LensDistortion plugin is deprecated. Please update your project to use the features of the CameraCalibration plugin." },
		{ "DisplayName", "Equal (LensDistortionCameraModel)" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if A is equal to B (A == B)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms, A), Z_Construct_UScriptStruct_FFooCameraModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3060991626
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms, B), Z_Construct_UScriptStruct_FFooCameraModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 3060991626
void Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms), &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionBlueprintLibrary, nullptr, "EqualEqual_CompareLensDistortionModels", nullptr, nullptr, Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULensDistortionBlueprintLibrary::execEqualEqual_CompareLensDistortionModels)
{
	P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_A);
	P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULensDistortionBlueprintLibrary::EqualEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class ULensDistortionBlueprintLibrary Function EqualEqual_CompareLensDistortionModels

// Begin Class ULensDistortionBlueprintLibrary Function GetUndistortOverscanFactor
struct Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics
{
	struct LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms
	{
		FFooCameraModel CameraModel;
		float DistortedHorizontalFOV;
		float DistortedAspectRatio;
		float UndistortOverscanFactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Foo | Lens Distortion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the overscan factor required for the undistort rendering to avoid unrendered distorted pixels. */" },
#endif
		{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the overscan factor required for the undistort rendering to avoid unrendered distorted pixels." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortedHorizontalFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortedAspectRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UndistortOverscanFactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_CameraModel = { "CameraModel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, CameraModel), Z_Construct_UScriptStruct_FFooCameraModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModel_MetaData), NewProp_CameraModel_MetaData) }; // 3060991626
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_DistortedHorizontalFOV = { "DistortedHorizontalFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, DistortedHorizontalFOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_DistortedAspectRatio = { "DistortedAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, DistortedAspectRatio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_UndistortOverscanFactor = { "UndistortOverscanFactor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, UndistortOverscanFactor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_CameraModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_DistortedHorizontalFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_DistortedAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_UndistortOverscanFactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionBlueprintLibrary, nullptr, "GetUndistortOverscanFactor", nullptr, nullptr, Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULensDistortionBlueprintLibrary::execGetUndistortOverscanFactor)
{
	P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_CameraModel);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistortedHorizontalFOV);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DistortedAspectRatio);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_UndistortOverscanFactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	ULensDistortionBlueprintLibrary::GetUndistortOverscanFactor(Z_Param_Out_CameraModel,Z_Param_DistortedHorizontalFOV,Z_Param_DistortedAspectRatio,Z_Param_Out_UndistortOverscanFactor);
	P_NATIVE_END;
}
// End Class ULensDistortionBlueprintLibrary Function GetUndistortOverscanFactor

// Begin Class ULensDistortionBlueprintLibrary Function NotEqual_CompareLensDistortionModels
struct Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics
{
	struct LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms
	{
		FFooCameraModel A;
		FFooCameraModel B;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Returns true if A is not equal to B (A != B) */" },
#endif
		{ "CompactNodeTitle", "!=" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The LensDistortion plugin is deprecated. Please update your project to use the features of the CameraCalibration plugin." },
		{ "DisplayName", "NotEqual (LensDistortionCameraModel)" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if A is not equal to B (A != B)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_B;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms, A), Z_Construct_UScriptStruct_FFooCameraModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_MetaData), NewProp_A_MetaData) }; // 3060991626
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms, B), Z_Construct_UScriptStruct_FFooCameraModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_B_MetaData), NewProp_B_MetaData) }; // 3060991626
void Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms), &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionBlueprintLibrary, nullptr, "NotEqual_CompareLensDistortionModels", nullptr, nullptr, Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULensDistortionBlueprintLibrary::execNotEqual_CompareLensDistortionModels)
{
	P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_A);
	P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_B);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULensDistortionBlueprintLibrary::NotEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B);
	P_NATIVE_END;
}
// End Class ULensDistortionBlueprintLibrary Function NotEqual_CompareLensDistortionModels

// Begin Class ULensDistortionBlueprintLibrary
void ULensDistortionBlueprintLibrary::StaticRegisterNativesULensDistortionBlueprintLibrary()
{
	UClass* Class = ULensDistortionBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawUVDisplacementToRenderTarget", &ULensDistortionBlueprintLibrary::execDrawUVDisplacementToRenderTarget },
		{ "EqualEqual_CompareLensDistortionModels", &ULensDistortionBlueprintLibrary::execEqualEqual_CompareLensDistortionModels },
		{ "GetUndistortOverscanFactor", &ULensDistortionBlueprintLibrary::execGetUndistortOverscanFactor },
		{ "NotEqual_CompareLensDistortionModels", &ULensDistortionBlueprintLibrary::execNotEqual_CompareLensDistortionModels },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULensDistortionBlueprintLibrary);
UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary_NoRegister()
{
	return ULensDistortionBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//class UE_DEPRECATED(5.0, \"The LensDistortion plugin is deprecated. Please update your project to use the features of the CameraCalibration plugin.\") ULensDistortionBlueprintLibrary;\n" },
#endif
		{ "DeprecationMessage", "The LensDistortion plugin is deprecated. Please update your project to use the features of the CameraCalibration plugin." },
		{ "IncludePath", "LensDistortionBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
		{ "ScriptName", "LensDistortionLibrary" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "class UE_DEPRECATED(5.0, \"The LensDistortion plugin is deprecated. Please update your project to use the features of the CameraCalibration plugin.\") ULensDistortionBlueprintLibrary;" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget, "DrawUVDisplacementToRenderTarget" }, // 3220961154
		{ &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels, "EqualEqual_CompareLensDistortionModels" }, // 549487390
		{ &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor, "GetUndistortOverscanFactor" }, // 3546218812
		{ &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels, "NotEqual_CompareLensDistortionModels" }, // 922248912
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensDistortionBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Foo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::ClassParams = {
	&ULensDistortionBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_ULensDistortionBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULensDistortionBlueprintLibrary.OuterSingleton, Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULensDistortionBlueprintLibrary.OuterSingleton;
}
template<> FOO_API UClass* StaticClass<ULensDistortionBlueprintLibrary>()
{
	return ULensDistortionBlueprintLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULensDistortionBlueprintLibrary);
ULensDistortionBlueprintLibrary::~ULensDistortionBlueprintLibrary() {}
// End Class ULensDistortionBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULensDistortionBlueprintLibrary, ULensDistortionBlueprintLibrary::StaticClass, TEXT("ULensDistortionBlueprintLibrary"), &Z_Registration_Info_UClass_ULensDistortionBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULensDistortionBlueprintLibrary), 940368256U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_2105431806(TEXT("/Script/Foo"),
	Z_CompiledInDeferFile_FID_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
