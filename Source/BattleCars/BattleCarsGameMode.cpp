// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "BattleCars.h"
#include "BattleCarsGameMode.h"
#include "BattleCarsPawn.h"
#include "BattleCarsHud.h"

ABattleCarsGameMode::ABattleCarsGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultPawnClass = ABattleCarsPawn::StaticClass();
	HUDClass = ABattleCarsHud::StaticClass();
}
