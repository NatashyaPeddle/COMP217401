// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ALightMaterialController.generated.h"

UCLASS()
class LIGHTINGMATERIALS_L4_API AALightMaterialController : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AALightMaterialController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Point Light Component
	UPROPERTY(VisibleAnywhere)
	UPointLightComponent* PointLightComponent;

	//Static Mesh Component
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

	UMaterialInstanceDynamic* MaterialInstance;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
