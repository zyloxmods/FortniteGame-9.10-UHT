#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectContextHandle.h"
#include "ProxyGameplayCueDamagePhysical.generated.h"

USTRUCT(BlueprintType)
struct FProxyGameplayCueDamagePhysical {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProxyGameplayCueDamagePhysicalMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectContextHandle EffectContext;
    
    FORTNITEGAME_API FProxyGameplayCueDamagePhysical();
};

