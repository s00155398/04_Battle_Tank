// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BattleTank/Public/Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"//must be last

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:	
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	
	

private:
	//move tank barrel towards crosshair
	void AimTowardsCrossHair();
	//return out parameter , true if hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

	ATank* GetControlledTank() const;

	UPROPERTY(EditAnywhere)
		float CrossHairXLocation = 0.5;

	UPROPERTY(EditAnywhere)
		float CrossHairYLocation = 0.33333;
};
