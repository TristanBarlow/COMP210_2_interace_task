// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawnBase.generated.h"

UCLASS()
class DONTDROPTHECARGO_API AMyPawnBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPawnBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FVector pawnTickMovement = FVector(0.0,0.0,0.0);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Used to set the offset the pawn has every tick
	UFUNCTION(BlueprintCallable, Category = PawnFunctions )
		void setPawnTickMovement(FVector newMovement);
	
};
