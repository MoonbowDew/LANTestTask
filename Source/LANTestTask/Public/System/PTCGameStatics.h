// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/PTCCharacter.h"
#include "UObject/NoExportTypes.h"
#include "PTCGameStatics.generated.h"

/**
 * 
 */
UCLASS()
class LANTESTTASK_API UPTCGameStatics : public UObject
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure, Category = HHR, meta = (WorldContext = "WorldContext", ShowWorldContextPin))
	static APTCCharacter* GetPTCCharacter(const UObject* WorldContext);
	
};
