// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakableActor.h"
#include "Components/StaticMeshCOmponent.h"
#include "Enemy.h"

// Sets default values
ABreakableActor::ABreakableActor()
{
 	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	Mesh->SetSimulatePhysics(true);
	Mesh->SetNotifyRigidBodyCollision(true);
	
	Mesh->OnComponentHit.AddDynamic(this, &ABreakableActor::OnHit);
}

// Called when the game starts or when spawned
void ABreakableActor::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABreakableActor::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor && OtherActor != this)
	{
		AEnemy* Enemy = Cast<AEnemy>(OtherActor);
		
		if (Enemy)
		{
			Enemy->TakeDamage(50.f);
			Destroy();
		}
	}
}
