#include "FortSpectatorBeaconClient.h"

void AFortSpectatorBeaconClient::ServerReconnectExistingReservation_Implementation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
}
bool AFortSpectatorBeaconClient::ServerReconnectExistingReservation_Validate(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
    return true;
}

void AFortSpectatorBeaconClient::ServerAbandonExistingReservation_Implementation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
}
bool AFortSpectatorBeaconClient::ServerAbandonExistingReservation_Validate(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer) {
    return true;
}

void AFortSpectatorBeaconClient::ClientReconnectResponse_Implementation(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse) {
}

void AFortSpectatorBeaconClient::ClientAllowedToProceedFromReservationTimeout_Implementation() {
}

void AFortSpectatorBeaconClient::ClientAllowedToProceedFromReservation_Implementation() {
}

void AFortSpectatorBeaconClient::ClientAbandonResponse_Implementation(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse) {
}

AFortSpectatorBeaconClient::AFortSpectatorBeaconClient() {
    this->ReconnectionInitialTimeout = 100.00f;
    this->ReconnectionTimeout = 50.00f;
    this->bHasReconnected = false;
}

