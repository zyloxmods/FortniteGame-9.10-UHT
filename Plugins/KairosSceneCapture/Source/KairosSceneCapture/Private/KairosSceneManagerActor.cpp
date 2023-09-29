#include "KairosSceneManagerActor.h"
#include "Components/AudioComponent.h"

void AKairosSceneManagerActor::StopAR() {
}

void AKairosSceneManagerActor::PauseOrResumeSnippet(const FString& PlayerID, bool bShouldPase) {
}



FKairosSceneInfo AKairosSceneManagerActor::GetSceneInfo() {
    return FKairosSceneInfo{};
}

void AKairosSceneManagerActor::BeginEmotePlaybackForPlayer(const FString& PlayerID, const FString& EmoteID) {
}

AKairosSceneManagerActor::AKairosSceneManagerActor() {
    this->SnippetAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("SnippetAudioComponent"));
    this->ActiveGroupWidget = NULL;
    this->bIsSnippetPaused = false;
}

