// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CPP_Character_Player.generated.h"


class UInputMappingContext;

UCLASS()
class CPP_RUI_API ACPP_Character_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_Character_Player();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveForward(float AxisX);
	void MoveRight(float AxisY);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InputMapping")
	UInputMappingContext* Liste_Input_Action;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enhanced Input")
	UInputAction* IA_Move_Player;

public:
	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere)
	UMeshComponent* MeshComponent;

	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;




};
