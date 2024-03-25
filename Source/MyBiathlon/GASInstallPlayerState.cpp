// Fill out your copyright notice in the Description page of Project Settings.


#include "GASInstallPlayerState.h"

#include "AbilitySystemInterface.h"

AGASInstallPlayerState::AGASInstallPlayerState()
{
    // Створення AbilitySystemComponent у конструкторі
    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}