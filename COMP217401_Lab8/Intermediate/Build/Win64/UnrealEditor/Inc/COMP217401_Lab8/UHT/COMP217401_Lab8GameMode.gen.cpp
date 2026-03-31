// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "COMP217401_Lab8GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCOMP217401_Lab8GameMode() {}

// ********** Begin Cross Module References ********************************************************
COMP217401_LAB8_API UClass* Z_Construct_UClass_ACOMP217401_Lab8GameMode();
COMP217401_LAB8_API UClass* Z_Construct_UClass_ACOMP217401_Lab8GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_COMP217401_Lab8();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACOMP217401_Lab8GameMode *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ACOMP217401_Lab8GameMode;
UClass* ACOMP217401_Lab8GameMode::GetPrivateStaticClass()
{
	using TClass = ACOMP217401_Lab8GameMode;
	if (!Z_Registration_Info_UClass_ACOMP217401_Lab8GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("COMP217401_Lab8GameMode"),
			Z_Registration_Info_UClass_ACOMP217401_Lab8GameMode.InnerSingleton,
			StaticRegisterNativesACOMP217401_Lab8GameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACOMP217401_Lab8GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACOMP217401_Lab8GameMode_NoRegister()
{
	return ACOMP217401_Lab8GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACOMP217401_Lab8GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "COMP217401_Lab8GameMode.h" },
		{ "ModuleRelativePath", "COMP217401_Lab8GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class ACOMP217401_Lab8GameMode constinit property declarations *****************
// ********** End Class ACOMP217401_Lab8GameMode constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACOMP217401_Lab8GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ACOMP217401_Lab8GameMode_Statics
UObject* (*const Z_Construct_UClass_ACOMP217401_Lab8GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_COMP217401_Lab8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACOMP217401_Lab8GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACOMP217401_Lab8GameMode_Statics::ClassParams = {
	&ACOMP217401_Lab8GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACOMP217401_Lab8GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACOMP217401_Lab8GameMode_Statics::Class_MetaDataParams)
};
void ACOMP217401_Lab8GameMode::StaticRegisterNativesACOMP217401_Lab8GameMode()
{
}
UClass* Z_Construct_UClass_ACOMP217401_Lab8GameMode()
{
	if (!Z_Registration_Info_UClass_ACOMP217401_Lab8GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACOMP217401_Lab8GameMode.OuterSingleton, Z_Construct_UClass_ACOMP217401_Lab8GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACOMP217401_Lab8GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ACOMP217401_Lab8GameMode);
ACOMP217401_Lab8GameMode::~ACOMP217401_Lab8GameMode() {}
// ********** End Class ACOMP217401_Lab8GameMode ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_COMP217401_Lab8_Source_COMP217401_Lab8_COMP217401_Lab8GameMode_h__Script_COMP217401_Lab8_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACOMP217401_Lab8GameMode, ACOMP217401_Lab8GameMode::StaticClass, TEXT("ACOMP217401_Lab8GameMode"), &Z_Registration_Info_UClass_ACOMP217401_Lab8GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACOMP217401_Lab8GameMode), 1291843828U) },
	};
}; // Z_CompiledInDeferFile_FID_COMP217401_Lab8_Source_COMP217401_Lab8_COMP217401_Lab8GameMode_h__Script_COMP217401_Lab8_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_COMP217401_Lab8_Source_COMP217401_Lab8_COMP217401_Lab8GameMode_h__Script_COMP217401_Lab8_3777185037{
	TEXT("/Script/COMP217401_Lab8"),
	Z_CompiledInDeferFile_FID_COMP217401_Lab8_Source_COMP217401_Lab8_COMP217401_Lab8GameMode_h__Script_COMP217401_Lab8_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_COMP217401_Lab8_Source_COMP217401_Lab8_COMP217401_Lab8GameMode_h__Script_COMP217401_Lab8_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
