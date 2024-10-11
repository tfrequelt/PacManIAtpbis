#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "APacEntity.generated.h"

UCLASS()
class PACMANIATD_API AAPacEntity : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AAPacEntity();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	// Static Mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere)
	class UBoxComponent* BoxCollision;

	// Flipbook for animations
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visual")
	class UPaperFlipbookComponent* Flipbook;

	// Movement component for pawn movement
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement")
	class UPawnMovementComponent* PawnMovement;
};
