//Copyright 2020, Cody Dawe, All rights reserved
#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "NaziZombiePlayerSpawnPoint.generated.h"

/**
 * 
 */
UCLASS()
class WORLDATWAR_API ANaziZombiePlayerSpawnPoint : public ATargetPoint
{
	GENERATED_BODY()
public:
	ANaziZombiePlayerSpawnPoint();

protected:
	bool bIsUsed;

public:
	bool IsUsed();
	void SetUsed(bool Used);
};
