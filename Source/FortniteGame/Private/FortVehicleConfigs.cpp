#include "FortVehicleConfigs.h"

UFortVehicleConfigs::UFortVehicleConfigs() {
    this->WaterTestFrequency = 0.50f;
    this->MinLinearSpeedRunningVarianceSq = 100.00f;
    this->MinAngularSpeedRunningVarianceSq = 100.00f;
    this->VehicleSleepCounter = 1.00f;
    this->VehicleErrorPerDistanceCentimeters = 1.00f;
    this->VehicleErrorPerDistanceCentimetersPerSecond = 0.00f;
    this->VehicleErrorPerAngleDegrees = 0.10f;
    this->VehicleErrorPerAngleDegreesPerSecond = 0.00f;
    this->VehicleErrorPerUpdate = 1.00f;
    this->VehicleMinSecondsBetweenUpdates = 0.07f;
    this->VehicleMinFOV = 80.00f;
    this->VehicleMaxFOV = 100.00f;
    this->VehicleMinFOVSpeed = 30.00f;
    this->VehicleMaxFOVSpeed = 120.00f;
    this->VehicleFOVInterpSpeed = 6.25f;
    this->VehicleInvalidErrorPerSecondTolerance = 100.00f;
    this->VehicleInvalidErrorMaxSeconds = 4.00f;
    this->VehicleInvalidErrorMinSeconds = 1.00f;
    this->InteractDistanceScalar = 1.00f;
    this->InPlaceRotationStrength = 14.00f;
    this->WheelRadius = 6.00f;
    this->IdleBrakeForce = 11.00f;
    this->TooFastBrakeForce = 11.00f;
    this->BrakeForce = 11.00f;
    this->AutoBrakeSpeed = 2.00f;
    this->WaterDragCoefficient = 25.00f;
    this->LateralFriction = 6.00f;
    this->VehicleCameraMaxSteerAlpha = 1.00f;
    this->MaxForwardSpeedToSwapReverseControls = 1.00f;
    this->MinSpeedSteeringAngle = 70.00f;
    this->MaxSpeedSteeringAngle = 20.00f;
    this->bSteerWithFrontWheels = true;
    this->bInvertSteeringWhenReversing = false;
    this->MaxRestSpeed = 10.00f;
    this->ImpactDamageSafeDegrees = 45.00f;
    this->MinSpeedToDamage = 25.00f;
    this->MaxSpeedToDamage = 70.00f;
    this->MinSpeedDamage = 5.00f;
    this->MaxSpeedDamage = 50.00f;
    this->MinSpeedDamageNoPlayer = 5.00f;
    this->MaxSpeedDamageNoPlayer = 25.00f;
    this->MinSpeedAIDamage = 5.00f;
    this->MaxSpeedAIDamage = 50.00f;
    this->MinSpeedAIDamageNoPlayer = 5.00f;
    this->MaxSpeedAIDamageNoPlayer = 25.00f;
    this->MinFallDamageHeight = 1200.00f;
    this->MaxFallDamageHeight = 6400.00f;
    this->MinFallDamage = 15.00f;
    this->MaxFallDamage = 600.00f;
    this->PlayerFallDamageMultiplier = 1.00f;
    this->MinImpactMagnitudeToDealDamageKmH = 80.00f;
    this->MaxImpactDamage = 100.00f;
    this->ImpactDamagePerImpulse = 0.02f;
    this->ImpactReductionPerTransverseVelocity = 1.00f;
    this->MaxImpactDamageReduction = 100.00f;
    this->PlayerImpactDamageMultiplier = 0.50f;
    this->VehicleEjectCooldown = 0.10f;
    this->VehicleFlipCooldown = 0.50f;
    this->CameraSpaceForwardDistanceOverride = 0.00f;
    this->PlayerToSocketSweepRadius = 30.00f;
    this->MinSpringHitNormal = -0.50f;
    this->VehicleCameraGraceZone = 0.00f;
    this->VehicleLeftAnalogSteeringDeadZone = 0.50f;
    this->VehicleCameraLeftAnalogMultiplier = 1.00f;
    this->VehicleGravity = -1200.00f;
    this->PlayerGravityMultiplier = 1.00f;
    this->InWaterTopSpeedMutliplier = 0.50f;
    this->VehicleInPlaceThreshold = 0.50f;
    this->VehicleWeightShiftPitchStrength = 1.00f;
    this->VehicleWeightShiftRollStrength = 1.00f;
    this->VehicleWeightShiftYawStrength = 1.00f;
    this->JumpRateMultiplier = 1.00f;
    this->VehicleDebugStrafeMultiplier = 1.00f;
    this->GravityVelocitySteerForwardThreshold = 3.00f;
    this->GravityVelocitySteerErrorThreshold = 1.00f;
    this->GravitySteerMultiplier = 0.05f;
    this->InWaterPushMultiplier = 1.20f;
    this->MinWheelRotationSpeed = 90.00f;
    this->WheelRotationAcceleration = 0.50f;
    this->WheelRotationDampingPerSecond = 10.00f;
    this->HonkTimeMax = 3.00f;
    this->HonkCooldownMax = 3.00f;
    this->HonkTimePerHonk = 0.25f;
    this->VehicleLookAheadLength = 500.00f;
    this->VehicleLookAheadInAirLength = 1000.00f;
    this->VehicleLookAheadMinSpeed = 45.00f;
    this->VehicleLookAheadMinNormal = 1.00f;
    this->VehicleLookAheadStiff = 120.00f;
    this->VehicleLookAheadDamp = 10.00f;
    this->VehicleLookAheadInAirStiff = 20.00f;
    this->VehicleLookAheadInAirDamp = 3.00f;
    this->VehicleLookAheadMaxAccel = 1000.00f;
    this->VehicleLookAheadMaxAccelInAir = 1000.00f;
    this->VehicleAirControlStiff = 5.00f;
    this->VehicleAirControlDamp = 3.00f;
    this->VehicleAirYawStrength = 5.00f;
    this->VehicleAirPitchStrength = 5.00f;
    this->DragCoefficient = 5.00f;
    this->DragCoefficient2 = 0.00f;
    this->MaxDragSpeed = 15.00f;
    this->MinLinearSpeedToWake = 5.00f;
    this->MinAngularSpeedToWake = 5.00f;
    this->MaxDriveInclineAngle = 45.00f;
    this->MaxAntigravityInclineAngle = 45.00f;
    this->MaxDriveTiltAngle = 70.00f;
    this->AxleOffsetZ = 7.00f;
    this->SpringStiffMultiplier = 1.00f;
    this->SpringDampMultiplier = 1.00f;
    this->SpringMaxAccelMultiplier = 1.00f;
    this->SpringLengthMultiplier = 1.00f;
    this->HasGroundSweepLengthMultiplier = 2.00f;
    this->AngularDragCoefficient = 1.80f;
    this->PitchAngularDrag = 1.00f;
    this->RollAngularDrag = 0.44f;
    this->VehicleAnalogReverse = 0.20f;
    this->PassengerDamageOnDestruction = 0.00f;
    this->MinFallDamageNormalScale = 0.50f;
    this->VehicleLookAheadMinSpeedInAir = 1.00f;
    this->VehicleAutoAirPitchStrength = 1.00f;
    this->VehicleAutoAirYawStrength = 1.00f;
    this->VehicleAutoAirRollStrength = 0.50f;
    this->VehicleMinVelAlongContactNormal = 1.00f;
    this->VehicleMaxVelAlongContactNormal = 30.00f;
    this->MinSameDirCollision = 0.50f;
    this->MinCollisionSpeedToCorrect = 10.00f;
    this->MinCollisionBoostNormal = 0.50f;
    this->CollisionSpeedBoostAlpha = 0.40f;
    this->CancelIgnoreForwardThreshold = 0.20f;
    this->DriverExitLaunchScalar = 1.00f;
    this->DriverExitLaunchUpScalar = 1.00f;
    this->DriverExitInAirLaunchScalar = 0.30f;
    this->DriverExitInAirLaunchUpScalar = 800.00f;
    this->PassengerExitLaunchScalar = 1.00f;
    this->PassengerExitLaunchUpScalar = 800.00f;
    this->PassengerExitInAirLaunchScalar = 1.00f;
    this->PassengerExitInAirLaunchUpScalar = 800.00f;
    this->AngularDragCoefficientRampedUp = 3.00f;
    this->PitchAngularDragRampedUp = 3.00f;
    this->VehicleAirYawStrengthRampedUp = 15.00f;
    this->VehicleAirPitchStrengthRampedUp = 25.00f;
    this->SteerBrakeMultiplier = 0.20f;
    this->WheelRadiusF = 10.00f;
    this->WheelRadiusB = 12.00f;
    this->PitchLeanStrength = 0.00f;
    this->MaxForwardVelAccelLean = 0.00f;
    this->MaxReverseVelAccelLean = 0.00f;
    this->MaxSteerForAccelLean = 0.00f;
    this->MinYawSpeedForLean = 1.00f;
    this->YawLeanStrength = 1500.00f;
    this->AccelerationPitchCooldown = 1000.00f;
    this->YawLeanCooldown = 0.00f;
    this->MaxAccelPitch = 500.00f;
    this->MaxYawLean = 200.00f;
    this->ContactModificationOffset = 15.00f;
    this->VehicleFloorFriction = 0.00f;
    this->VehicleSideScrapeFriction = 0.10f;
    this->VehicleSideScrapeMaxCosAngle = 0.70f;
    this->GroundCheckSweepRadius = 20.00f;
    this->SMSleepCounter = 0.00f;
    this->CorrectOrientationTimeout = 0.50f;
    this->NudgeOrientationTimeout = 0.50f;
    this->NudgeDistance = 10.00f;
    this->CorrectOrientationLinearCoefficient = 100.00f;
    this->CorrectOrientationAngularCoefficient = 250.00f;
    this->SpringCollisionChannel = ECC_Vehicle;
    this->bVehicleCameraSteering = false;
    this->bVehicleScreenSpaceSteering = false;
    this->bVehicleCameraLeftAnalogSteering = true;
    this->bUseKinematicReplicationWhenNotRendered = true;
    this->bCanDoTricks = true;
    this->bShouldDriverHaveReticle = false;
    this->PawnLaunchVerticalVelocityScale = 2.00f;
    this->PawnLaunchForwardVelocityScale = 0.50f;
    this->PawnLaunchMaxSpeed = 6000.00f;
    this->PawnLaunchAngleAdjustment = 1.00f;
    this->DestructionTraceAheadMinSpeed = 0.00f;
    this->DestructionTraceAheadAmount = 0.05f;
    this->DestructionImpulseAmount = 50.00f;
    this->bCanDestroyProps = true;
    this->HitRequiredMinSpeed = 636.00f;
    this->MaxHealthToDestroyProp = 100.00f;
    this->MaxBudgetForActorTick = 2;
    this->MinBudgetForReducedSpring = 2;
    this->bShouldServerRunReducedSprings = false;
    this->MaxReducedSpringsPerTick = 4;
    this->bSupportsWraps = true;
    this->ExitVehicleCoolDown = 0.00f;
    this->bInheritScale = false;
    this->bDontApplyDragInAir = true;
    this->HoldToExitTime = 0.00f;
    this->bDriverCanDamageVehicle = true;
    this->ForceExitZOffset = 0.00f;
    this->MaxWheelSpinWound = 100000.00f;
    this->bUseFuel = false;
    this->bBlockBuilding = false;
    this->bPreferDriverSeatWhenEmpty = true;
}

