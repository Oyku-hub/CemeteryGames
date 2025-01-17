// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Birds.generated.h"

UCLASS()
class CEMETERYGAME_API ABirds : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABirds();
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:
	  UPROPERTY(VisibleAnywhere)
      class UCapsuleComponent* Capsule;
	  UPROPERTY(VisibleAnywhere)
	  class USkeletalMeshComponent* BirdMesh;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveForward(float Value);


};
