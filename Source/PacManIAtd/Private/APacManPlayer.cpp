#include "APacManPlayer.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AAPacManPlayer::AAPacManPlayer()
{
    // Initialize Score
    Score = 0;

    // Initialize movement speed
    MoveSpeed = 400.0f; // Vitesse de déplacement

    // Set this pawn to call Tick() every frame
    PrimaryActorTick.bCanEverTick = true;

    // Initialiser la direction actuelle
    CurrentDirection = FVector::ZeroVector;

    // Activer le mouvement en utilisant un mouvement basé sur les collisions
    AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AAPacManPlayer::BeginPlay()
{
    Super::BeginPlay();
}

// Called every frame
void AAPacManPlayer::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Appliquer le mouvement de manière constante dans la direction actuelle
    if (!CurrentDirection.IsZero())
    {
        AddMovementInput(CurrentDirection, MoveSpeed * DeltaTime);
    }
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

