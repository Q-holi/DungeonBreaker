// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Dragon.generated.h"

UENUM(BlueprintType)
enum class DragonState : uint8 {
	Idle       UMETA(DisplayName = "IDLE"),
	AroundIdle        UMETA(DisplayName = "AROUNDIDLE"),
	Attack        UMETA(DisplayName = "ATTACK"),
	Fly        UMETA(DisplayName = "FLY"),
};


UCLASS()
class DUNGEONBREAKER_API ADragon : public ACharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Custom INFO")
		DragonState dragonState;

	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Custom INFO")
		bool fly;

	float changTime;

public:
	// Sets default values for this character's properties
	ADragon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "AnimNumber")
		DragonState GETDragonState();

};
