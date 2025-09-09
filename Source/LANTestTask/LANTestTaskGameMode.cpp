// Copyright Epic Games, Inc. All Rights Reserved.

#include "LANTestTaskGameMode.h"
#include "LANTestTaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALANTestTaskGameMode::ALANTestTaskGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
