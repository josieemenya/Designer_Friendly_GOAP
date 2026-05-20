// Copyright Josephine Emenya 2026. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SmartObject.h"
#include "SmartObjectsManager.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNER_FRIENDLY_GOAP_API USmartObjectsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
	public:
	//UPROPERTY(EditAnywhere)
	TMap<int32, ASmartObject*> SmartObjects;
};
