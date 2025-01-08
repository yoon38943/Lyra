#include "HShootingAnimInstance.h"

#include <ntsecapi.h>

#include "GameFramework/CharacterMovementComponent.h"

void FHAnimInstanceProxy::InitializeObjects(UAnimInstance* InAnimInstance)
{
	FAnimInstanceProxy::InitializeObjects(InAnimInstance);

	Owner = InAnimInstance->TryGetPawnOwner();
	if (Owner == nullptr)
	{
		return;
	}

	MovementComponent = Cast<UCharacterMovementComponent>(Owner->GetMovementComponent());
}

void FHAnimInstanceProxy::PreUpdate(UAnimInstance* InInstance, float DeltaSeconds)
{
	FAnimInstanceProxy::PreUpdate(InInstance, DeltaSeconds);

	if (::IsValid(Owner))
	{
		ActorLocation = Owner->GetActorLocation();
	}
	if (::IsValid(MovementComponent))
	{
		Velocity = MovementComponent->Velocity;
		CurrentAcceleration = MovementComponent->GetCurrentAcceleration();
	}
}

void FHAnimInstanceProxy::Update(float DeltaSeconds)
{
	FAnimInstanceProxy::Update(DeltaSeconds);
}

void FHAnimInstanceProxy::PostUpdate(UAnimInstance* InAnimInstance) const
{
	FAnimInstanceProxy::PostUpdate(InAnimInstance);
}

//////////////////////////////////////////////////////////////////////////////////////

UHShootingAnimInstance::UHShootingAnimInstance()
{
}

void UHShootingAnimInstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeThreadSafeUpdateAnimation(DeltaSeconds);

	HGetVelocity();
	HGetAcclerationData();
	HGetLocationData();
}

void UHShootingAnimInstance::HGetVelocity()
{
	HCharacterVelocity = HProxy.Velocity;
	HCharacterVelocity2D = FVector(HCharacterVelocity.X, HCharacterVelocity.Y, 0);
}

void UHShootingAnimInstance::HGetAcclerationData()
{
	HAcceleration = HProxy.CurrentAcceleration;
	HAcceleration2D = FVector(HAcceleration.X, HAcceleration.Y, 0);
	float Length = HAcceleration2D.Size();
	bool IsNearly = FMath::IsNearlyEqual(Length, 0.0f, 0.000001f);
	HIsAcceleration = !IsNearly;
}

void UHShootingAnimInstance::HGetLocationData()
{
	HLastFrameWorldLocation = HWorldLocation;
	HWorldLocation = HProxy.ActorLocation;
	FVector Delta = HWorldLocation - HLastFrameWorldLocation;
	HDeltaLocation = Delta.Length();
}
