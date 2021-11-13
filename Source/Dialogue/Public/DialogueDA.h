// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <ThirdParty/PhysX3/PxShared/src/foundation/include/Ps.h>

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DialogueDA.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FPlayerReplies
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Reply)
	FString reply;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Reply)
	UDataAsset* DialogueDA;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Reply)
	int requirement;
	
};
UCLASS(BlueprintType)
class DIALOGUE_API UDialogueDA : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FString> NPCDialoguesInput;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FPlayerReplies> PlayerReplyInput;
};