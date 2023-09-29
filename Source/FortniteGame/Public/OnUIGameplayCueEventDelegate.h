#pragma once
#include "CoreMinimal.h"
#include "EGameplayCueEvent.h"
#include "GameplayCueParameters.h"
#include "OnUIGameplayCueEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnUIGameplayCueEvent, FName, CueName, TEnumAsByte<EGameplayCueEvent::Type>, EventType, const FGameplayCueParameters&, Parameters);

