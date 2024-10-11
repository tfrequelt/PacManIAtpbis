#pragma once

#include "CoreMinimal.h"
#include "APacEntity.h" // Inclure la classe de base
#include "APacManPlayer.generated.h"

/**
 * Classe représentant le joueur Pac-Man.
 */
UCLASS()
class PACMANIATD_API AAPacManPlayer : public AAPacEntity
{
    GENERATED_BODY()

public:
    // Constructeur par défaut
    AAPacManPlayer();

protected:
    // Appelé lorsque le jeu commence ou lorsque l'acteur est spawné
    virtual void BeginPlay() override;


    // Appelé à chaque frame
    virtual void Tick(float DeltaTime) override;

public:

    // Configuration des entrées du joueur
    virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

public:
    // Vitesse de déplacement de Pac-Man
    UPROPERTY(EditAnywhere, Category = "Movement")
    float MoveSpeed = 200.0f;

    // Direction actuelle du mouvement
    FVector CurrentDirection;

    // Score du joueur
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Score")
    int32 Score;

    // Méthodes de mouvement
    void MoveUp(float Value);
    void MoveDown(float Value);
    void MoveLeft(float Value);
    void MoveRight(float Value);
};