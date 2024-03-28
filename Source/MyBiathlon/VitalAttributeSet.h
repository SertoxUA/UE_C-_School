// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BiathlonAttributeSet.h"
#include "VitalAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class MYBIATHLON_API UVitalAttributeSet : public UBiathlonAttributeSet
{
	GENERATED_BODY()
	

public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData StaminaAttribute;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, StaminaAttribute);
};
