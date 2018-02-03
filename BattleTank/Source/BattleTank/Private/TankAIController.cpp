// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Engine/World.h"
#include "Tank.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();
}

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());

	if (ensure(PlayerTank))
	{
		//move towards player
		MoveToActor(PlayerTank, AcceptanceRadius);//TODO check radius units

		//AIM towards player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());
		
		//fire when ready
		ControlledTank->Fire(); //TODO limit fire rate

	}
}


