#pragma once
#include "CoreMinimal.h"
#include "WebEnvUrl.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameInstance.h"
#include "WebJSFunction.h"
#include "WebJSFunction.h"
#include "AthenaDataTableSet.h"
#include "AudioDynamicSoundData.h"
#include "EFortGameFeature.h"
#include "EFortGameFeatureState.h"
#include "PlaylistFrontEndSettings.h"
#include "PlaylistOverrideData.h"
#include "FortGameInstance.generated.h"

class IFortUIManagerInterface;
class UFortUIManagerInterface;
class UFortAppActivationSoundMixManager;
class UFortChat;
class UFortInteractabilityTracker;
class UFortMatchAnalytics;
class UFortMatchmaking;
class UFortMatchmakingV2;
class UFortMaterialCacheManager;
class UFortMissionGenerator;
class UFortPlaylistManager;
class UFortPushNotificationManager;
class UFortRegisteredPlayerInfo;
class UFortRejoinCheck;
class UFortSeasonalEventManager;
class UFortSocialManager;
class UFortTooltipManager;
class UFortTournamentManager;
class UFortUpdateManager;
class UMcpProfileManager;
class UReplayVideoManager;
class USidecarSys;

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UFortGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> EventFlagsForcedOnByHotfix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> EventFlagsForcedOffByHotfix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> CosmeticsBlacklistedByHotfix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleRoyaleMatchmakingEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreativeModeProfileEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaylistOverrideData> PlaylistOverrides;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioDynamicSoundData> DynamicSoundData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlaylistFrontEndSettings> FrontEndPlaylistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaDataTableSet AthenaDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bOverridingCurrentEmoteMusicFFT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentEmoteMusicFFT100hz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentEmoteMusicFFT2000hz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EmoteMusicEnvelopeBeatCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IFortUIManagerInterface> UIManagerInterface;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath UIManagerClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMcpProfileManager* ProfileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMatchmaking* Matchmaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMatchmakingV2* MatchmakingV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortRejoinCheck* RejoinCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSocialManager* SocialManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMatchAnalytics* MatchAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USidecarSys* SidecarSys;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMcpSidecarEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GlobalUnregistrationSaveGUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortTooltipManager* TooltipManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortRegisteredPlayerInfo*> RegisteredPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUpdateManager* UpdateManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortInteractabilityTracker* InteractabilityTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortChat* Chatroom;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortRegisteredPlayerInfo>> RegisteredPlayerInfosAwaitingRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString LastGameHighlightGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSeasonalEventManager* SeasonalEventManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortTournamentManager* TournamentManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPushNotificationManager* MobilePushNotificationManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BroadcastFeatureStatusRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMissionGenerator* CurrentMissionGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAppActivationSoundMixManager* AppActivationSoundMixManager;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KairosUIResX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KairosUIResY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWebEnvUrl> KairosWebUrls;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KairosHotfixCheckTimer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float KairosHotfixCheckVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlaylistManager* PlaylistManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMaterialCacheManager* MaterialCacheManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UReplayVideoManager* ReplayVideoManager;
    
public:
    UFortGameInstance();
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    bool UninstallFortniteBROnNextBoot(bool bRestartApp, bool bPromptForRestart);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    bool UninstallAllOptionalContentOnNextBoot(bool bRestartApp, bool bPromptForRestart);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void SetUserSetting(const FString& Key, const FString& Value, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideCurrentMusicFFT(float FFT100hz, float FFT2000hz);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void SetNotificationCallback(FWebJSFunction Callback);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void SetMultipleUserSettings(const TMap<FString, FString>& Settings, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void SetHotfixCompleteCallback(FWebJSFunction Callback);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void SetFeatureStatusCallback(FWebJSFunction Callback);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void SetErrorSimulationCommands(const FString& CommandLine);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void SetActiveGameFeature(EFortGameFeature Feature, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void RequestGameFeatureState(EFortGameFeature Feature, EFortGameFeatureState State, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void RequestBroadcast();
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void PauseContentInstall();
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void OpenUpdateApp();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTournamentDataRefreshed();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void IsContentUpToDate(EFortGameFeature Feature, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void GetUserSetting(const FString& Key, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void GetProjectVersion(FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void GetHotfixHasApplied(FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void GetDownloadSize(EFortGameFeature Feature, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void GetContentState(EFortGameFeature Feature, FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ContinueDelayedStartup();
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideCurrentMusicFFT();
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void CheckLatestClient(FWebJSResponse Response);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeActiveGameFeature(const FString& FeatureString);
    
    UFUNCTION(BlueprintCallable, Reliable, ServiceResponse)
    void CancelContentInstall();
    
};

