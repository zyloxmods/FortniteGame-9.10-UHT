#pragma once
#include "CoreMinimal.h"
#include "WebJSFunction.h"
#include "DriftKairosCommonJSBridge.h"
#include "DanceChallengesJSBridge.generated.h"

UCLASS(Blueprintable)
class UDanceChallengesJSBridge : public UDriftKairosCommonJSBridge {
    GENERATED_BODY()
public:
    UDanceChallengesJSBridge();
    UFUNCTION(BlueprintCallable)
    void GetDanceChallenges(FWebJSResponse Response);
    
};

