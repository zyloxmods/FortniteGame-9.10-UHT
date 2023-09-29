#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKHighlightSignificance.generated.h"

UENUM(BlueprintType)
enum class EGfeSDKHighlightSignificance : uint8 {
    ExtremelyBad = 0x1,
    VeryBad,
    Bad = 0x4,
    Neutral = 0x8,
    Good = 0x10,
    VeryGood = 0x20,
    ExtremelyGood = 0x40,
    MAX = 0x80,
};

