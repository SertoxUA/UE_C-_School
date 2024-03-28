// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BiathlonAttributeSet.h"
#include "CombatAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class MYBIATHLON_API UCombatAttributeSet : public UBiathlonAttributeSet
{
	GENERATED_BODY()


public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData SpeedAttribute;
	ATTRIBUTE_ACCESSORS(UCombatAttributeSet, SpeedAttribute);
	
};
