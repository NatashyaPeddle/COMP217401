// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BreakableActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBreakableActor() {}

// ********** Begin Cross Module References ********************************************************
COMP217401_LAB8_API UClass* Z_Construct_UClass_ABreakableActor();
COMP217401_LAB8_API UClass* Z_Construct_UClass_ABreakableActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_COMP217401_Lab8();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ABreakableActor **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ABreakableActor;
UClass* ABreakableActor::GetPrivateStaticClass()
{
	using TClass = ABreakableActor;
	if (!Z_Registration_Info_UClass_ABreakableActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BreakableActor"),
			Z_Registration_Info_UClass_ABreakableActor.InnerSingleton,
			StaticRegisterNativesABreakableActor,
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
	return Z_Registration_Info_UClass_ABreakableActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ABreakableActor_NoRegister()
{
	return ABreakableActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABreakableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BreakableActor.h" },
		{ "ModuleRelativePath", "BreakableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "BreakableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BreakableActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ABreakableActor constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ABreakableActor constinit property declarations ****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ABreakableActor_Statics

// ********** Begin Class ABreakableActor Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableActor_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableActor, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABreakableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableActor_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::PropPointers) < 2048);
// ********** End Class ABreakableActor Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_ABreakableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_COMP217401_Lab8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABreakableActor_Statics::ClassParams = {
	&ABreakableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABreakableActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABreakableActor_Statics::Class_MetaDataParams)
};
void ABreakableActor::StaticRegisterNativesABreakableActor()
{
}
UClass* Z_Construct_UClass_ABreakableActor()
{
	if (!Z_Registration_Info_UClass_ABreakableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABreakableActor.OuterSingleton, Z_Construct_UClass_ABreakableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABreakableActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ABreakableActor);
ABreakableActor::~ABreakableActor() {}
// ********** End Class ABreakableActor ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h__Script_COMP217401_Lab8_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABreakableActor, ABreakableActor::StaticClass, TEXT("ABreakableActor"), &Z_Registration_Info_UClass_ABreakableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABreakableActor), 1880414036U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h__Script_COMP217401_Lab8_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h__Script_COMP217401_Lab8_4016153557{
	TEXT("/Script/COMP217401_Lab8"),
	Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h__Script_COMP217401_Lab8_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h__Script_COMP217401_Lab8_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
