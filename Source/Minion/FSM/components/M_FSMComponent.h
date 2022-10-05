// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Minion/Minion.h"
#include "Minion/FSM/TC_BaseState.h"
#include "M_FSMComponent.generated.h"

class UTC_BaseState;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MINION_API UM_FSMComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UM_FSMComponent();
	void ChangeState(EMinionState StateId);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	TMap<EMinionState, TSoftClassPtr<UTC_BaseState>> States;
	UPROPERTY()
		UTC_BaseState* CurrentState = nullptr;
};
