// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon/PTCRifle.h"
#include "System/PTCGameStatics.h"

APTCRifle::APTCRifle()
{
	
	CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollision"));
	CapsuleCollision->SetWorldRotation(FRotator(0.0f, 90.0f, 0.0f));
	CapsuleCollision->SetupAttachment(GetRootComponent());

	//SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	//SkeletalMesh->SetupAttachment(GetRootComponent());

	CapsuleCollision->OnComponentBeginOverlap.AddDynamic(this, &APTCRifle::OnBeginOverlap);
}

void APTCRifle::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	APTCCharacter* Char = UPTCGameStatics::GetPTCCharacter(this);
	SetActorHiddenInGame(true);
	Char->ToggleWeaponVisibility(true);
}