// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/ConstructorHelpers.h"
#include "AI_Patrol_Controller.generated.h"

/**
 * 
 */
UCLASS()
class PECK_GAM_415_API AAI_Patrol_Controller : public AAIController
{
	GENERATED_BODY()
	
public:

	void OnPossess(APawn* PossessedPawn);

	UPROPERTY(EditAnywhere)
		UBlackboardComponent* myBBComp;
	UPROPERTY(EditAnywhere)
		UBlackboardData* myBBData;
	UPROPERTY(EditAnywhere)
		UBehaviorTree* myBHTree;



protected:
	
	virtual void ActorsPerceptionUpdated(const TArray<AActor*>& UpdatedActors);
	
};
