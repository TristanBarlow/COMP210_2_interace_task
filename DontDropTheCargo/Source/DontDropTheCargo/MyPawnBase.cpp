// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPawnBase.h"


// Sets default values
AMyPawnBase::AMyPawnBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPawnBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawnBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalOffset(pawnTickMovement);
}

// Called to bind functionality to input
void AMyPawnBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyPawnBase::setPawnTickMovement(FVector newMovement)
{
	pawnTickMovement = newMovement;
}

