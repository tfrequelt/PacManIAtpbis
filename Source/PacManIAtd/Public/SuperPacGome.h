// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Eatable.h"
#include "SuperPacGome.generated.h"

/**
 * 
 */
UCLASS()
class PACMANIATD_API ASuperPacGome : public AEatable
{
	GENERATED_BODY()
private:
	virtual void OnEat() override;
};
