// Copyright Epic Games, Inc. All Rights Reserved.

#include "SteamTutorialGameMode.h"
#include "SteamTutorialCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASteamTutorialGameMode::ASteamTutorialGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
