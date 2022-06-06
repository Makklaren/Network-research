#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
//#include "GameFramework/GameModeBase.h"
#include "NRGameMode.generated.h"

UCLASS(minimalapi)
class ANRGameMode : public AGameMode
{
    GENERATED_BODY()

public:
    ANRGameMode();

protected:
    int32 MaxNumPlayers = 2;
    TArray<class APlayerController*> PlayerControllerList;

    virtual bool ReadyToStartMatch_Implementation() override;
    virtual void PostLogin(APlayerController* NewPlayer) override;
};
