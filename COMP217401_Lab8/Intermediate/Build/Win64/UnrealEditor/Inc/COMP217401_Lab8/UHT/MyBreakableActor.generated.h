// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyBreakableActor.h"

#ifdef COMP217401_LAB8_MyBreakableActor_generated_h
#error "MyBreakableActor.generated.h already included, missing '#pragma once' in MyBreakableActor.h"
#endif
#define COMP217401_LAB8_MyBreakableActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyBreakableActor ********************************************************
struct Z_Construct_UClass_AMyBreakableActor_Statics;
COMP217401_LAB8_API UClass* Z_Construct_UClass_AMyBreakableActor_NoRegister();

#define FID_COMP217401_Lab8_Source_COMP217401_Lab8_MyBreakableActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyBreakableActor(); \
	friend struct ::Z_Construct_UClass_AMyBreakableActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMP217401_LAB8_API UClass* ::Z_Construct_UClass_AMyBreakableActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyBreakableActor, ABreakableActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/COMP217401_Lab8"), Z_Construct_UClass_AMyBreakableActor_NoRegister) \
	DECLARE_SERIALIZER(AMyBreakableActor)


#define FID_COMP217401_Lab8_Source_COMP217401_Lab8_MyBreakableActor_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyBreakableActor(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyBreakableActor(AMyBreakableActor&&) = delete; \
	AMyBreakableActor(const AMyBreakableActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyBreakableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyBreakableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyBreakableActor) \
	NO_API virtual ~AMyBreakableActor();


#define FID_COMP217401_Lab8_Source_COMP217401_Lab8_MyBreakableActor_h_12_PROLOG
#define FID_COMP217401_Lab8_Source_COMP217401_Lab8_MyBreakableActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_COMP217401_Lab8_Source_COMP217401_Lab8_MyBreakableActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_COMP217401_Lab8_Source_COMP217401_Lab8_MyBreakableActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyBreakableActor;

// ********** End Class AMyBreakableActor **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_COMP217401_Lab8_Source_COMP217401_Lab8_MyBreakableActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
