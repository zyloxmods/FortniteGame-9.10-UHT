#pragma once
#include "CoreMinimal.h"
#include "KairosSnippetPlayRecord.generated.h"

USTRUCT(BlueprintType)
struct FKairosSnippetPlayRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPause;
    
    KAIROSSCENECAPTURE_API FKairosSnippetPlayRecord();
};

