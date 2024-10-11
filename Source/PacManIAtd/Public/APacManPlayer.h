#pragma once

#include "CoreMinimal.h"
#include "APacEntity.h"
#include "APacManPlayer.generated.h"

UCLASS()
class PACMANIATD_API AAPacManPlayer : public AAPacEntity
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAPacManPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Score property
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Gameplay")
	int32 Score;

	// Setup player input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Movement methods
	void MoveUp(float Value);
	void MoveDown(float Value);
	void MoveLeft(float Value);
	void MoveRight(float Value);
};
