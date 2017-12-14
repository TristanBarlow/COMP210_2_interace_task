// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "MyFloorBase.h"
#include "EngineMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DONTDROPTHECARGO_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	//Used to spawn in the next floor piece of the map
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = MapGeneration)
		FTransform NextSpawnLocation;

	// Max number of tiles to be one the map at one time
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = MapGeneration)
		int32 maxTileNum = 10;

	//number to be itterated in the BPS
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = MapGeneration)
		int32 currentTileNum = 0;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = MapGeneration)
		TArray<AMyFloorBase*> myFloorArray;


};
