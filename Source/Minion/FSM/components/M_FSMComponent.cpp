// Fill out your copyright notice in the Description page of Project Settings.


#include "M_FSMComponent.h"

// Sets default values for this component's properties
UM_FSMComponent::UM_FSMComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UM_FSMComponent::ChangeState(EMinionState StateId)
{
	if(States.Contains(StateId))
	{
		TSoftClassPtr<UTC_BaseState> NewState = States[StateId];
		NewState.ToSoftObjectPath().TryLoad();

		UClass* BaseClass = NewState.Get();
		UTC_BaseState* NextState = Cast<UTC_BaseState>(BaseClass);

		if(CurrentState)
		{
			CurrentState->OnExitState();
		}

		if(NextState)
		{
			CurrentState = NextState;
			CurrentState ->OnEnterState();
		}
	}
}


// Called when the game starts
void UM_FSMComponent::BeginPlay()
{
	Super::BeginPlay();
	for(auto FSMStates : States)
	{
		FSMStates.Value.ToSoftObjectPath().TryLoad();
		UClass* BaseClass = FSMStates.Value.Get();
		if(UTC_BaseState* BaseState = Cast<UTC_BaseState>(BaseClass))
		{
			BaseState->InitState(Cast<AController>(GetOwner()));
		}
	}
	// ...
	
}


// Called every frame
void UM_FSMComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if(CurrentState)
	{
		CurrentState->OnUpdateState(DeltaTime);
	}
	// ...
}

