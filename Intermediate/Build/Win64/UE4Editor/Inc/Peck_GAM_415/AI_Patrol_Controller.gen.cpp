// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TP_ThirdPerson/AI_Patrol_Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAI_Patrol_Controller() {}
// Cross Module References
	PECK_GAM_415_API UClass* Z_Construct_UClass_AAI_Patrol_Controller_NoRegister();
	PECK_GAM_415_API UClass* Z_Construct_UClass_AAI_Patrol_Controller();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Peck_GAM_415();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
// End Cross Module References
	void AAI_Patrol_Controller::StaticRegisterNativesAAI_Patrol_Controller()
	{
	}
	UClass* Z_Construct_UClass_AAI_Patrol_Controller_NoRegister()
	{
		return AAI_Patrol_Controller::StaticClass();
	}
	UClass* Z_Construct_UClass_AAI_Patrol_Controller()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AAIController,
				(UObject* (*)())Z_Construct_UPackage__Script_Peck_GAM_415,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TP_ThirdPerson/AI_Patrol_Controller.h" },
				{ "ModuleRelativePath", "TP_ThirdPerson/AI_Patrol_Controller.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myBHTree_MetaData[] = {
				{ "Category", "AI_Patrol_Controller" },
				{ "ModuleRelativePath", "TP_ThirdPerson/AI_Patrol_Controller.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myBHTree = { UE4CodeGen_Private::EPropertyClass::Object, "myBHTree", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AAI_Patrol_Controller, myBHTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(NewProp_myBHTree_MetaData, ARRAY_COUNT(NewProp_myBHTree_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myBBData_MetaData[] = {
				{ "Category", "AI_Patrol_Controller" },
				{ "ModuleRelativePath", "TP_ThirdPerson/AI_Patrol_Controller.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myBBData = { UE4CodeGen_Private::EPropertyClass::Object, "myBBData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AAI_Patrol_Controller, myBBData), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(NewProp_myBBData_MetaData, ARRAY_COUNT(NewProp_myBBData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_myBBComp_MetaData[] = {
				{ "Category", "AI_Patrol_Controller" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "TP_ThirdPerson/AI_Patrol_Controller.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_myBBComp = { UE4CodeGen_Private::EPropertyClass::Object, "myBBComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AAI_Patrol_Controller, myBBComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(NewProp_myBBComp_MetaData, ARRAY_COUNT(NewProp_myBBComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_myBHTree,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_myBBData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_myBBComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAI_Patrol_Controller>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAI_Patrol_Controller::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
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
	IMPLEMENT_CLASS(AAI_Patrol_Controller, 3833445560);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAI_Patrol_Controller(Z_Construct_UClass_AAI_Patrol_Controller, &AAI_Patrol_Controller::StaticClass, TEXT("/Script/Peck_GAM_415"), TEXT("AAI_Patrol_Controller"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAI_Patrol_Controller);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
