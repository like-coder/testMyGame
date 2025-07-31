// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShaderPathPluginBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHADERPATHPLUGIN_ShaderPathPluginBPLibrary_generated_h
#error "ShaderPathPluginBPLibrary.generated.h already included, missing '#pragma once' in ShaderPathPluginBPLibrary.h"
#endif
#define SHADERPATHPLUGIN_ShaderPathPluginBPLibrary_generated_h

#define FID_testMyGame_Plugins_ShaderPathPlugin_Source_ShaderPathPlugin_Public_ShaderPathPluginBPLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execShaderPathPluginSampleFunction);


#define FID_testMyGame_Plugins_ShaderPathPlugin_Source_ShaderPathPlugin_Public_ShaderPathPluginBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUShaderPathPluginBPLibrary(); \
	friend struct Z_Construct_UClass_UShaderPathPluginBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UShaderPathPluginBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ShaderPathPlugin"), NO_API) \
	DECLARE_SERIALIZER(UShaderPathPluginBPLibrary)


#define FID_testMyGame_Plugins_ShaderPathPlugin_Source_ShaderPathPlugin_Public_ShaderPathPluginBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShaderPathPluginBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShaderPathPluginBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShaderPathPluginBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShaderPathPluginBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UShaderPathPluginBPLibrary(UShaderPathPluginBPLibrary&&); \
	UShaderPathPluginBPLibrary(const UShaderPathPluginBPLibrary&); \
public: \
	NO_API virtual ~UShaderPathPluginBPLibrary();


#define FID_testMyGame_Plugins_ShaderPathPlugin_Source_ShaderPathPlugin_Public_ShaderPathPluginBPLibrary_h_25_PROLOG
#define FID_testMyGame_Plugins_ShaderPathPlugin_Source_ShaderPathPlugin_Public_ShaderPathPluginBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_testMyGame_Plugins_ShaderPathPlugin_Source_ShaderPathPlugin_Public_ShaderPathPluginBPLibrary_h_28_RPC_WRAPPERS \
	FID_testMyGame_Plugins_ShaderPathPlugin_Source_ShaderPathPlugin_Public_ShaderPathPluginBPLibrary_h_28_INCLASS \
	FID_testMyGame_Plugins_ShaderPathPlugin_Source_ShaderPathPlugin_Public_ShaderPathPluginBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHADERPATHPLUGIN_API UClass* StaticClass<class UShaderPathPluginBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_testMyGame_Plugins_ShaderPathPlugin_Source_ShaderPathPlugin_Public_ShaderPathPluginBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
