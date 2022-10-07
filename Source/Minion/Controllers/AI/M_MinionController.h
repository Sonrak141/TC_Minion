// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Minion/FSM/components/M_FSMComponent.h"
#include "M_MinionController.generated.h"

/**
 * 
 */
class UM_FSMComponent;

UCLASS()
class MINION_API AM_MinionController : public AAIController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	UM_FSMComponent* FsmComponent = nullptr;

	AM_MinionController();
};


