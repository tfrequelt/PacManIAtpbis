#include "APacEntity.h"
#include "Components/BoxComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "PaperFlipbookComponent.h"
AAPacEntity::AAPacEntity()
{

	// Create StaticMeshComponent and Attach to BoxComponent
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = StaticMesh;

	// Create the Static Mesh
	BoxCollision = CreateDefaultSubobject<UBoxComponent>("BoxCollision");
	BoxCollision->SetupAttachment(StaticMesh);

	// Create the Flipbook for animation
	Flipbook = CreateDefaultSubobject<UPaperFlipbookComponent>(TEXT("Flipbook"));
	Flipbook->SetupAttachment(RootComponent);

	// Create the movement component
	PawnMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("PawnMovement"));
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
