#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "GASInstallPlayerState.generated.h"

/**
 *
 */
UCLASS()
class MYBIATHLON_API AGASInstallPlayerState : public APlayerState, public IAbilitySystemInterface
{
    GENERATED_BODY()

public:
    AGASInstallPlayerState();

    virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent};

    UPROPERTY(BlueprintReadWrite)
    UAbilitySystemComponent* AbilitySystemComponent;
};
