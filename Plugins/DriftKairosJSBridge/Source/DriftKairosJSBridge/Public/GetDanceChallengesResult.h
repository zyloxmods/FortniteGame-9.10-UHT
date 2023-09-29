#pragma once
#include "CoreMinimal.h"
#include "GetDanceChallengesResult.generated.h"

USTRUCT(BlueprintType)
struct FGetDanceChallengesResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ChallengeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Created;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Expires;
    
    DRIFTKAIROSJSBRIDGE_API FGetDanceChallengesResult();
};

