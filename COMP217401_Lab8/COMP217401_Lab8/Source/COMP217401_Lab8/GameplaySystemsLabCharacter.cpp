// Fill out your copyright notice in the Description page of Project Settings.


#include "GameplaySystemsLabCharacter.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AGameplaySystemsLabCharacter::AGameplaySystemsLabCharacter()
{
	// Set default capsule size
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.f);
	
	// Set collision profile
	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Pawn"));
	
	// Enable overlap events
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);
	
	// Ensure proper collision behavior
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
}

