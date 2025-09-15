// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/PTCCharacter.h"

#include "Rendering/RenderCommandPipes.h"

// Sets default values
APTCCharacter::APTCCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void APTCCharacter::ToggleWeaponVisibility_Implementation(bool NewValue)
{
	SetHasWeapon(NewValue);
}

// Called when the game starts or when spawned
void APTCCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APTCCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APTCCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

