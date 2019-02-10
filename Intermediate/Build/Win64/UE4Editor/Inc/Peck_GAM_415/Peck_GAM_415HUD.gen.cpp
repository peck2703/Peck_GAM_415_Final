// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Peck_GAM_415HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePeck_GAM_415HUD() {}
// Cross Module References
	PECK_GAM_415_API UClass* Z_Construct_UClass_APeck_GAM_415HUD_NoRegister();
	PECK_GAM_415_API UClass* Z_Construct_UClass_APeck_GAM_415HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Peck_GAM_415();
// End Cross Module References
	void APeck_GAM_415HUD::StaticRegisterNativesAPeck_GAM_415HUD()
	{
	}
	UClass* Z_Construct_UClass_APeck_GAM_415HUD_NoRegister()
	{
		return APeck_GAM_415HUD::StaticClass();
	}
	UClass* Z_Construct_UClass_APeck_GAM_415HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_Peck_GAM_415,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "Peck_GAM_415HUD.h" },
				{ "ModuleRelativePath", "Peck_GAM_415HUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APeck_GAM_415HUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APeck_GAM_415HUD::StaticClass,
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
	IMPLEMENT_CLASS(APeck_GAM_415HUD, 3723361900);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APeck_GAM_415HUD(Z_Construct_UClass_APeck_GAM_415HUD, &APeck_GAM_415HUD::StaticClass, TEXT("/Script/Peck_GAM_415"), TEXT("APeck_GAM_415HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APeck_GAM_415HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
