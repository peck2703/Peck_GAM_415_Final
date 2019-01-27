// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Cube_RunMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCube_RunMesh() {}
// Cross Module References
	PECK_GAM_415_API UClass* Z_Construct_UClass_ACube_RunMesh_NoRegister();
	PECK_GAM_415_API UClass* Z_Construct_UClass_ACube_RunMesh();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Peck_GAM_415();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
// End Cross Module References
	void ACube_RunMesh::StaticRegisterNativesACube_RunMesh()
	{
	}
	UClass* Z_Construct_UClass_ACube_RunMesh_NoRegister()
	{
		return ACube_RunMesh::StaticClass();
	}
	UClass* Z_Construct_UClass_ACube_RunMesh()
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
				{ "IncludePath", "Cube_RunMesh.h" },
				{ "ModuleRelativePath", "Cube_RunMesh.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[] = {
				{ "Category", "Cube_RunMesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Cube_RunMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mesh = { UE4CodeGen_Private::EPropertyClass::Object, "mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a0009, 1, nullptr, STRUCT_OFFSET(ACube_RunMesh, mesh), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_mesh_MetaData, ARRAY_COUNT(NewProp_mesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_mesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACube_RunMesh>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACube_RunMesh::StaticClass,
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
	IMPLEMENT_CLASS(ACube_RunMesh, 1193752295);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACube_RunMesh(Z_Construct_UClass_ACube_RunMesh, &ACube_RunMesh::StaticClass, TEXT("/Script/Peck_GAM_415"), TEXT("ACube_RunMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACube_RunMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
