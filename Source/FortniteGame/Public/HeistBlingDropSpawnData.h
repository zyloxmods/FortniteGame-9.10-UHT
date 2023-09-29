#pragma once
#include "CoreMinimal.h"
#include "ScalableFloat.h"
#include "FortPieSliceSpawnData.h"
#include "HeistBlingDropSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FHeistBlingDropSpawnData : public FFortPieSliceSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SafeZonePhaseWhereToSpawn;
    
    FORTNITEGAME_API FHeistBlingDropSpawnData();
};

