#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "NRPlayerController.generated.h"

UCLASS()
class NETWORKRESEARCH_API ANRPlayerController : public APlayerController
{
    GENERATED_BODY()

    UFUNCTION(Server, unreliable, WithValidation)
    void Server_IncreaseVariable();

    virtual void BeginPlay() override;
};
