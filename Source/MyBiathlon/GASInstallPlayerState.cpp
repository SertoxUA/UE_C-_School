// Fill out your copyright notice in the Description page of Project Settings.


#include "GASInstallPlayerState.h"

#include "AbilitySystemInterface.h"

AGASInstallPlayerState::AGASInstallPlayerState()
{
    // ��������� AbilitySystemComponent � �����������
    AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}