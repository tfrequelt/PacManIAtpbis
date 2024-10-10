// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Eatable.h"
#include "PacGome.generated.h"

/**
 * 
 */
UCLASS()
class PACMANIATD_API APacGome : public AEatable
{
	GENERATED_BODY()
private:
	virtual void OnEat() override;
};
