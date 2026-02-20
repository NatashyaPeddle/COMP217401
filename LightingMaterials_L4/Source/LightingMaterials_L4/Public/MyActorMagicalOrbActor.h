// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Materials/MaterialInstanceDynamic.h"

#include "MyActorMagicalOrbActor.generated.h"


UCLASS()
class LIGHTINGMATERIALS_L4_API AMyActorMagicalOrbActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActorMagicalOrbActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



    // Components
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    USceneComponent* Root;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UStaticMeshComponent* OrbMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UPointLightComponent* OrbLight;

    // Rotation speed
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Orb Properties")
    FRotator RotationRate;

    // Light pulse speed
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Orb Properties")
    float PulseSpeed;

    // Dynamic material for color changes
    UPROPERTY()
    UMaterialInstanceDynamic* DynamicMaterial;

    // Functions exposed to Blueprint
    UFUNCTION(BlueprintCallable)
    void ToggleLight(bool bEnable);

    UFUNCTION(BlueprintCallable)
    void SetRotationRate(FRotator NewRate);

    UFUNCTION(BlueprintCallable)
    void SetOrbColor(FLinearColor NewColor);

    UFUNCTION(BlueprintCallable)
    FVector GetActorLocationCustom() const;

    UFUNCTION(BlueprintCallable)
    void SetActorLocationCustom(FVector NewLocation);
};


