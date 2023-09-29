#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKHighlightType.generated.h"

UENUM(BlueprintType)
enum class EGfeSDKHighlightType : uint8 {
    Milestone = 0x1,
    Achievement,
    Incident = 0x4,
    StateChange = 0x8,
    MAX = 0x10,
};

