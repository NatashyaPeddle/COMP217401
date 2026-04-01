// Fill out your copyright notice in the Description page of Project Settings.


#include "Collectible.h"
#include "Components/SphereComponent.h"
#include "COMP217401_Lab8Character.h"
#include "Engine/Engine.h"

// Sets default values
ACollectible::ACollectible()
{
	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = Sphere;
	
	Sphere->SetCollisionProfileName(TEXT("Trigger"));
	Sphere->SetGenerateOverlapEvents(true);
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
	
	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ACollectible::OnOverlap);
}

// Called when the game starts or when spawned
void ACollectible::BeginPlay()
{
	Super::BeginPlay();
}

void ACollectible::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor != this)
	{
		ACOMP217401_Lab8Character* Player = Cast<ACOMP217401_Lab8Character>(OtherActor);

		if (Player)
		{
			Player->AddHealth(20.f);

			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Yellow, TEXT("Collected Item! +20 Health"));
			}

			Destroy();
		}
	}
}
