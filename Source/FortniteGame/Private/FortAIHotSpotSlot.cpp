#include "FortAIHotSpotSlot.h"

UFortAIHotSpotSlot::UFortAIHotSpotSlot() {
    this->SlotType = EFortHotSpotSlot::Melee;
    this->bHasProjectedLocation = false;
    this->bProjectedOnLowArea = false;
    this->bIsAutoGenerated = false;
    this->bCanDuplicateOnProjection = true;
    this->bCanProjectUp = true;
}

