// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_Character_Player.h"

// Sets default values
ACPP_Character_Player::ACPP_Character_Player()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACPP_Character_Player::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_Character_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_Character_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT(""), this, &ACPP_Character_Player::MoveForward)
	PlayerInputComponent->BindAxis(TEXT(""), this, &ACPP_Character_Player::MoveRight)
}

void ACPP_Character_Player::MoveForward(float AxisX)
{

}

void ACPP_Character_Player::MoveRight(float AxisY)
{

}