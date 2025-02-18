// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SuperSideScroller_Brick.generated.h"

UCLASS()
class SUPERSIDESCROLLER_API ASuperSideScroller_Brick : public AActor
{
	GENERATED_BODY()

	
public:	
	// Sets default values for this actor's properties
	ASuperSideScroller_Brick();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Brick)
	class USoundBase* HitSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Brick)
	class UParticleSystem* Explosion;

	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UPROPERTY(VisibleDefaultsOnly, Category = Brick)
	class UStaticMeshComponent* BrickMesh;

	UPROPERTY(VisibleDefaultsOnly, Category = Brick)
	class UBoxComponent* BrickCollision;


	UPROPERTY(EditAnywhere)
	bool bHasCollectable;

	UPROPERTY(EditAnywhere)
	int32 CollectableValue = 1;

	void AddCollectable(class ASuperSideScroller_Player* Player);

	void PlayHitSound();

	void PlayHitExplosion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;



};
