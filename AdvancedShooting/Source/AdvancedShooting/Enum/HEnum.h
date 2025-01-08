#pragma once

#include "CoreMinimal.h"

// 캐릭터의 무기 상태
UENUM(BlueprintType)
enum class E_Weapon : uint8
{
	UnArmed		UMETA(DisplayName = "UnArmed"),		// 비무장
	Pistol		UMETA(DisplayName = "Pistol"),		// 권총 장착
	Rifle		UMETA(DisplayName = "Rifle"),		// 소총 장착
};

// 캐릭터의 걸음걸이
UENUM(BlueprintType)
enum class E_Gate : uint8
{
	Walking		UMETA(DisplayName = "Walking"),		// 걷기
	Jogging		UMETA(DisplayName = "Jogging"),		// 뛰기
	Crouch		UMETA(DisplayName = "Crouch"),		// 무릎 앉아
};

// 캐릭터의 이동방향
UENUM(BlueprintType)
enum class E_LocomotionDirection : uint8
{
	Forward		UMETA(DisplayName = "Forward"),		// 앞
	Backward	UMETA(DisplayName = "Backward"),	// 뒤
	Right		UMETA(DisplayName = "Right"),		// 오른쪽
	Left		UMETA(DisplayName = "Left"),		// 왼쪽
};