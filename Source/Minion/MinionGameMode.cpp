// Copyright Epic Games, Inc. All Rights Reserved.

#include "MinionGameMode.h"
#include "MinionPlayerController.h"
#include "MinionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMinionGameMode::AMinionGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AMinionPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}