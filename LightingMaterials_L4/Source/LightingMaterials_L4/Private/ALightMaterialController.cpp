// Fill out your copyright notice in the Description page of Project Settings.


#include "ALightMaterialController.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

// Sets default values
AALightMaterialController::AALightMaterialController()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	//Static Mesh Component
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

	//Point Light Component
	PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComponent"));
	PointLightComponent->SetupAttachment(MeshComponent);
}

// Called when the game starts or when spawned
void AALightMaterialController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Begin Runs"));
	
	if (MeshComponent)
	{
		MaterialInstance = MeshComponent->CreateDynamicMaterialInstance(0);
		if (!MaterialInstance) {
			UE_LOG(LogTemp, Warning, TEXT("ERROR"));
		}
	}
}

// Called every frame*
void AALightMaterialController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!PointLightComponent || !MaterialInstance) {
		return;
	}

	float Time = GetWorld()->GetTimeSeconds();
	float Intensity = (FMath::Sin(Time * 2.0f) + 1.0f) * 3000.0f; // oscillates 0-6000
	PointLightComponent->SetIntensity(Intensity);

	FLinearColor EmissiveColor = FLinearColor::LerpUsingHSV(FLinearColor::Black,
	FLinearColor::Yellow, Intensity / 6000.0f);

	MaterialInstance->SetVectorParameterValue(TEXT("EmissiveColorParam"), EmissiveColor);

	UE_LOG(LogTemp, Warning, TEXT("Flicker: %f"), Intensity);
}

