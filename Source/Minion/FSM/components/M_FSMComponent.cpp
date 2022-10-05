// Fill out your copyright notice in the Description page of Project Settings.


#include "FSM/components/M_FSMComponent.h"

// Sets default values for this component's properties
UM_FSMComponent::UM_FSMComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UM_FSMComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UM_FSMComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

