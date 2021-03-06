// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Peck_GAM_415Projectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePeck_GAM_415Projectile() {}
// Cross Module References
	PECK_GAM_415_API UClass* Z_Construct_UClass_APeck_GAM_415Projectile_NoRegister();
	PECK_GAM_415_API UClass* Z_Construct_UClass_APeck_GAM_415Projectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Peck_GAM_415();
	PECK_GAM_415_API UFunction* Z_Construct_UFunction_APeck_GAM_415Projectile_OnHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	void APeck_GAM_415Projectile::StaticRegisterNativesAPeck_GAM_415Projectile()
	{
		UClass* Class = APeck_GAM_415Projectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHit", (Native)&APeck_GAM_415Projectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APeck_GAM_415Projectile_OnHit()
	{
		struct Peck_GAM_415Projectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Peck_GAM_415Projectile_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(NewProp_Hit_MetaData, ARRAY_COUNT(NewProp_Hit_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalImpulse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Peck_GAM_415Projectile_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Peck_GAM_415Projectile_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_OtherComp_MetaData, ARRAY_COUNT(NewProp_OtherComp_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Peck_GAM_415Projectile_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComp = { UE4CodeGen_Private::EPropertyClass::Object, "HitComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(Peck_GAM_415Projectile_eventOnHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_HitComp_MetaData, ARRAY_COUNT(NewProp_HitComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hit,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalImpulse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OtherActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Peck_GAM_415Projectile.h" },
				{ "ToolTip", "called when projectile hits something" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APeck_GAM_415Projectile, "OnHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00C20401, sizeof(Peck_GAM_415Projectile_eventOnHit_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APeck_GAM_415Projectile_NoRegister()
	{
		return APeck_GAM_415Projectile::StaticClass();
	}
	UClass* Z_Construct_UClass_APeck_GAM_415Projectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Peck_GAM_415,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APeck_GAM_415Projectile_OnHit, "OnHit" }, // 2915472129
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Peck_GAM_415Projectile.h" },
				{ "ModuleRelativePath", "Peck_GAM_415Projectile.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicDecal_MetaData[] = {
				{ "Category", "Peck_GAM_415Projectile" },
				{ "ModuleRelativePath", "Peck_GAM_415Projectile.h" },
				{ "ToolTip", "Somehow this property does not take the BlueprintReadWrite, because it causes an error\n         but I am unable to generate the dynamic material needed to show the actual material" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DynamicDecal = { UE4CodeGen_Private::EPropertyClass::Object, "DynamicDecal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(APeck_GAM_415Projectile, DynamicDecal), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(NewProp_DynamicDecal_MetaData, ARRAY_COUNT(NewProp_DynamicDecal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfFrames_MetaData[] = {
				{ "Category", "Peck_GAM_415Projectile" },
				{ "ModuleRelativePath", "Peck_GAM_415Projectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfFrames = { UE4CodeGen_Private::EPropertyClass::Int, "NumberOfFrames", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(APeck_GAM_415Projectile, NumberOfFrames), METADATA_PARAMS(NewProp_NumberOfFrames_MetaData, ARRAY_COUNT(NewProp_NumberOfFrames_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lifespan_MetaData[] = {
				{ "Category", "Peck_GAM_415Projectile" },
				{ "ModuleRelativePath", "Peck_GAM_415Projectile.h" },
				{ "ToolTip", "Lifespan determines how long the paint splat lasts (0 - forever)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifespan = { UE4CodeGen_Private::EPropertyClass::Float, "lifespan", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(APeck_GAM_415Projectile, lifespan), METADATA_PARAMS(NewProp_lifespan_MetaData, ARRAY_COUNT(NewProp_lifespan_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalToAdd_MetaData[] = {
				{ "Category", "Peck_GAM_415Projectile" },
				{ "ModuleRelativePath", "Peck_GAM_415Projectile.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalToAdd = { UE4CodeGen_Private::EPropertyClass::Object, "DecalToAdd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(APeck_GAM_415Projectile, DecalToAdd), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_DecalToAdd_MetaData, ARRAY_COUNT(NewProp_DecalToAdd_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Movement" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Peck_GAM_415Projectile.h" },
				{ "ToolTip", "Projectile movement component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(APeck_GAM_415Projectile, ProjectileMovement), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(NewProp_ProjectileMovement_MetaData, ARRAY_COUNT(NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[] = {
				{ "Category", "Projectile" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Peck_GAM_415Projectile.h" },
				{ "ToolTip", "Sphere collision component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComp = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b0009, 1, nullptr, STRUCT_OFFSET(APeck_GAM_415Projectile, CollisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(NewProp_CollisionComp_MetaData, ARRAY_COUNT(NewProp_CollisionComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DynamicDecal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumberOfFrames,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_lifespan,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecalToAdd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionComp,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APeck_GAM_415Projectile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APeck_GAM_415Projectile::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APeck_GAM_415Projectile, 3870664360);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APeck_GAM_415Projectile(Z_Construct_UClass_APeck_GAM_415Projectile, &APeck_GAM_415Projectile::StaticClass, TEXT("/Script/Peck_GAM_415"), TEXT("APeck_GAM_415Projectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APeck_GAM_415Projectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
