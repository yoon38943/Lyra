#pragma once

#include "CoreMinimal.h"
#include "HCharBase.h"
#include "InputActionValue.h"
#include "../Enum/HEnum.h"
#include "../Struct/GateSetting.h"
#include "HShootingChar.generated.h"

class UInputAction;

UCLASS()
class ADVANCEDSHOOTING_API AHShootingChar : public AHCharBase
{
	GENERATED_BODY()

public:
	AHShootingChar();
	
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, Category=Input)
	UInputAction* IA_SwitchAction;
	UPROPERTY(EditAnywhere, Category=Input)
	UInputAction* IA_Aim;

protected:
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION(BlueprintCallable)
	void AimStarted();
	UFUNCTION(BlueprintCallable)
	void AimCompleted();
	UFUNCTION(BlueprintCallable)
	void SwitchAction(const FInputActionValue& Value);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Weapon)
	E_Weapon EquippedWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gate)
	E_Gate CurrentGate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gate)
	TMap<E_Gate, FGateSetting> GateSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=ABP)
	TSubclassOf<UAnimInstance> ABP_UnArmed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=ABP)
	TSubclassOf<UAnimInstance> ABP_Pistol;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=ABP)
	TSubclassOf<UAnimInstance> ABP_Rifle;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateGate(E_Gate Gate);
};