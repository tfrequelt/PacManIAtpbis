#include "APacManPlayer.h"
#include "Components/InputComponent.h"

// Sets default values
AAPacManPlayer::AAPacManPlayer()
{
	// Initialize Score
	Score = 0;
}

// Called when the game starts or when spawned
void AAPacManPlayer::BeginPlay()
{
	Super::BeginPlay();
}

// Setup player input
void AAPacManPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Bind the movement inputs
	PlayerInputComponent->BindAxis("MoveUp", this, &AAPacManPlayer::MoveUp);
	PlayerInputComponent->BindAxis("MoveDown", this, &AAPacManPlayer::MoveDown);
	PlayerInputComponent->BindAxis("MoveLeft", this, &AAPacManPlayer::MoveLeft);
	PlayerInputComponent->BindAxis("MoveRight", this, &AAPacManPlayer::MoveRight);
}

// Movement methods with float input
void AAPacManPlayer::MoveUp(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(FVector(0.f, 1.f, 0.f), Value);  // Move up
	}
}

void AAPacManPlayer::MoveDown(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(FVector(0.f, -1.f, 0.f), Value);  // Move down
	}
}

void AAPacManPlayer::MoveLeft(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(FVector(1.f, 0.f, 0.f), Value);  // Move left
	}
}

void AAPacManPlayer::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(FVector(-1.f, 0.f, 0.f), Value);  // Move right
	}
}
