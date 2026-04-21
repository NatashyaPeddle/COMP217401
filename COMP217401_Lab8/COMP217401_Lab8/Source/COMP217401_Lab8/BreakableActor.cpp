// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakableActor.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"

ABreakableActor::ABreakableActor()
{
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	Mesh->SetSimulatePhysics(true);
	Mesh->SetCollisionProfileName(TEXT("PhysicsActor"));
}

void ABreakableActor::BeginPlay()
{
	Super::BeginPlay();
}

float ABreakableActor::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,
	AController* EventInstigator, AActor* DamageCauser)
{
	if (!DamageCauser)
	{
		UE_LOG(LogTemp, Warning, TEXT("Null DamageCauser"));
		return 0.f;
	}

	if (Mesh && Mesh->IsSimulatingPhysics())
	{
		FVector ImpulseDir = (GetActorLocation() - DamageCauser->GetActorLocation()).GetSafeNormal();
		Mesh->AddImpulse(ImpulseDir * 1000.f, NAME_None, true);
	}

	Destroy();

	return DamageAmount;
}