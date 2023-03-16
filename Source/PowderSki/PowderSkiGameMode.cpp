// Copyright Epic Games, Inc. All Rights Reserved.

#include "PowderSkiGameMode.h"
#include "PowderSkiCharacter.h"
#include "UObject/ConstructorHelpers.h"

APowderSkiGameMode::APowderSkiGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
