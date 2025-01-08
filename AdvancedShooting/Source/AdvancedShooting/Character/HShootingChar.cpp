#include "HShootingChar.h"
#include "EncryptionComponent.h"
#include "EnhancedInputComponent.h"
#include "HShootingAnimInstance.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Math/UnrealMathUtility.h"

AHShootingChar::AHShootingChar()
{
}

void AHShootingChar::BeginPlay()
{
	Super::BeginPlay();

	if (ABP_UnArmed != nullptr)
	{
		GetMesh()->LinkAnimClassLayers(ABP_UnArmed);
	}

	UpdateGate(E_Gate::Jogging);
}

void AHShootingChar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(IA_Aim, ETriggerEvent::Started, this, &AHShootingChar::AimStarted);
		EnhancedInputComponent->BindAction(IA_Aim, ETriggerEvent::Completed, this, &AHShootingChar::AimCompleted);

		EnhancedInputComponent->BindAction(IA_SwitchAction, ETriggerEvent::Triggered, this, &AHShootingChar::SwitchAction);
	}
}

void AHShootingChar::AimStarted()
{
	UpdateGate(E_Gate::Walking);
}

void AHShootingChar::AimCompleted()
{
	UpdateGate(E_Gate::Jogging);
}

void AHShootingChar::SwitchAction(const FInputActionValue& Value)
{
	float ActionValue = Value.Get<float>();
	int32 CastValue = FMath::TruncToInt32(ActionValue);
	switch (CastValue)
	{
	case 1:
		{
			EquippedWeapon = E_Weapon::UnArmed;
			if (ABP_UnArmed != nullptr)
			{
				GetMesh()->LinkAnimClassLayers(ABP_UnArmed);
			}
		} break;
		
	case 2:
		{
			EquippedWeapon = E_Weapon::Pistol;
			if (ABP_Pistol != nullptr)
			{
				GetMesh()->LinkAnimClassLayers(ABP_Pistol);
			}
		} break;

	case 3:
		{
			EquippedWeapon = E_Weapon::Rifle;
			if (ABP_Rifle != nullptr)
			{
				GetMesh()->LinkAnimClassLayers(ABP_Rifle);
			}
		} break;

	default:
		break;
	}
	
}

void AHShootingChar::UpdateGate(E_Gate Gate)
{
	CurrentGate = Gate;

	UHShootingAnimInstance* HShootingAnimInstance = Cast<UHShootingAnimInstance>(GetMesh()->GetAnimInstance());
	if (HShootingAnimInstance == nullptr)
	{
		return;
	}

	HShootingAnimInstance->RecieveCurrentGate(CurrentGate);
	FGateSetting* GateSettingInfo = GateSetting.Find(CurrentGate);
	if (GateSettingInfo == nullptr)
	{
		return;
	}

	GetCharacterMovement()->MaxWalkSpeed = GateSettingInfo->MaxWalkSpeed;
	GetCharacterMovement()->MaxAcceleration = GateSettingInfo->MaxAcceleration;
	GetCharacterMovement()->BrakingDecelerationWalking = GateSettingInfo->BrakingDecelerationWalking;
	GetCharacterMovement()->BrakingFrictionFactor = GateSettingInfo->BrakingFrictionFactor;
	GetCharacterMovement()->BrakingFriction = GateSettingInfo->BrakingFriction;
	GetCharacterMovement()->bUseSeparateBrakingFriction = GateSettingInfo->bUseSeparateBrakingFriction;
}