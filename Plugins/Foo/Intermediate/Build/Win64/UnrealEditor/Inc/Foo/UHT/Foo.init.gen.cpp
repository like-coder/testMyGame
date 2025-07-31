// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoo_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Foo;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Foo()
	{
		if (!Z_Registration_Info_UPackage__Script_Foo.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Foo",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3F41AF0C,
				0x50679088,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Foo.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Foo.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Foo(Z_Construct_UPackage__Script_Foo, TEXT("/Script/Foo"), Z_Registration_Info_UPackage__Script_Foo, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3F41AF0C, 0x50679088));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
