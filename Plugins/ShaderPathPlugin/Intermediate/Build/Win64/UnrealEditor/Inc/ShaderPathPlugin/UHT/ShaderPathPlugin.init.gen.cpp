// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShaderPathPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ShaderPathPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ShaderPathPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_ShaderPathPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ShaderPathPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x1101AC9F,
				0x4AE0539F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ShaderPathPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ShaderPathPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ShaderPathPlugin(Z_Construct_UPackage__Script_ShaderPathPlugin, TEXT("/Script/ShaderPathPlugin"), Z_Registration_Info_UPackage__Script_ShaderPathPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1101AC9F, 0x4AE0539F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
