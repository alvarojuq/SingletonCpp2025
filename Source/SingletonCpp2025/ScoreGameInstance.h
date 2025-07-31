#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ScoreGameInstance.generated.h"

UCLASS()
class SINGLETONCPP2025_API UScoreGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Score")
    void AddScore(int32 Points);

    UFUNCTION(BlueprintCallable, Category = "Score")
    int32 GetScore() const;

    UFUNCTION(BlueprintCallable, Category = "Score")
    void ResetScore();

private:
    int32 TotalScore = 0;
};
