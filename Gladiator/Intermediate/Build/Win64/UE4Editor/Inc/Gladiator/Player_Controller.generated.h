// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GLADIATOR_Player_Controller_generated_h
#error "Player_Controller.generated.h already included, missing '#pragma once' in Player_Controller.h"
#endif
#define GLADIATOR_Player_Controller_generated_h

#define Gladiator_Source_Gladiator_Player_Controller_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWalkForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WalkForward(Z_Param_speed); \
		P_NATIVE_END; \
	}


#define Gladiator_Source_Gladiator_Player_Controller_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_speed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWalkForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_speed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->WalkForward(Z_Param_speed); \
		P_NATIVE_END; \
	}


#define Gladiator_Source_Gladiator_Player_Controller_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_Controller(); \
	friend struct Z_Construct_UClass_APlayer_Controller_Statics; \
public: \
	DECLARE_CLASS(APlayer_Controller, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Gladiator"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Controller)


#define Gladiator_Source_Gladiator_Player_Controller_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_Controller(); \
	friend struct Z_Construct_UClass_APlayer_Controller_Statics; \
public: \
	DECLARE_CLASS(APlayer_Controller, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Gladiator"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Controller)


#define Gladiator_Source_Gladiator_Player_Controller_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_Controller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_Controller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Controller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Controller(APlayer_Controller&&); \
	NO_API APlayer_Controller(const APlayer_Controller&); \
public:


#define Gladiator_Source_Gladiator_Player_Controller_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Controller(APlayer_Controller&&); \
	NO_API APlayer_Controller(const APlayer_Controller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Controller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Controller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_Controller)


#define Gladiator_Source_Gladiator_Player_Controller_h_12_PRIVATE_PROPERTY_OFFSET
#define Gladiator_Source_Gladiator_Player_Controller_h_9_PROLOG
#define Gladiator_Source_Gladiator_Player_Controller_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gladiator_Source_Gladiator_Player_Controller_h_12_PRIVATE_PROPERTY_OFFSET \
	Gladiator_Source_Gladiator_Player_Controller_h_12_RPC_WRAPPERS \
	Gladiator_Source_Gladiator_Player_Controller_h_12_INCLASS \
	Gladiator_Source_Gladiator_Player_Controller_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gladiator_Source_Gladiator_Player_Controller_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gladiator_Source_Gladiator_Player_Controller_h_12_PRIVATE_PROPERTY_OFFSET \
	Gladiator_Source_Gladiator_Player_Controller_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Gladiator_Source_Gladiator_Player_Controller_h_12_INCLASS_NO_PURE_DECLS \
	Gladiator_Source_Gladiator_Player_Controller_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLADIATOR_API UClass* StaticClass<class APlayer_Controller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gladiator_Source_Gladiator_Player_Controller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
