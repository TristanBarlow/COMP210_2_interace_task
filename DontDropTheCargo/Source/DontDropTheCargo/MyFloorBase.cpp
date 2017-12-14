// Fill out your copyright notice in the Description page of Project Settings.

#include "MyFloorBase.h"


// Sets default values
AMyFloorBase::AMyFloorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyFloorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFloorBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorWorldOffset(TickOffset);
}

void AMyFloorBase::setFloorTickMovement(FVector newMovement)
{
	TickOffset = newMovement;

}


