// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "S05_TestingGroundsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS05_TestingGroundsGameMode() {}
// Cross Module References
	S05_TESTINGGROUNDS_API UClass* Z_Construct_UClass_AS05_TestingGroundsGameMode_NoRegister();
	S05_TESTINGGROUNDS_API UClass* Z_Construct_UClass_AS05_TestingGroundsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_S05_TestingGrounds();
// End Cross Module References
	void AS05_TestingGroundsGameMode::StaticRegisterNativesAS05_TestingGroundsGameMode()
	{
	}
	UClass* Z_Construct_UClass_AS05_TestingGroundsGameMode_NoRegister()
	{
		return AS05_TestingGroundsGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AS05_TestingGroundsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_S05_TestingGrounds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "S05_TestingGroundsGameMode.h" },
				{ "ModuleRelativePath", "S05_TestingGroundsGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AS05_TestingGroundsGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AS05_TestingGroundsGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AS05_TestingGroundsGameMode, 1804823785);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AS05_TestingGroundsGameMode(Z_Construct_UClass_AS05_TestingGroundsGameMode, &AS05_TestingGroundsGameMode::StaticClass, TEXT("/Script/S05_TestingGrounds"), TEXT("AS05_TestingGroundsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AS05_TestingGroundsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
