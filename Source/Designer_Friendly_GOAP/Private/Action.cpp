// Copyright Josephine Emenya 2026. All Rights Reserved.

#include "Action.h"
#include "SmartObjectsManager.h"

EExitSequenceType UAction::Execute_Implementation(AActor* Owner)
{
	return EExitSequenceType::RUNNING; 
}
