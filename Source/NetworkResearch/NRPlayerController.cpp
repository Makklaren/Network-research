#include "NRPlayerController.h"

#include "NRGameState.h"
#include "Kismet/GameplayStatics.h"

bool ANRPlayerController::Server_IncreaseVariable_Validate()
{
    return true;
}

void ANRPlayerController::Server_IncreaseVariable_Implementation()
{
    ANRGameState* GameState = Cast<ANRGameState>(UGameplayStatics::GetGameState(GetWorld()));
    GameState->IncreaseVariable();
}

void ANRPlayerController::BeginPlay()
{
    Super::BeginPlay();

    if(GetLocalRole() < ROLE_Authority)
    {
        Server_IncreaseVariable();
    }
}
