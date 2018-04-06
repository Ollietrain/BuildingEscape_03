// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "BuildingEscape.h"

#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Player view transform = %s") (PlayerViewTransform ToString));
	
}


// Called every frame

void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector PlayerViewLocation;
	FVector PlayerViewPointRotation;

	// Get player view point this tick
	FVector PlayerViewTransform = GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint
	(
		OUT PlayerViewLocation, 
		OUT PlayerViewPointRotation
	);

	// Log out to test
	UE_LOG(LogTemp, Warning, TEXT("Test"))

	// Ray-cast out t oreach distance

	// See what we hit
}

