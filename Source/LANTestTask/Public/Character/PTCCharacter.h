// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "LANTestTask/LANTestTaskCharacter.h"
#include "PTCCharacter.generated.h"

UCLASS()
class LANTESTTASK_API APTCCharacter : public ALANTestTaskCharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APTCCharacter();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = PTC)
	void ToggleWeaponVisibility(bool NewValue);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = PTC)
	bool GetHasWeapon() const { return bHasWeapon; }

	UFUNCTION(BlueprintCallable, Category = PTC)
	void SetHasWeapon(bool NewHasWeapon) { bHasWeapon = NewHasWeapon; }


protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PTC)
	bool bHasWeapon = false;
};
