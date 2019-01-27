// Fill out your copyright notice in the Description page of Project Settings.

#include "Module_One_Actor.h"


// Sets default values
AModule_One_Actor::AModule_One_Actor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AModule_One_Actor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AModule_One_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

