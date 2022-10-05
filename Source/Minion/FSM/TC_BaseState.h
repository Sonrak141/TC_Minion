// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TC_BaseState.generated.h"

/**
 * 
 */
UCLASS()
class MINION_API UTC_BaseState : public UObject
{
	GENERATED_BODY()
public:
	virtual void OnEnterState(){};
	virtual void OnUpdateState(float DeltaTime){};
	virtual void OnExitState(){}

	virtual void InitState(AController* NewController);
private:
	TWeakObjectPtr<AController> CurrentController = nullptr;
protected:
	AController* GetControllerller() const;
};
