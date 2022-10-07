// Fill out your copyright notice in the Description page of Project Settings.


#include "M_MinionController.h"
#include "../../FSM/components/M_FSMComponent.h"

AM_MinionController::AM_MinionController() : Super()
{
	FsmComponent = CreateDefaultSubobject<UM_FSMComponent>(TEXT("FSM Component"));
	
}
