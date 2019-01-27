#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Trapezoid.generated.h"

UCLASS()
class PECK_GAM_415_API ATrapezoid : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATrapezoid();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostActorCreated() override;
	virtual void PostLoad() override;
	virtual void GenerateBoxMesh();
	virtual void CreateSquare();
	virtual void CreateBoxMesh(FVector BoxRadius, TArray <FVector> & Vertices, TArray <int32> & Triangles, TArray <FVector> & Normals, TArray <FVector2D> & UVs,
		TArray <FProcMeshTangent> & Tangents, TArray <FColor> & Colors);

private:
	UPROPERTY(VisibleAnywhere)
		UProceduralMeshComponent* mesh;
	
	
};
