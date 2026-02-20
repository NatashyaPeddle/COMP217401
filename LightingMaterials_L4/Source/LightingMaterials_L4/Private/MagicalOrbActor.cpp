// Fill out your copyright notice in the Description page of Project Settings.


#include "MagicalOrbActor.h"

// Sets default values
AMagicalOrbActor::AMagicalOrbActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMagicalOrbActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMagicalOrbActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

