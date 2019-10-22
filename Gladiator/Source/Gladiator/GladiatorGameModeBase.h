// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GladiatorGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GLADIATOR_API AGladiatorGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		virtual void StartPlay() override;
};
