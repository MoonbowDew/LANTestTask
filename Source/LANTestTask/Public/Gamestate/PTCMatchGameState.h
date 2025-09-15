// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "PTCMatchGameState.generated.h"

UENUM(BlueprintType)
enum class EMatchState : uint8
{
	Lobby	UMETA(DisplayName = "Lobby"),
	Match UMETA(DisplayName = "Match"),
	PostMatch UMETA(DisplayName = "PostMatch"),
	None UMETA(DisplayName = "None") // None of the above, like Main Menu
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
	EMatchState GetMatchState() const { return MatchState; }

	UFUNCTION(BlueprintCallable, Category = PTC)
	void SetMatchState(EMatchState NewMatchState) { MatchState = NewMatchState; }*/
	

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PTC)
	int32 PlayerCount;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = PTC)
	//EMatchState MatchState = EMatchState::None;
};
