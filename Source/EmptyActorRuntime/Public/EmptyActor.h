// Copyright Sarah Fremann, 2024. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "EmptyActor.generated.h"

/** Base empty actor class */
UCLASS(BlueprintType)
class EMPTYACTORRUNTIME_API AEmptyActor : public AActor
{
    GENERATED_BODY()

public:
    AEmptyActor(const FObjectInitializer& ObjectInitializer);

    UPROPERTY()
	class USceneComponent* SceneRoot;
};