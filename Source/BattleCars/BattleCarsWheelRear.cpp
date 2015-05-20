// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "BattleCars.h"
#include "BattleCarsWheelRear.h"

UBattleCarsWheelRear::UBattleCarsWheelRear(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	ShapeRadius = 18.0f;
	ShapeWidth = 15.0f;
	bAffectedByHandbrake = true;
	SteerAngle = 0.f;
}
