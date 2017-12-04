// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = MapGeneration)
		int32 maxTileNum = 20;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = MapGeneration)
		int32 currentTileNum = 0;

};
