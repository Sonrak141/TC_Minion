// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(LogMinion, Log, All);

UENUM(BlueprintType)
enum class EMinionState : uint8
{
	State_GoToTarget,
	State_Attack
};