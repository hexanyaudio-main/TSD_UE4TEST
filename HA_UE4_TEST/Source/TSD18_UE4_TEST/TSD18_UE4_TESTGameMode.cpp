// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "TSD18_UE4_TESTGameMode.h"
#include "TSD18_UE4_TESTHUD.h"
#include "TSD18_UE4_TESTCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATSD18_UE4_TESTGameMode::ATSD18_UE4_TESTGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATSD18_UE4_TESTHUD::StaticClass();
}
