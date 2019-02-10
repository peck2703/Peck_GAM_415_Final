// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef PECK_GAM_415_Peck_GAM_415Projectile_generated_h
#error "Peck_GAM_415Projectile.generated.h already included, missing '#pragma once' in Peck_GAM_415Projectile.h"
#endif
#define PECK_GAM_415_Peck_GAM_415Projectile_generated_h

#define Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPeck_GAM_415Projectile(); \
	friend PECK_GAM_415_API class UClass* Z_Construct_UClass_APeck_GAM_415Projectile(); \
public: \
	DECLARE_CLASS(APeck_GAM_415Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Peck_GAM_415"), NO_API) \
	DECLARE_SERIALIZER(APeck_GAM_415Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPeck_GAM_415Projectile(); \
	friend PECK_GAM_415_API class UClass* Z_Construct_UClass_APeck_GAM_415Projectile(); \
public: \
	DECLARE_CLASS(APeck_GAM_415Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Peck_GAM_415"), NO_API) \
	DECLARE_SERIALIZER(APeck_GAM_415Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APeck_GAM_415Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APeck_GAM_415Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APeck_GAM_415Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APeck_GAM_415Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APeck_GAM_415Projectile(APeck_GAM_415Projectile&&); \
	NO_API APeck_GAM_415Projectile(const APeck_GAM_415Projectile&); \
public:


#define Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APeck_GAM_415Projectile(APeck_GAM_415Projectile&&); \
	NO_API APeck_GAM_415Projectile(const APeck_GAM_415Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APeck_GAM_415Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APeck_GAM_415Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APeck_GAM_415Projectile)


#define Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(APeck_GAM_415Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(APeck_GAM_415Projectile, ProjectileMovement); }


#define Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_9_PROLOG
#define Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_RPC_WRAPPERS \
	Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_INCLASS \
	Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_INCLASS_NO_PURE_DECLS \
	Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Peck_GAM_415_Source_Peck_GAM_415_Peck_GAM_415Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
