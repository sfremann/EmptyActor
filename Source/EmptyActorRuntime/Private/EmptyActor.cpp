// Copyright Sarah Fremann, 2024. All Rights Reserved.

#include "EmptyActor.h"

AEmptyActor::AEmptyActor(const FObjectInitializer& ObjectInitializer)
{
    PrimaryActorTick.bCanEverTick = false;
	
	SceneRoot = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, TEXT("SceneRoot"));
	SceneRoot->SetMobility(EComponentMobility::Movable);
	SetRootComponent(SceneRoot);
}