#pragma once
#include "CoreMinimal.h"
#include "EFortQuestObjectiveStatEvent.generated.h"

UENUM(BlueprintType)
enum class EFortQuestObjectiveStatEvent : uint8 {
    Kill,
    TeamKill,
    KillContribution,
    Damage,
    Damage_OLD,
    Visit,
    Land,
    Emote,
    Spray,
    Toy,
    Build,
    BuildingEdit,
    BuildingRepair,
    BuildingUpgrade,
    PlaceTrap,
    Complete,
    Craft,
    Collect,
    Win,
    Interact,
    TeamInteract,
    Destroy,
    Ability,
    WaveComplete,
    Custom,
    ComplexCustom,
    Client,
    AthenaRank,
    AthenaOutlive,
    RevivePlayer,
    Heal,
    EarnVehicleTrickPoints,
    VehicleAirTime,
    TimeElapsed,
    NumGameplayEvents,
    Acquire,
    Consume,
    OpenCardPack,
    PurchaseCardPack,
    Convert,
    Upgrade,
    UpgradeRarity,
    QuestComplete,
    AssignWorker,
    CollectExpedition,
    CollectSuccessfulExpedition,
    LevelUpCollectionBook,
    LevelUpAthenaSeason,
    LevelUpBattlePass,
    GainAthenaSeasonXp,
    HasItem,
    HasAccumulatedItem,
    SlotInCollection,
    AlterationRespec,
    AlterationUpgrade,
    HasCompletedQuest,
    HasAssignedWorker,
    HasUpgraded,
    HasConverted,
    HasUpgradedRarity,
    HasLeveledUpCollectionBook,
    SlotHeroInLoadout,
    HasLeveledUpAthenaSeason,
    HasLeveledUpBattlePass,
    HasGainedAthenaSeasonXp,
    MinigameDynamicEvent,
    MinigameComplete,
    MinigameDeath,
    MinigameAssist,
    Max_None,
};

