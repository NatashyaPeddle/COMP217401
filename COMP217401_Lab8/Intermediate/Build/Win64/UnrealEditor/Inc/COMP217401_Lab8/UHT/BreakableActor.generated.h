// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BreakableActor.h"

#ifdef COMP217401_LAB8_BreakableActor_generated_h
#error "BreakableActor.generated.h already included, missing '#pragma once' in BreakableActor.h"
#endif
#define COMP217401_LAB8_BreakableActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ABreakableActor **********************************************************
#define FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


struct Z_Construct_UClass_ABreakableActor_Statics;
COMP217401_LAB8_API UClass* Z_Construct_UClass_ABreakableActor_NoRegister();

#define FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABreakableActor(); \
	friend struct ::Z_Construct_UClass_ABreakableActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMP217401_LAB8_API UClass* ::Z_Construct_UClass_ABreakableActor_NoRegister(); \
public: \
	DECLARE_CLASS2(ABreakableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/COMP217401_Lab8"), Z_Construct_UClass_ABreakableActor_NoRegister) \
	DECLARE_SERIALIZER(ABreakableActor)


#define FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABreakableActor(ABreakableActor&&) = delete; \
	ABreakableActor(const ABreakableActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABreakableActor) \
	NO_API virtual ~ABreakableActor();


#define FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h_9_PROLOG
#define FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABreakableActor;

// ********** End Class ABreakableActor ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_BreakableActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
