// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TreeActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeActor() {}
// Cross Module References
	PECK_GAM_415_API UClass* Z_Construct_UClass_ATreeActor_NoRegister();
	PECK_GAM_415_API UClass* Z_Construct_UClass_ATreeActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Peck_GAM_415();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ATreeActor::StaticRegisterNativesATreeActor()
	{
	}
	UClass* Z_Construct_UClass_ATreeActor_NoRegister()
	{
		return ATreeActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ATreeActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Peck_GAM_415,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "TreeActor.h" },
				{ "ModuleRelativePath", "TreeActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_dynamicMaterialInstance_MetaData[] = {
				{ "ModuleRelativePath", "TreeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_dynamicMaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "m_dynamicMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ATreeActor, m_dynamicMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(NewProp_m_dynamicMaterialInstance_MetaData, ARRAY_COUNT(NewProp_m_dynamicMaterialInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_dynamicMaterial_MetaData[] = {
				{ "ModuleRelativePath", "TreeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_dynamicMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "m_dynamicMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ATreeActor, m_dynamicMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_m_dynamicMaterial_MetaData, ARRAY_COUNT(NewProp_m_dynamicMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_dynamicTexture_MetaData[] = {
				{ "ModuleRelativePath", "TreeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_dynamicTexture = { UE4CodeGen_Private::EPropertyClass::Object, "m_dynamicTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ATreeActor, m_dynamicTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_m_dynamicTexture_MetaData, ARRAY_COUNT(NewProp_m_dynamicTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_treeTop_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "TreeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_treeTop = { UE4CodeGen_Private::EPropertyClass::Object, "m_treeTop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ATreeActor, m_treeTop), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_m_treeTop_MetaData, ARRAY_COUNT(NewProp_m_treeTop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_tree_2_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "TreeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_tree_2 = { UE4CodeGen_Private::EPropertyClass::Object, "m_tree_2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ATreeActor, m_tree_2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_m_tree_2_MetaData, ARRAY_COUNT(NewProp_m_tree_2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_tree_1_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "TreeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_tree_1 = { UE4CodeGen_Private::EPropertyClass::Object, "m_tree_1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ATreeActor, m_tree_1), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_m_tree_1_MetaData, ARRAY_COUNT(NewProp_m_tree_1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_treeBase_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "TreeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_treeBase = { UE4CodeGen_Private::EPropertyClass::Object, "m_treeBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ATreeActor, m_treeBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_m_treeBase_MetaData, ARRAY_COUNT(NewProp_m_treeBase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_rootBase_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "TreeActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_rootBase = { UE4CodeGen_Private::EPropertyClass::Object, "m_rootBase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000080008, 1, nullptr, STRUCT_OFFSET(ATreeActor, m_rootBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_m_rootBase_MetaData, ARRAY_COUNT(NewProp_m_rootBase_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_dynamicMaterialInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_dynamicMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_dynamicTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_treeTop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_tree_2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_tree_1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_treeBase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_m_rootBase,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATreeActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATreeActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATreeActor, 1697810569);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATreeActor(Z_Construct_UClass_ATreeActor, &ATreeActor::StaticClass, TEXT("/Script/Peck_GAM_415"), TEXT("ATreeActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATreeActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
