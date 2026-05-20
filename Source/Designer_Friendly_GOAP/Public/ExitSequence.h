// Copyright Josephine Emenya 2026. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "ExitSequence.generated.h"

/**
 * 
 */
UENUM( BlueprintType )
enum class EExitSequenceType : uint8
{
	SUCCESS,
	FAILURE,
	INTERRUPTED,
	INVALID,
	RUNNING,
	DEFAULT UMETA(Hidden)
};

