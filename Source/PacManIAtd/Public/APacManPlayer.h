#pragma once

#include "CoreMinimal.h"
#include "APacEntity.h" // Inclure la classe de base
#include "APacManPlayer.generated.h"

/**
 * Classe repr�sentant le joueur Pac-Man.
 */
UCLASS()
class PACMANIATD_API AAPacManPlayer : public AAPacEntity
{
    GENERATED_BODY()

public:
    // Constructeur par d�faut
    AAPacManPlayer();

protected:
    // Appel� lorsque le jeu commence ou lorsque l'acteur est spawn�
    virtual void BeginPlay() override;


    // Appel� � chaque frame
    virtual void Tick(float DeltaTime) override;

public:

    // Configuration des entr�es du joueur
    virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

public:
    // Vitesse de d�placement de Pac-Man
    UPROPERTY(EditAnywhere, Category = "Movement")
    float MoveSpeed = 200.0f;

    // Direction actuelle du mouvement
    FVector CurrentDirection;

    // Score du joueur
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Score")
    int32 Score;

    // M�thodes de mouvement
    void MoveUp(float Value);
    void MoveDown(float Value);
    void MoveLeft(float Value);
    void MoveRight(float Value);
};