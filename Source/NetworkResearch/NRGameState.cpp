#include "NRGameState.h"

#include "Net/UnrealNetwork.h"

void ANRGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(ANRGameState, OurVariable);
    
}
void ANRGameState::IncreaseVariable()
{
    OurVariable++;
    UE_LOG(LogTemp, Warning, TEXT(" ANRGameState::IncreaseVariable OurVariable = &d"), OurVariable);
}

void ANRGameState::PostInitializeComponents()
{
    Super::PostInitializeComponents();
}

void ANRGameState::AddPlayerState(APlayerState* PlayerState)
{
    Super::AddPlayerState(PlayerState);
}
