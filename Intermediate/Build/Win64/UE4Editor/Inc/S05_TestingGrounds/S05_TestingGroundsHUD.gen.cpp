// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "S05_TestingGroundsHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS05_TestingGroundsHUD() {}
// Cross Module References
	S05_TESTINGGROUNDS_API UClass* Z_Construct_UClass_AS05_TestingGroundsHUD_NoRegister();
	S05_TESTINGGROUNDS_API UClass* Z_Construct_UClass_AS05_TestingGroundsHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_S05_TestingGrounds();
// End Cross Module References
	void AS05_TestingGroundsHUD::StaticRegisterNativesAS05_TestingGroundsHUD()
	{
	}
	UClass* Z_Construct_UClass_AS05_TestingGroundsHUD_NoRegister()
	{
		return AS05_TestingGroundsHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AS05_TestingGroundsHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_S05_TestingGrounds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "S05_TestingGroundsHUD.h" },
				{ "ModuleRelativePath", "S05_TestingGroundsHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AS05_TestingGroundsHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AS05_TestingGroundsHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AS05_TestingGroundsHUD, 1795275239);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AS05_TestingGroundsHUD(Z_Construct_UClass_AS05_TestingGroundsHUD, &AS05_TestingGroundsHUD::StaticClass, TEXT("/Script/S05_TestingGrounds"), TEXT("AS05_TestingGroundsHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AS05_TestingGroundsHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
