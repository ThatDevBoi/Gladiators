// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MutantSpawner.generated.h"

UCLASS()
class GLADIATOR_API AMutantSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMutantSpawner();
	UPROPERTY(EditDefualtsOnly, Category = "Spawning")
		TSubclassOf<AActor> ActorToSpawn;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UFUNCTION()
	void SpawnObject(FVector loc, FRotator Rot);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
