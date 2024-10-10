// Fill out your copyright notice in the Description page of Project Settings.


#include "Eatable.h"
#include "Components/BoxComponent.h"
// Sets default values
AEatable::AEatable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComponent"));
	RootComponent = CollisionComponent;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMesh->SetupAttachment(CollisionComponent);
	CollisionComponent->SetGenerateOverlapEvents(true);
}

// Called when the game starts or when spawned
void AEatable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEatable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEatable::OnEat() {

}
void AEatable::OnOverlap() {

}
