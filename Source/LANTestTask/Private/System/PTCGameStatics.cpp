// Fill out your copyright notice in the Description page of Project Settings.


#include "System/PTCGameStatics.h"

#include "Kismet/GameplayStatics.h"

APTCCharacter* UPTCGameStatics::GetPTCCharacter(const UObject* WorldContext)
{
	return Cast<APTCCharacter>(UGameplayStatics::GetPlayerCharacter(WorldContext, 0));
}
