// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "PTCMatchGameState.generated.h"

UENUM(BlueprintType)
enum MatchState
{
	Lobby	UMETA(DisplayName = "Lobby"),
	Match UMETA(DisplayName = "Match"),
	PostMatch UMETA(DisplayName = "PostMatch")
};

/**
 * 
 */
UCLASS()
class LANTESTTASK_API APTCMatchGameState : public AGameState
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = PTC)
	int32 GetPlayerCount() const { return PlayerCount; }

	UFUNCTION(BlueprintCallable, Category = PTC)
	void SetPlayerCount(int32 NewPlayerCount) { PlayerCount = NewPlayerCount; }

	/*
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = PTC)
	bool GetIsPostGame() const { return bIsPostGame; }

	UFUNCTION(BlueprintCallable, Category = PTC)
	void SetIsPostGame(int32 NewPostGameFlag) { bIsPostGame = NewPostGameFlag; }
	*/

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PTC)
	int32 PlayerCount;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PTC)
	//bool bIsPostGame;
};
