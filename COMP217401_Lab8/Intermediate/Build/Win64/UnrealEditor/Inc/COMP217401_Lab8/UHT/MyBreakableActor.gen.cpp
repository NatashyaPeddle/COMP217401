// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyBreakableActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyBreakableActor() {}

// ********** Begin Cross Module References ********************************************************
COMP217401_LAB8_API UClass* Z_Construct_UClass_ABreakableActor();
COMP217401_LAB8_API UClass* Z_Construct_UClass_AMyBreakableActor();
COMP217401_LAB8_API UClass* Z_Construct_UClass_AMyBreakableActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_COMP217401_Lab8();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyBreakableActor ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMyBreakableActor;
UClass* AMyBreakableActor::GetPrivateStaticClass()
{
	using TClass = AMyBreakableActor;
	if (!Z_Registration_Info_UClass_AMyBreakableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyBreakableActor"),
			Z_Registration_Info_UClass_AMyBreakableActor.InnerSingleton,
			StaticRegisterNativesAMyBreakableActor,
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
	return Z_Registration_Info_UClass_AMyBreakableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyBreakableActor_NoRegister()
{
	return AMyBreakableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyBreakableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyBreakableActor.h" },
		{ "ModuleRelativePath", "MyBreakableActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMyBreakableActor constinit property declarations ************************
// ********** End Class AMyBreakableActor constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBreakableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMyBreakableActor_Statics
UObject* (*const Z_Construct_UClass_AMyBreakableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABreakableActor,
	(UObject* (*)())Z_Construct_UPackage__Script_COMP217401_Lab8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBreakableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyBreakableActor_Statics::ClassParams = {
	&AMyBreakableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBreakableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyBreakableActor_Statics::Class_MetaDataParams)
};
void AMyBreakableActor::StaticRegisterNativesAMyBreakableActor()
{
}
UClass* Z_Construct_UClass_AMyBreakableActor()
{
	if (!Z_Registration_Info_UClass_AMyBreakableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyBreakableActor.OuterSingleton, Z_Construct_UClass_AMyBreakableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyBreakableActor.OuterSingleton;
}
AMyBreakableActor::AMyBreakableActor() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMyBreakableActor);
AMyBreakableActor::~AMyBreakableActor() {}
// ********** End Class AMyBreakableActor **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_MyBreakableActor_h__Script_COMP217401_Lab8_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyBreakableActor, AMyBreakableActor::StaticClass, TEXT("AMyBreakableActor"), &Z_Registration_Info_UClass_AMyBreakableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyBreakableActor), 3354353690U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_MyBreakableActor_h__Script_COMP217401_Lab8_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_MyBreakableActor_h__Script_COMP217401_Lab8_1192772659{
	TEXT("/Script/COMP217401_Lab8"),
	Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_MyBreakableActor_h__Script_COMP217401_Lab8_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_MyBreakableActor_h__Script_COMP217401_Lab8_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
