// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "HookGameMode.generated.h"

UCLASS(minimalapi)
class AHookGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AHookGameMode();

	int a =0;
};



