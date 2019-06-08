// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Peck_GAM_415Projectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"

UDecalComponent * APeck_GAM_415Projectile::SpawnDecalAtLocation(const UObject * WorldContextObject, UMaterialInterface * DecalMaterial, FVector DecalSize, FVector Location, FRotator Rotation, float LifeSpan)
{
	return nullptr;
}

APeck_GAM_415Projectile::APeck_GAM_415Projectile()
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &APeck_GAM_415Projectile::OnHit);		// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
	
}

void APeck_GAM_415Projectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		/*Attempting to replicate the BP activity*/

		float decalSize = FMath::RandRange(60.f, 100.f);

		DynamicDecal = UMaterialInstanceDynamic::Create(DecalToAdd, this);
		//Set parameters
		DynamicDecal->SetScalarParameterValue("Frame", NumberOfFrames);

		//Create Color by FLinear

		DynamicDecal->SetVectorParameterValue("Color", FLinearColor::MakeRandomColor());

		//UGameplayStatics::SpawnDecalAtLocation(OtherActor, DynamicDecal, FVector(decalSize), Hit.Location, OtherActor->GetActorRotation(), lifespan);

		FVector UpVector = HitComp->GetUpVector();
		FVector NormalVector = Hit.ImpactNormal;

		FVector RotationAxis = FVector::CrossProduct(UpVector, NormalVector);
		RotationAxis.Normalize();

		float DotProduct = FVector::DotProduct(UpVector, NormalVector);
		float RotationAngle = acosf(DotProduct);

		FQuat Quat = FQuat(RotationAxis, RotationAngle);
		FQuat CompQuat = RootComponent->GetComponentQuat();

		FQuat NewQuat = Quat * CompQuat;

		UGameplayStatics::SpawnDecalAttached(DynamicDecal, FVector(decalSize), HitComp, Hit.BoneName, Hit.Location, NewQuat.Rotator(), EAttachLocation::KeepRelativeOffset, lifespan);
		Destroy();
	}
}