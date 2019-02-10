// Fill out your copyright notice in the Description page of Project Settings.

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * This class will be used to spawn a a tree object consisting of many smaller primitive components  *
 *                                                                                                   *
 * Although whenever I try and set the static meshes to the basic shapes in the engine content, UE   *
 * crashes randomly and doesn't give an error message why, because I am missing some symbols, which  *
 * make no sense to me, so for now, I will continue on, and
*/

#include "TreeActor.h"
#include "Engine.h"


// Sets default values
ATreeActor::ATreeActor() :m_wholeTextureRegion(0, 0, 0, 0, m_textureSize, m_textureSize)
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Call and create the static meshes - There is an example BP in the testObject Folder
	m_rootBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootBase"));

	RootComponent = m_rootBase;
	m_treeBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TreeBase"));

	//I can't seem to set the relative transform to FVector(0,0,0), but all the objects spawn
	m_treeBase->ResetRelativeTransform();
	m_treeBase->SetRelativeLocation(FVector(0, 0, 0), false, nullptr, ETeleportType::None);
	m_tree_1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tree_One"));
	m_tree_2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tree_Two"));
	m_treeTop = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TreeTop"));

	m_treeBase->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	{
		static ConstructorHelpers::FObjectFinder<UStaticMesh> asset(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
		m_treeBase->SetStaticMesh(asset.Object);
	}

	/*Dealing with these other components seem to also crash the game, so in the meantime I will leave
	* them commented out*/

	static ConstructorHelpers::FObjectFinder <UStaticMesh> asset(TEXT("/Engine/BasicShapes/Cone.Cone"));
	m_tree_1->SetStaticMesh(asset.Object);
	m_tree_2->SetStaticMesh(asset.Object);
	m_treeTop->SetStaticMesh(asset.Object);

	/*Until I get a material ready, this will remain commented out to avoid crashes
	 *which now seems to work without crashing, but still doesn't create the object*/

	// Load the base material from your created material.  
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> asset(TEXT("Material'/Game/Shaders/TreeMat.TreeMat'"));
		m_dynamicMaterial = asset.Object;
	}
	// Create the run-time texture, which is stil pending.  
	if (!m_dynamicTexture)
	{
		m_dynamicTexture = UTexture2D::CreateTransient(m_textureSize, m_textureSize, PF_G8);
		m_dynamicTexture->CompressionSettings = TextureCompressionSettings::TC_Grayscale;
		m_dynamicTexture->SRGB = 0;
		m_dynamicTexture->UpdateResource();
		m_dynamicTexture->MipGenSettings = TMGS_NoMipmaps;
	}

	// Initialize array to all black.  
	for (int x = 0; x < m_textureSize; ++x)
		for (int y = 0; y < m_textureSize; ++y) m_pixelArray[y * m_textureSize + x] = 255;
	// Propagate memory's array to texture.  
	if (m_dynamicTexture) UpdateTextureRegions(m_dynamicTexture, 0, 1, &m_wholeTextureRegion, m_textureSize, 1, m_pixelArray, false);
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
	Super::PostInitializeComponents();
	// Create a dynamic material instance to swap in the fog texture.  
	if (m_dynamicMaterial)
	{
		m_dynamicMaterialInstance = UMaterialInstanceDynamic::Create(m_dynamicMaterial, this);
		m_dynamicMaterialInstance->SetTextureParameterValue("TreeTex", m_dynamicTexture);
	}
	// Set the dynamic material to the mesh.  
	if (m_dynamicMaterialInstance)
		m_treeBase->SetMaterial(0, m_dynamicMaterialInstance);
}

void ATreeActor::SetSize(float s)
{
	m_coverSize = s;
	m_treeBase->SetRelativeScale3D(FVector(m_coverSize, m_coverSize, 1));
}

void ATreeActor::RevealSmoothCircle(const FVector2D & pos, float radius)
{
	// Calculate the where circle center is inside texture space  
	FVector2D texel = pos - FVector2D(GetActorLocation().X, GetActorLocation().Y);
	texel = texel * m_textureSize / m_coverSize;

	// Calculate radius in texel unit ( 1 is 1 pixel )  
	texel += FVector2D(m_textureSize / 2, m_textureSize / 2);

	// The square area to update
	float texelRadius = radius * m_textureSize / m_coverSize;
	int minX = FMath::Clamp <int>(texel.X - texelRadius, 0, m_textureSize - 1);
	int minY = FMath::Clamp <int>(texel.Y - texelRadius, 0, m_textureSize - 1);
	int maxX = FMath::Clamp <int>(texel.X + texelRadius, 0, m_textureSize - 1);
	int maxY = FMath::Clamp <int>(texel.Y + texelRadius, 0, m_textureSize - 1);
	uint8 theVal = 0; // Update our array of fog value in memory  
	bool dirty = false;
	for (int x = minX; x < maxX; ++x)
	{
		for (int y = minY; y < maxY; ++y)
		{
			float distance = FVector2D::Distance(texel, FVector2D(x, y));
			if (distance < texelRadius)
			{
				static float smoothPct = 0.7f;
				uint8 oldVal = m_pixelArray[y * m_textureSize + x];
				float lerp = FMath::GetMappedRangeValueClamped(FVector2D(smoothPct, 1.0f), FVector2D(0, 1), distance / texelRadius);
				uint8 newVal = lerp * 255;
				newVal = FMath::Min(newVal, oldVal);
				m_pixelArray[y * m_textureSize + x] = newVal;
				dirty = dirty || oldVal != newVal;
			}
		}
	} // Propagate the values in memory's array to texture.  
	if (dirty)
		UpdateTextureRegions(m_dynamicTexture, 0, 1, &m_wholeTextureRegion, m_textureSize, 1, m_pixelArray, false);
}

void ATreeActor::UpdateTextureRegions(UTexture2D * Texture, int32 MipIndex, uint32 NumRegions, FUpdateTextureRegion2D * Regions, uint32 SrcPitch, uint32 SrcBpp, uint8 * SrcData, bool bFreeData)
{
	if (Texture->Resource)
	{
		struct FUpdateTextureRegionsData
		{
			FTexture2DResource * Texture2DResource;
			int32 MipIndex;
			uint32 NumRegions;
			FUpdateTextureRegion2D * Regions;
			uint32 SrcPitch;
			uint32 SrcBpp;
			uint8 * SrcData;
		};
		FUpdateTextureRegionsData * RegionData = new FUpdateTextureRegionsData;
		RegionData->Texture2DResource = (FTexture2DResource *)Texture->Resource;
		RegionData->MipIndex = MipIndex;
		RegionData->NumRegions = NumRegions;
		RegionData->Regions = Regions;
		RegionData->SrcPitch = SrcPitch;
		RegionData->SrcBpp = SrcBpp;
		RegionData->SrcData = SrcData;
		ENQUEUE_UNIQUE_RENDER_COMMAND_TWOPARAMETER(UpdateTextureRegionsData, FUpdateTextureRegionsData *, RegionData, RegionData, bool, bFreeData, bFreeData,
			{
				for (uint32 RegionIndex = 0; RegionIndex < RegionData->NumRegions; ++RegionIndex) {
					int32 CurrentFirstMip = RegionData->Texture2DResource->GetCurrentFirstMip();
					if (RegionData->MipIndex >= CurrentFirstMip) {
						RHIUpdateTexture2D(RegionData->Texture2DResource->GetTexture2DRHI(), RegionData->MipIndex - CurrentFirstMip, RegionData->Regions[RegionIndex], RegionData->SrcPitch, RegionData->SrcData + RegionData->Regions[RegionIndex].SrcY * RegionData->SrcPitch + RegionData->Regions[RegionIndex].SrcX * RegionData->SrcBpp);
					}
				}
		if (bFreeData)
		{
			FMemory::Free(RegionData->Regions);
			FMemory::Free(RegionData->SrcData);
		}
		delete RegionData;
			});
	}
}