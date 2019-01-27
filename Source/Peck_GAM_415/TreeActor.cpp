// Fill out your copyright notice in the Description page of Project Settings.

/* This class will be used to spawn a a tree object consisting of many smaller primitive components*/

#include "TreeActor.h"
#include "Engine.h"


// Sets default values
ATreeActor::ATreeActor() :m_wholeTextureRegion(0, 0, 0, 0, m_textureSize, m_textureSize)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Call and create the static meshes
	m_rootBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootBase"));
	RootComponent = m_rootBase;
	m_treeBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TreeBase"));
	m_tree_1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tree_One"));
	m_tree_2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tree_Two"));
	m_treeTop = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TreeTop"));

	static ConstructorHelpers::FObjectFinder <UStaticMesh> cylinder(TEXT("/Engine/BasicShapes/Cylinder"));
	m_treeBase->SetStaticMesh(cylinder.Object);

	static ConstructorHelpers::FObjectFinder <UStaticMesh> cone(TEXT("/Engine/BasicShapes/Cone"));
	m_tree_1->SetStaticMesh(cone.Object);
	m_tree_2->SetStaticMesh(cone.Object);
	m_treeTop->SetStaticMesh(cone.Object);
}

// Called when the game starts or when spawned
void ATreeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATreeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATreeActor::PostInitializeComponents()
{
}

void ATreeActor::SetSize(float)
{
}

void ATreeActor::RevealSmoothCircle(const FVector2D & pos, float radius)
{
}

void ATreeActor::UpdateTextureRegions(UTexture2D * Texture, int32 MidIndex, uint32 NumRegions, FUpdateTextureRegion2D * Regions, uint32 SrcPitch, uint32 SrcBpp, uint8 * SrcData, bool bFreeData)
{
}
