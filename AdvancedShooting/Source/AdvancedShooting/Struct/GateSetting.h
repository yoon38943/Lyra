﻿#pragma once

#include "CoreMinimal.h"
#include "GateSetting.generated.h"

USTRUCT(BlueprintType)
struct FGateSetting
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxWalkSpeed; // 최대 걷기 속도

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxAcceleration; // 최대 가속

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BrakingDecelerationWalking; // 감속 걷기 제동

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BrakingFrictionFactor; // 마찰 인수 제동

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BrakingFriction; // 마찰 제동
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseSeparateBrakingFriction; // 별도 브레이킹 마찰 사용
};