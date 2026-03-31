// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOMP217401_Lab8_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	COMP217401_LAB8_API UFunction* Z_Construct_UDelegateFunction_COMP217401_Lab8_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_COMP217401_Lab8;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_COMP217401_Lab8()
	{
		if (!Z_Registration_Info_UPackage__Script_COMP217401_Lab8.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_COMP217401_Lab8_OnEnemyDied__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/COMP217401_Lab8",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x7D34465D,
			0xEB7B269B,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_COMP217401_Lab8.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_COMP217401_Lab8.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_COMP217401_Lab8(Z_Construct_UPackage__Script_COMP217401_Lab8, TEXT("/Script/COMP217401_Lab8"), Z_Registration_Info_UPackage__Script_COMP217401_Lab8, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x7D34465D, 0xEB7B269B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
