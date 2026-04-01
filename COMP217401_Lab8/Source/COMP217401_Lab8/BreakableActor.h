// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BreakableActor.generated.h"

UCLASS()
class COMP217401_LAB8_API ABreakableActor : public AActor
{
	GENERATED_BODY()

public:
	ABreakableActor();

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;


	virtual float TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
};
