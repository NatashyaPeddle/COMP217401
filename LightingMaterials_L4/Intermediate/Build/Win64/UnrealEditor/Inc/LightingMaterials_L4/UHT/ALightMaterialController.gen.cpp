// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ALightMaterialController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeALightMaterialController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LIGHTINGMATERIALS_L4_API UClass* Z_Construct_UClass_AALightMaterialController();
LIGHTINGMATERIALS_L4_API UClass* Z_Construct_UClass_AALightMaterialController_NoRegister();
UPackage* Z_Construct_UPackage__Script_LightingMaterials_L4();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AALightMaterialController ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AALightMaterialController;
UClass* AALightMaterialController::GetPrivateStaticClass()
{
	using TClass = AALightMaterialController;
	if (!Z_Registration_Info_UClass_AALightMaterialController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ALightMaterialController"),
			Z_Registration_Info_UClass_AALightMaterialController.InnerSingleton,
			StaticRegisterNativesAALightMaterialController,
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
	return Z_Registration_Info_UClass_AALightMaterialController.InnerSingleton;
}
UClass* Z_Construct_UClass_AALightMaterialController_NoRegister()
{
	return AALightMaterialController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AALightMaterialController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ALightMaterialController.h" },
		{ "ModuleRelativePath", "Public/ALightMaterialController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointLightComponent_MetaData[] = {
		{ "Category", "ALightMaterialController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Point Light Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALightMaterialController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Point Light Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "ALightMaterialController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Static Mesh Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ALightMaterialController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static Mesh Component" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AALightMaterialController constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PointLightComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AALightMaterialController constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AALightMaterialController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AALightMaterialController_Statics

// ********** Begin Class AALightMaterialController Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AALightMaterialController_Statics::NewProp_PointLightComponent = { "PointLightComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALightMaterialController, PointLightComponent), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointLightComponent_MetaData), NewProp_PointLightComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AALightMaterialController_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AALightMaterialController, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AALightMaterialController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALightMaterialController_Statics::NewProp_PointLightComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AALightMaterialController_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALightMaterialController_Statics::PropPointers) < 2048);
// ********** End Class AALightMaterialController Property Definitions *****************************
UObject* (*const Z_Construct_UClass_AALightMaterialController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LightingMaterials_L4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AALightMaterialController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AALightMaterialController_Statics::ClassParams = {
	&AALightMaterialController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AALightMaterialController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AALightMaterialController_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AALightMaterialController_Statics::Class_MetaDataParams), Z_Construct_UClass_AALightMaterialController_Statics::Class_MetaDataParams)
};
void AALightMaterialController::StaticRegisterNativesAALightMaterialController()
{
}
UClass* Z_Construct_UClass_AALightMaterialController()
{
	if (!Z_Registration_Info_UClass_AALightMaterialController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AALightMaterialController.OuterSingleton, Z_Construct_UClass_AALightMaterialController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AALightMaterialController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AALightMaterialController);
AALightMaterialController::~AALightMaterialController() {}
// ********** End Class AALightMaterialController **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217401_LightingMaterials_L4_Source_LightingMaterials_L4_Public_ALightMaterialController_h__Script_LightingMaterials_L4_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AALightMaterialController, AALightMaterialController::StaticClass, TEXT("AALightMaterialController"), &Z_Registration_Info_UClass_AALightMaterialController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AALightMaterialController), 425189001U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217401_LightingMaterials_L4_Source_LightingMaterials_L4_Public_ALightMaterialController_h__Script_LightingMaterials_L4_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217401_LightingMaterials_L4_Source_LightingMaterials_L4_Public_ALightMaterialController_h__Script_LightingMaterials_L4_2755817783{
	TEXT("/Script/LightingMaterials_L4"),
	Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217401_LightingMaterials_L4_Source_LightingMaterials_L4_Public_ALightMaterialController_h__Script_LightingMaterials_L4_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Elijah_Documents_GitHub_COMP217401_LightingMaterials_L4_Source_LightingMaterials_L4_Public_ALightMaterialController_h__Script_LightingMaterials_L4_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
