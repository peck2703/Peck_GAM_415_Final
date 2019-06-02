// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Peck_GAM_415Projectile.generated.h"

UCLASS(config=Game)
class APeck_GAM_415Projectile : public AActor
{
	GENERATED_BODY()

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	class USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	class UProjectileMovementComponent* ProjectileMovement;

	UPROPERTY(EditAnywhere)
		UMaterialInterface* DecalToAdd;

	/*Lifespan determines how long the paint splat lasts (0 - forever)*/
	UPROPERTY(EditAnywhere)
		float lifespan;

	UPROPERTY(EditAnywhere)
		int NumberOfFrames = 4;

	/*Somehow this property does not take the BlueprintReadWrite, because it causes an error
	  but I am unable to generate the dynamic material needed to show the actual material*/
	UPROPERTY(EditAnywhere)
		UMaterialInstanceDynamic* DynamicDecal;

	static UDecalComponent* SpawnDecalAtLocation(const UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation = FRotator(-90, 0, 0), float LifeSpan = 0);

public:
	APeck_GAM_415Projectile();

	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	FORCEINLINE class USphereComponent* GetCollisionComp() const { return CollisionComp; }
	/** Returns ProjectileMovement subobject **/
	FORCEINLINE class UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }
};

