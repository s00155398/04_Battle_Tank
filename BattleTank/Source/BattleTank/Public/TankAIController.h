// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAIController.generated.h"


class UTankAimingComponent;//forward declaration

UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
	
public:
	virtual void BeginPlay() override;
	
private:
	virtual void Tick(float DeltaTime) override;

protected:
	//how close can the ai tank get
	UPROPERTY(EditAnywhere, Category = "Setup") // consider editdefaultsonly
	float AcceptanceRadius = 7000;


};
