// Fill out your copyright notice in the Description page of Project Settings.


#include "APacEntity.h"

// Sets default values
AAPacEntity::AAPacEntity()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAPacEntity::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAPacEntity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAPacEntity::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

