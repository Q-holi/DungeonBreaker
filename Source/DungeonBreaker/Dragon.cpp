// Fill out your copyright notice in the Description page of Project Settings.


#include "Dragon.h"

// Sets default values
ADragon::ADragon()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	fly = true;
	dragonState = DragonState::Fly;
	changTime = 0.0f;

}

// Called when the game starts or when spawned
void ADragon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADragon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(fly)
		dragonState = DragonState::Fly;

}

// Called to bind functionality to input
void ADragon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


DragonState ADragon::GETDragonState()
{
	return dragonState;
}

