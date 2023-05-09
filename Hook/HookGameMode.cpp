// Copyright Epic Games, Inc. All Rights Reserved.

#include "HookGameMode.h"
#include "HookCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHookGameMode::AHookGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
