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

	//Point Light Component
	PointLightComponent = CreateDefaultSubobject<UPointLightComponent>(TEXT("PointLightComponent"));

	//Static Mesh Component
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	RootComponent = MeshComponent;

	PointLightComponent->SetupAttatchment(MeshComponent);
}

// Called when the game starts or when spawned
void AALightMaterialController::BeginPlay()
{
	Super::BeginPlay();
	
	if (MeshComponent)
	{
		MaterialInstance = MeshComponent->CreateDynamicMaterialInstance(0);
	}
}

// Called every frame*
void AALightMaterialController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

