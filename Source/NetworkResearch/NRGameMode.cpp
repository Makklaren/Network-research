#include "NRGameMode.h"
#include "UObject/ConstructorHelpers.h"

ANRGameMode::ANRGameMode()
{
    // set default pawn class to our Blueprinted character
  /*  static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
    if (PlayerPawnBPClass.Class != nullptr)
    {
        DefaultPawnClass = PlayerPawnBPClass.Class;
    }*/
}
