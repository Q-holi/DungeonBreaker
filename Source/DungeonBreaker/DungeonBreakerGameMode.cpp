// Copyright Epic Games, Inc. All Rights Reserved.

#include "DungeonBreakerGameMode.h"
#include "DungeonBreakerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADungeonBreakerGameMode::ADungeonBreakerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
