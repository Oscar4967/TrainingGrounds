// Copyright Oscar Pettersson (2018). All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"

UCLASS()
class TRAININGGROUNDS_API ATile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATile();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	void PlaceActors(TSubclassOf<AActor> ToSpawn, int MinSpawn, int MaxSpawn);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	bool CastSphere(FVector Location, float Radius);
};
