#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FillFloorPositionData.generated.h"

USTRUCT(BlueprintType)
struct FFillFloorPositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MoveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaitTime;
    
    FORTNITEGAME_API FFillFloorPositionData();
};

