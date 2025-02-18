// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SuperSideScrollerCharacter.h"
#include "SuperSideScroller_Player.generated.h"

/**
 * 
 */
UCLASS()
class SUPERSIDESCROLLER_API ASuperSideScroller_Player : public ASuperSideScrollerCharacter
{
	GENERATED_BODY()
public:
	//Constructor
	ASuperSideScroller_Player();

	void ThrowProjectile();

	void SpawnProjectile();

	UFUNCTION(BlueprintPure)
	int32 GetCurrentNumberofCollectables() { return NumberofCollectables; };

	void IncrementNumberofCollectables(int32 Value);

	void IncreaseMovementPowerup();
protected:
	//Override base character class function to setup our player input component
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputMappingContext* IC_Character;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* IA_Sprint;

	UPROPERTY(EditAnywhere, Category = "Input")
	class UInputAction* IA_Throw;
	//Sprinting
	void Sprint();
	//StopSprinting
	void StopSprinting();

	void EndPowerup();

private:
	//Bool to control if we are sprinting. Failsafe.
	bool bIsSprinting;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* ThrowMontage;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class APlayerProjectile> PlayerProjectile;

	int32 NumberofCollectables;

	bool bHasPowerupActive;

	FTimerHandle PowerupHandle;
};
