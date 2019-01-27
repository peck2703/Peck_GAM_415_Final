// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Peck_GAM_415HUD.generated.h"

UCLASS()
class APeck_GAM_415HUD : public AHUD
{
	GENERATED_BODY()

public:
	APeck_GAM_415HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

