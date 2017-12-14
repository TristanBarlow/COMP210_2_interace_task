// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyFloorBase.generated.h"

UCLASS()
class DONTDROPTHECARGO_API AMyFloorBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyFloorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Used to offset the actor every tick
	FVector TickOffset = FVector(0.0, -5.0, 0.0);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Used to set the offset the floor experiences every tick.
	UFUNCTION(BlueprintCallable, Category = "FLOOR")
		void setFloorTickMovement(FVector newMovement);
	// The pos the next tile will be spawning from
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = MapGeneration)
		FTransform nextTileSpawn;
};
