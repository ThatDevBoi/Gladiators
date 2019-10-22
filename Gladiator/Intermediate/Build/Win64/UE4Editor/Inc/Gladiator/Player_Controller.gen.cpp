// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gladiator/Player_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Controller() {}
// Cross Module References
	GLADIATOR_API UClass* Z_Construct_UClass_APlayer_Controller_NoRegister();
	GLADIATOR_API UClass* Z_Construct_UClass_APlayer_Controller();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Gladiator();
	GLADIATOR_API UFunction* Z_Construct_UFunction_APlayer_Controller_MoveForward();
	GLADIATOR_API UFunction* Z_Construct_UFunction_APlayer_Controller_MoveRight();
	GLADIATOR_API UFunction* Z_Construct_UFunction_APlayer_Controller_StartJump();
	GLADIATOR_API UFunction* Z_Construct_UFunction_APlayer_Controller_StopJump();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void APlayer_Controller::StaticRegisterNativesAPlayer_Controller()
	{
		UClass* Class = APlayer_Controller::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForward", &APlayer_Controller::execMoveForward },
			{ "MoveRight", &APlayer_Controller::execMoveRight },
			{ "StartJump", &APlayer_Controller::execStartJump },
			{ "StopJump", &APlayer_Controller::execStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayer_Controller_MoveForward_Statics
	{
		struct Player_Controller_eventMoveForward_Parms
		{
			float speed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_Controller_MoveForward_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_Controller_eventMoveForward_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_Controller_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Controller_MoveForward_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Controller_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Controller_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Controller, nullptr, "MoveForward", nullptr, nullptr, sizeof(Player_Controller_eventMoveForward_Parms), Z_Construct_UFunction_APlayer_Controller_MoveForward_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Controller_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Controller_MoveForward_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Controller_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Controller_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Controller_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Controller_MoveRight_Statics
	{
		struct Player_Controller_eventMoveRight_Parms
		{
			float speed;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayer_Controller_MoveRight_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Player_Controller_eventMoveRight_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayer_Controller_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayer_Controller_MoveRight_Statics::NewProp_speed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Controller_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player_Controller.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Controller_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Controller, nullptr, "MoveRight", nullptr, nullptr, sizeof(Player_Controller_eventMoveRight_Parms), Z_Construct_UFunction_APlayer_Controller_MoveRight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Controller_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Controller_MoveRight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Controller_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Controller_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Controller_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Controller_StartJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Controller_StartJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Start the jump\n" },
		{ "ModuleRelativePath", "Player_Controller.h" },
		{ "ToolTip", "Start the jump" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Controller_StartJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Controller, nullptr, "StartJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Controller_StartJump_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Controller_StartJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Controller_StartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Controller_StartJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayer_Controller_StopJump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayer_Controller_StopJump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Allows the jump to stop\n" },
		{ "ModuleRelativePath", "Player_Controller.h" },
		{ "ToolTip", "Allows the jump to stop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayer_Controller_StopJump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayer_Controller, nullptr, "StopJump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayer_Controller_StopJump_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayer_Controller_StopJump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayer_Controller_StopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayer_Controller_StopJump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayer_Controller_NoRegister()
	{
		return APlayer_Controller::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_Controller_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_Controller_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Gladiator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayer_Controller_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayer_Controller_MoveForward, "MoveForward" }, // 3411356337
		{ &Z_Construct_UFunction_APlayer_Controller_MoveRight, "MoveRight" }, // 758731804
		{ &Z_Construct_UFunction_APlayer_Controller_StartJump, "StartJump" }, // 2037996913
		{ &Z_Construct_UFunction_APlayer_Controller_StopJump, "StopJump" }, // 3079512444
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Controller_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player_Controller.h" },
		{ "ModuleRelativePath", "Player_Controller.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Controller_Statics::NewProp_PlayerCameraComponent_MetaData[] = {
		{ "Category", "Player_Controller" },
		{ "Comment", "// Camera Variable to add to player capsule\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player_Controller.h" },
		{ "ToolTip", "Camera Variable to add to player capsule" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_Controller_Statics::NewProp_PlayerCameraComponent = { "PlayerCameraComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_Controller, PlayerCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_Controller_Statics::NewProp_PlayerCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Controller_Statics::NewProp_PlayerCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer_Controller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Controller_Statics::NewProp_PlayerCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Controller_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Controller>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Controller_Statics::ClassParams = {
		&APlayer_Controller::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayer_Controller_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APlayer_Controller_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_Controller_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayer_Controller_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_Controller_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Controller, 2074144983);
	template<> GLADIATOR_API UClass* StaticClass<APlayer_Controller>()
	{
		return APlayer_Controller::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Controller(Z_Construct_UClass_APlayer_Controller, &APlayer_Controller::StaticClass, TEXT("/Script/Gladiator"), TEXT("APlayer_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
