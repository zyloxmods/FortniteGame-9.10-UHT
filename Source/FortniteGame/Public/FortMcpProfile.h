#pragma once
#include "CoreMinimal.h"
#include "ClientUrlContext.h"
#include "McpProfile.h"
#include "FortMcpProfile.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMcpProfile : public UMcpProfile {
    GENERATED_BODY()
public:
    UFortMcpProfile();
private:
    UFUNCTION(BlueprintCallable, Reliable, ServiceRequest)
    void MarkItemSeen(const TArray<FString>& ItemIds, UPARAM(NotReplicated) FClientUrlContext& Context);
    
};

