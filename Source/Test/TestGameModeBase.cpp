// Fill out your copyright notice in the Description page of Project Settings.


#include "TestGameModeBase.h"

#include "Components/BoxComponent.h"

void ATestGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	UBoxComponent* BoxComponent = NewObject<UBoxComponent>(this);
	BoxComponent->OnComponentBeginOverlap.AddUniqueDynamic(this, &ThisClass::OnBoxOverlap);
	
}

void ATestGameModeBase::OnBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
}
