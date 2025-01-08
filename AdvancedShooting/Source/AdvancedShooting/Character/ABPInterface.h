#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "../Enum/HEnum.h"
#include "ABPInterface.generated.h"


UINTERFACE(MinimalAPI)
class UABPInterface : public UInterface
{
	GENERATED_BODY()
};

class ADVANCEDSHOOTING_API IABPInterface
{
	GENERATED_BODY()

public:
	virtual void RecieveEquippedGun(E_Weapon Weapon) = 0;
	virtual void RecieveCurrentGate(E_Gate Gate) = 0;	
};