// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorMagicalOrbActor.h"

// Sets default values
AMyActorMagicalOrbActor::AMyActorMagicalOrbActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Root
    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = Root;

    // Mesh
    OrbMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OrbMesh"));
    OrbMesh->SetupAttachment(Root);

    // Light
    OrbLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("OrbLight"));
    OrbLight->SetupAttachment(Root);
    OrbLight->Intensity = 5000.f;
    OrbLight->bUseInverseSquaredFalloff = false; // Smooth magical glow

    // Defaults
    RotationRate = FRotator(0.f, 90.f, 0.f);
    PulseSpeed = 2.f;


}

// Called when the game starts or when spawned
void AMyActorMagicalOrbActor::BeginPlay()
{
	Super::BeginPlay();

    // Create dynamic material
    if (OrbMesh && OrbMesh->GetMaterial(0))
    {
        DynamicMaterial = OrbMesh->CreateDynamicMaterialInstance(0);
    }

    UE_LOG(LogTemp, Warning, TEXT("Magical Orb spawned at %s"), *GetActorLocation().ToString());

	
}

// Called every frame
void AMyActorMagicalOrbActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    // Rotate actor
    AddActorLocalRotation(RotationRate * DeltaTime);

    // Pulse light
    if (OrbLight)
    {
        float NewIntensity = 3000.f + 2000.f * FMath::Sin(GetWorld()->GetTimeSeconds() * PulseSpeed);
        OrbLight->SetIntensity(NewIntensity);
    }

    // Change mesh color dynamically
    if (DynamicMaterial)
    {
        float Hue = FMath::Fmod(GetWorld()->GetTimeSeconds() * 50.f, 360.f);
        FLinearColor NewColor = FLinearColor::MakeFromHSV8((uint8)Hue, 255, 255);
        DynamicMaterial->SetVectorParameterValue(TEXT("BaseColor"), NewColor);
    }



}

void AMyActorMagicalOrbActor::ToggleLight(bool bEnable)
{
    if (OrbLight)
        OrbLight->SetVisibility(bEnable);
}

void AMyActorMagicalOrbActor::SetRotationRate(FRotator NewRate)
{
    RotationRate = NewRate;
}

void AMyActorMagicalOrbActor::SetOrbColor(FLinearColor NewColor)
{
    if (DynamicMaterial)
        DynamicMaterial->SetVectorParameterValue(TEXT("BaseColor"), NewColor);
}

FVector AMyActorMagicalOrbActor::GetActorLocationCustom() const
{
    return GetActorLocation();
}

void AMyActorMagicalOrbActor::SetActorLocationCustom(FVector NewLocation)
{
    SetActorLocation(NewLocation);
}




