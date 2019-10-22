// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gladiator/GladiatorGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGladiatorGameModeBase() {}
// Cross Module References
	GLADIATOR_API UClass* Z_Construct_UClass_AGladiatorGameModeBase_NoRegister();
	GLADIATOR_API UClass* Z_Construct_UClass_AGladiatorGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Gladiator();
// End Cross Module References
	void AGladiatorGameModeBase::StaticRegisterNativesAGladiatorGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGladiatorGameModeBase_NoRegister()
	{
		return AGladiatorGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGladiatorGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGladiatorGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Gladiator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGladiatorGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GladiatorGameModeBase.h" },
		{ "ModuleRelativePath", "GladiatorGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGladiatorGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGladiatorGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGladiatorGameModeBase_Statics::ClassParams = {
		&AGladiatorGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AGladiatorGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGladiatorGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGladiatorGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGladiatorGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGladiatorGameModeBase, 62168574);
	template<> GLADIATOR_API UClass* StaticClass<AGladiatorGameModeBase>()
	{
		return AGladiatorGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGladiatorGameModeBase(Z_Construct_UClass_AGladiatorGameModeBase, &AGladiatorGameModeBase::StaticClass, TEXT("/Script/Gladiator"), TEXT("AGladiatorGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGladiatorGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
