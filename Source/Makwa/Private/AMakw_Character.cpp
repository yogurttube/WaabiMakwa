// Fill out your copyright notice in the Description page of Project Settings.


#include "AMakw_Character.h"

#include "Components/InputComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

// Sets default values
AAMakw_Character::AAMakw_Character()
{
	// Keep Tick OFF (performance + bug surface area)
		PrimaryActorTick.bCanEverTick = false;

	// --- Third-person rotation defaults (safe baseline) ---
	// Character rotates to movement direction, camera rotates independently via controller.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

		if (UCharacterMovementComponent* MoveComp = GetCharacterMovement())
	{
			MoveComp->bOrientRotationToMovement = true;
			MoveComp->RotationRate = FRotator(0.f, 540.f, 0.f);

			// Baseline feel (tune later via DataAsset like your outline suggests)
			MoveComp->MaxWalkSpeed = 500.f;
			MoveComp->BrakingDecelerationWalking = 2048.f;
	
			// Jump baseline (optional)
			MoveComp->JumpZVelocity = 700.f;
			MoveComp->AirControl = 0.35f;

	}
//:contentReference[oaicite:2]{index=2}
}

// Called when the game starts or when spawned
void AAMakw_Character::BeginPlay()
{
	Super::BeginPlay();

	// Enhanced Input: appl:contentReference[oaicite:3]{index=3}runtime for the owning local player
	// (recommended approach in Epic docs/tutorials). :contentReference[oaicite:4]{index=4}
	if (!DefaultMappingContext)
	{
		UE_LOG(LogTemp, Warning, TEXT("MakwCharacter: DefaultMappingContext is null (no input mapping will be applied)."));
		return;
	}

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC)
	{
		// If this is an AI pawn or not possessed yet, this is normal.
		return;
	}

	ULocalPlayer* LP = PC->GetLocalPlayer();
	if (!LP) return;

	UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	if (!Subsystem) return;

	Subsystem->AddMappingContext(DefaultMappingContext, /*Priority*/ 0);
	
}

// Called to bind functionality to input
void AAMakw_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (!EIC)
	{
		UE_LOG(LogTemp, Error, TEXT("MakwCharacter: EnhancedInputComponent missing. Ensure Enhanced Input plugin is enabled and project uses Enhanced Input."));
		return;
	}

	// Bind move/look continuous actions
	if (MoveAction)
	{
		EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AAMakw_Character::Move);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MakwCharacter: MoveAction is null."));
	}

	if (LookAction)
	{
		EIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &AAMakw_Character::Look);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MakwCharacter: LookAction is null."));
	}

	// Bind one-shot actions (dash/dodge)
	if (DashAction)
	{
		EIC->BindAction(DashAction, ETriggerEvent::Started, this, &AAMakw_Character::OnDashPressed);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MakwCharacter: DashAction is null."));
	}

	if (DodgeAction)
	{
		EIC->BindAction(DodgeAction, ETriggerEvent::Started, this, &AAMakw_Character::OnDodgePressed);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MakwCharacter: DodgeAction is null."));
	}
}

void AAMakw_Character::Move(const FInputActionValue& Value)
{
	const FVector2D MoveValue = Value.Get<FVector2D>();
	if (!Controller) return;

	// Use controller yaw for movement directions (standard third-person)
	const FRotator YawRot(0.f, Controller->GetControlRotation().Yaw, 0.f);
	const FVector ForwardDir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
	const FVector RightDir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);

	AddMovementInput(ForwardDir, MoveValue.Y);
	AddMovementInput(RightDir, MoveValue.X);
}

void AAMakw_Character::Look(const FInputActionValue& Value)
{
	const FVector2D LookValue = Value.Get<FVector2D>();

	// Do NOT clamp here; let your camera settings handle it unless you have a design reason.
	AddControllerYawInput(LookValue.X);
	AddControllerPitchInput(LookValue.Y);
}

void AAMakw_Character::OnDashPressed()
{
	// Per your architecture: Character triggers abilities; ability system owns the logic. :contentReference[oaicite:5]{index=5}
	// TODO: When UMakw_AbilityComponent exists:
	// if (AbilityComponent) AbilityComponent->TryActivateDash();
	UE_LOG(LogTemp, Verbose, TEXT("MakwCharacter: Dash pressed (stub)."));
}

void AAMak : contentReference[oaicite:6]{ index = 6 }ressed()
{
	// TODO: When UMakw_AbilityComponent exists:
	// if (AbilityComponent) AbilityComponent->TryActivateDodge();
	UE_LOG(LogTemp, Verbose, TEXT("MakwCharacter: Dodge pressed (stub)."));
}