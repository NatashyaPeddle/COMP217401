// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy.h"

#ifdef COMP217401_LAB8_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define COMP217401_LAB8_Enemy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnemy *******************************************************************
struct Z_Construct_UClass_AEnemy_Statics;
COMP217401_LAB8_API UClass* Z_Construct_UClass_AEnemy_NoRegister();

#define FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_Enemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct ::Z_Construct_UClass_AEnemy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMP217401_LAB8_API UClass* ::Z_Construct_UClass_AEnemy_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/COMP217401_Lab8"), Z_Construct_UClass_AEnemy_NoRegister) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_Enemy_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemy(AEnemy&&) = delete; \
	AEnemy(const AEnemy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy) \
	NO_API virtual ~AEnemy();


#define FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_Enemy_h_9_PROLOG
#define FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_Enemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_Enemy_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_Enemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemy;

// ********** End Class AEnemy *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Elijah_Documents_GitHub_COMP217401_COMP217401_Lab8_Source_COMP217401_Lab8_Enemy_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
