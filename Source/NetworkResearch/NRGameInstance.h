#pragma once

#include "CoreMinimal.h"
#include "NRGameInstance.generated.h"

UCLASS()
class NETWORKRESEARCH_API UNRGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:
    virtual void Init() override;
};
