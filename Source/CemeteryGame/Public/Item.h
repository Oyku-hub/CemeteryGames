// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class CEMETERYGAME_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	template<typename T>
	T Avg(T First, T Second);



private:

	UPROPERTY(VisibleAnywhere,BlueprintReadOnly,meta= (AllowPrivateAccess="true"))
	float RunningTime;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ItemMesh;



public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};


template<typename T>
inline T AItem::Avg(T First, T Second)
{
	return T(First+Second)/2;
}
