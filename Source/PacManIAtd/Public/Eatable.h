// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "APacManPlayer.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Eatable.generated.h"

UCLASS()
class PACMANIATD_API AEatable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEatable();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(VisibleAnywhere, Category = "Collision")
	class UBoxComponent* CollisionComponent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnEat();
	virtual void OnOverlap(AActor* MyActor, AActor* OtherActor);

};
