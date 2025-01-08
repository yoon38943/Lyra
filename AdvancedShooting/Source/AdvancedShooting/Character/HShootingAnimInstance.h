#pragma once

#include "CoreMinimal.h"
#include "ABPInterface.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimInstanceProxy.h"
#include "ABPInterface.h"
#include "HShootingAnimInstance.generated.h"

USTRUCT()
struct FHAnimInstanceProxy : public FAnimInstanceProxy
{
	GENERATED_BODY()

	virtual void InitializeObjects(UAnimInstance* InAnimInstance) override;
	virtual void PreUpdate(UAnimInstance* InInstance, float DeltaSeconds) override;
	virtual void Update(float DeltaSeconds) override;
	virtual void PostUpdate(UAnimInstance* InAnimInstance) const override;

public:
	UPROPERTY(Transient)
	TObjectPtr<class APawn> Owner;
	UPROPERTY(Transient)
	TObjectPtr<class UCharacterMovementComponent> MovementComponent;
	
	UPROPERTY(Transient)
	FVector ActorLocation;

	UPROPERTY(Transient)
	FVector Velocity;

	UPROPERTY(Transient)
	FVector CurrentAcceleration;
};

UCLASS()
class ADVANCEDSHOOTING_API UHShootingAnimInstance : public UAnimInstance, public IABPInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HWeapon)
	E_Weapon HEquippedWeapon;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HGate)
	E_Gate HCurrentGate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HGate)
	E_Gate HIncomingGate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HGate)
	E_Gate HLastFrameGate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HGate)
	bool HIsGateChanged;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HVelocityData)
	FVector HCharacterVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HVelocityData)
	FVector HCharacterVelocity2D;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HVelocityData)
	float HVelocityLocomotionAngle;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HAccelerationData)
	FVector HAcceleration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HAccelerationData)
	FVector HAcceleration2D;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HAccelerationData)
	bool HIsAcceleration;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HLocationData)
	FVector HWorldLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HLocationData)
	FVector HLastFrameWorldLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HLocationData)
	float HDeltaLocation;

public:
	UHShootingAnimInstance();


	UFUNCTION(BlueprintCallable)
	virtual void RecieveEquippedGun(E_Weapon Weapon) { HEquippedWeapon = Weapon; }
	UFUNCTION(BlueprintCallable)
	virtual void RecieveCurrentGate(E_Gate Gate) { HIncomingGate = Gate; }

private:
	UPROPERTY(Transient)
	FHAnimInstanceProxy HProxy;

	virtual FAnimInstanceProxy* CreateAnimInstanceProxy() override
	{
		return &HProxy;
	}
	virtual void DestroyAnimInstanceProxy(FAnimInstanceProxy* InProxy) override
	{
	}
	
public:
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	void HGetVelocity();
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	void HGetAcclerationData();
	UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
	void HGetLocationData();
};
