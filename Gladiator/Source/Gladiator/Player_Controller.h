// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_Controller.generated.h"

UCLASS()
class GLADIATOR_API APlayer_Controller : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer_Controller();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
		void WalkForward(float speed);


	UFUNCTION()
		void MoveRight(float speed);

	UFUNCTION()
		// Start the jump
		void StartJump();

	UFUNCTION()
		// Allows the jump to stop
		void StopJump();

	// Camera Variable to add to player capsule
	UPROPERTY(VisibleAnywhere)
		UCameraComponent* PlayerCameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Custom)
		float defaultSpeed = 0;

	// Value used to run
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Custom)
		float accelerationSpeed = 0;
};
