// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TSD18_UE4_TESTHUD.generated.h"

UCLASS()
class ATSD18_UE4_TESTHUD : public AHUD
{
	GENERATED_BODY()

public:
	ATSD18_UE4_TESTHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

