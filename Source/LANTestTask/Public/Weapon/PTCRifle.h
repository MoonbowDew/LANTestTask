// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Weapon/PTCWeapon.h"
#include "PTCRifle.generated.h"

/**
 * 
 */
UCLASS()
class LANTESTTASK_API APTCRifle : public APTCWeapon
{
	GENERATED_BODY()

public:
	APTCRifle();


	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = PTC)
	TObjectPtr<UCapsuleComponent> CapsuleCollision;

	/*UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = PTC)
	TObjectPtr<USkeletalMeshComponent> SkeletalMesh;*/

protected:

	UFUNCTION()
	void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
