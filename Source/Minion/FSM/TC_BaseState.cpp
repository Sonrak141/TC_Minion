// Fill out your copyright notice in the Description page of Project Settings.


#include "TC_BaseState.h"

void UTC_BaseState::InitState(AController* NewController)
{
	CurrentController = NewController;
}

AController* UTC_BaseState::GetControllerller() const
{
	return CurrentController.IsValid()?CurrentController.Get():nullptr;
}
