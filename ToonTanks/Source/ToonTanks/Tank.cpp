// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"

ATank::ATank()
{
    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    SpringArm->SetupAttachment(RootComponent);

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ATank::BeginPlay()
{
    Super::BeginPlay();

    PlayerControllerRef = Cast<APlayerController>(GetController());
}

void ATank::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::Move);
    PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::Turn);

    PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ATank::Fire);
}

// Called every frame
void ATank::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (PlayerControllerRef)
    {
        FHitResult HitResult;
        PlayerControllerRef->GetHitResultUnderCursor(
            ECollisionChannel::ECC_Visibility,
            false,
            HitResult);

        FVector HitLocation = HitResult.ImpactPoint;

        RotateTurret(HitLocation);
    }
}

void ATank::Move(float Value)
{
    FVector DeltaLocation = FVector::ZeroVector;

    DeltaLocation.X = Value * Speed * GetWorld()->DeltaTimeSeconds;
    AddActorLocalOffset(DeltaLocation, true);
}

void ATank::Turn(float Value)
{
    FRotator DeltaRotation = FRotator::ZeroRotator;

    DeltaRotation.Yaw = Value * TurnRate * GetWorld()->DeltaTimeSeconds;
    AddActorLocalRotation(DeltaRotation, true);
}
