// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Peck_GAM_415GameMode.h"
#include "Peck_GAM_415HUD.h"
#include "Peck_GAM_415Character.h"
#include "UObject/ConstructorHelpers.h"

APeck_GAM_415GameMode::APeck_GAM_415GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APeck_GAM_415HUD::StaticClass();
}
