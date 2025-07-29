// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LensDistortionBlueprintLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTextureRenderTarget2D;
struct FFooCameraModel;
#ifdef FOO_LensDistortionBlueprintLibrary_generated_h
#error "LensDistortionBlueprintLibrary.generated.h already included, missing '#pragma once' in LensDistortionBlueprintLibrary.h"
#endif
#define FOO_LensDistortionBlueprintLibrary_generated_h

#define FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_SPARSE_DATA
#define FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels); \
	DECLARE_FUNCTION(execDrawUVDisplacementToRenderTarget); \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor);


#define FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_ACCESSORS
#define FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesULensDistortionBlueprintLibrary(); \
	friend struct Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(ULensDistortionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Foo"), FOO_API) \
	DECLARE_SERIALIZER(ULensDistortionBlueprintLibrary)


#define FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOO_API ULensDistortionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOO_API, ULensDistortionBlueprintLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOO_API ULensDistortionBlueprintLibrary(ULensDistortionBlueprintLibrary&&); \
	FOO_API ULensDistortionBlueprintLibrary(const ULensDistortionBlueprintLibrary&); \
public: \
	FOO_API virtual ~ULensDistortionBlueprintLibrary();


#define FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_13_PROLOG
#define FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_SPARSE_DATA \
	FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_RPC_WRAPPERS \
	FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_ACCESSORS \
	FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_INCLASS \
	FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOO_API UClass* StaticClass<class ULensDistortionBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_UE_5_3_testMyGame_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
