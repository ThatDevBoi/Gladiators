// Fill out your copyright notice in the Description page of Project Settings.

#include "Gladiator.h"
#include "Engine.h"
#include "Player_Controller.h"
//#include "Camera/CameraComponent.h"

// Sets default values
APlayer_Controller::APlayer_Controller()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//// Create First Person Cam 
	PlayerCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Players Camera"));
	//// Attach the camera to the player
	PlayerCameraComponent->SetupAttachment(GetCapsuleComponent());
	//// Position the camera above the eyes
	PlayerCameraComponent->SetRelativeLocation(FVector(10.0f, 0.0f, 84.0f + BaseEyeHeight));
	//// Allow The Pawn To Control Camera Rot
	PlayerCameraComponent->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void APlayer_Controller::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		// Puts a Debug Message on screen in red 
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We Are Using A Gladiator"));
	}
	
}

// Called every frame
void APlayer_Controller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayer_Controller::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Setting up input binds for w,a,s,d movement
	// Move forward and backwards input	
	//(Inputs are found in project settings and inputs)
	PlayerInputComponent->BindAxis("MoveForward", this, & APlayer_Controller::MoveForward);
	// Move Left and right input
	PlayerInputComponent->BindAxis("MoveRight", this, & APlayer_Controller::MoveRight);

	// Setting up input binds for mouse camera rotation
	// X Rotation
	PlayerInputComponent->BindAxis("Turn", this, & APlayer_Controller::AddControllerYawInput);
	// Y Axis Rotation
	PlayerInputComponent->BindAxis("LookUp", this, & APlayer_Controller::AddControllerPitchInput);

	// Jumping Action Binds
	// Condition to jump
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, & APlayer_Controller::StartJump);
	// Condition to stop jumping
	PlayerInputComponent->BindAction("Jump", IE_Released, this, & APlayer_Controller::StopJump);
}

void APlayer_Controller::MoveForward(float speedValue)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	AddMovementInput(Direction, speedValue);
}

void APlayer_Controller::MoveRight(float speedValue)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	AddMovementInput(Direction, speedValue);
}

// Condition that we are jumping
void APlayer_Controller::StartJump()
{
	bPressedJump = true;
}
// Condition to not longer jump
void APlayer_Controller::StopJump()
{
	bPressedJump = false;
}

