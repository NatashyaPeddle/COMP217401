// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerActor.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTriggerActor() {}

// ********** Begin Cross Module References ********************************************************
COMP217401_LAB8_API UClass* Z_Construct_UClass_ATriggerActor();
COMP217401_LAB8_API UClass* Z_Construct_UClass_ATriggerActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_COMP217401_Lab8();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATriggerActor Function OnOverlapBegin ************************************
struct Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics
{
	struct TriggerActor_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TriggerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnOverlapBegin constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnOverlapBegin constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnOverlapBegin Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerActor_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerActor_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerActor_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerActor_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((TriggerActor_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TriggerActor_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerActor_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::PropPointers) < 2048);
// ********** End Function OnOverlapBegin Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATriggerActor, nullptr, "OnOverlapBegin", 	Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::TriggerActor_eventOnOverlapBegin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::TriggerActor_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATriggerActor_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerActor_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATriggerActor::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ATriggerActor Function OnOverlapBegin **************************************

// ********** Begin Class ATriggerActor ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATriggerActor;
UClass* ATriggerActor::GetPrivateStaticClass()
{
	using TClass = ATriggerActor;
	if (!Z_Registration_Info_UClass_ATriggerActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TriggerActor"),
			Z_Registration_Info_UClass_ATriggerActor.InnerSingleton,
			StaticRegisterNativesATriggerActor,
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
	return Z_Registration_Info_UClass_ATriggerActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ATriggerActor_NoRegister()
{
	return ATriggerActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATriggerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerActor.h" },
		{ "ModuleRelativePath", "TriggerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "TriggerActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TriggerActor.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATriggerActor constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATriggerActor constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("OnOverlapBegin"), .Pointer = &ATriggerActor::execOnOverlapBegin },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerActor_OnOverlapBegin, "OnOverlapBegin" }, // 1860044844
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATriggerActor_Statics

// ********** Begin Class ATriggerActor Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerActor_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerActor, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerActor_Statics::NewProp_TriggerBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerActor_Statics::PropPointers) < 2048);
// ********** End Class ATriggerActor Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_ATriggerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_COMP217401_Lab8,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerActor_Statics::ClassParams = {
	&ATriggerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATriggerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriggerActor_Statics::Class_MetaDataParams)
};
void ATriggerActor::StaticRegisterNativesATriggerActor()
{
	UClass* Class = ATriggerActor::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ATriggerActor_Statics::Funcs));
}
UClass* Z_Construct_UClass_ATriggerActor()
{
	if (!Z_Registration_Info_UClass_ATriggerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerActor.OuterSingleton, Z_Construct_UClass_ATriggerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATriggerActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATriggerActor);
ATriggerActor::~ATriggerActor() {}
// ********** End Class ATriggerActor **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_TriggerActor_h__Script_COMP217401_Lab8_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerActor, ATriggerActor::StaticClass, TEXT("ATriggerActor"), &Z_Registration_Info_UClass_ATriggerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerActor), 3550657473U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_TriggerActor_h__Script_COMP217401_Lab8_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_TriggerActor_h__Script_COMP217401_Lab8_1397022460{
	TEXT("/Script/COMP217401_Lab8"),
	Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_TriggerActor_h__Script_COMP217401_Lab8_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_super_OneDrive_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_TriggerActor_h__Script_COMP217401_Lab8_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
