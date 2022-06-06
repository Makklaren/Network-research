#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "NRGameState.generated.h"

UCLASS()
class NETWORKRESEARCH_API ANRGameState : public AGameState
{
    GENERATED_BODY()

    UPROPERTY(Replicated)
    int32 OurVariable = -1;

public:
    void IncreaseVariable();

    virtual void PostInitializeComponents() override;
    virtual void AddPlayerState(APlayerState* PlayerState) override;
};
