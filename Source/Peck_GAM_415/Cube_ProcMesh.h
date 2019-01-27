// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Cube_ProcMesh.generated.h"

UCLASS()
class PECK_GAM_415_API ACube_ProcMesh : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACube_ProcMesh();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostActorCreated() override;
	virtual void PostLoad() override;
	virtual void CreateSquare();
	virtual void GenerateBoxMesh();
	virtual void CreateBoxMesh(FVector BoxRadius, TArray <FVector> & Vertices, TArray <int32> & Triangles, TArray <FVector> & Normals, TArray <FVector2D> & UVs,
		TArray <FProcMeshTangent> & Tangents, TArray <FColor> & Colors);

private:
	UPROPERTY(VisibleAnywhere)
		UProceduralMeshComponent* mesh;
	
	
};
