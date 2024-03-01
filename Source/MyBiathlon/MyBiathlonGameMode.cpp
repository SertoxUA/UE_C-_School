// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyBiathlonGameMode.h"
#include "MyBiathlonCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyBiathlonGameMode::AMyBiathlonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
