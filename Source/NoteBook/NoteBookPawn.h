// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "NoteBookPawn.generated.h"

UCLASS(config=Game)
class ANoteBookPawn : public APawn
{
	GENERATED_UCLASS_BODY()

public:

	virtual void Tick(float DeltaSeconds) override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	virtual void CalcCamera(float DeltaTime, struct FMinimalViewInfo& OutResult) override;

protected:
	void OnResetVR();
	void TriggerClick();
	void TraceForBlock(const FVector& Start, const FVector& End, bool bDrawDebugHelpers);

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	class ANoteBookBlock* CurrentBlockFocus;
};
