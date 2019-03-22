#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInjuredDefinition(py::module &m)
{
    py::class_< UInjuredDefinition,  UGBXDefinition   >(m, "UInjuredDefinition")
        .def_readwrite("InjuredInteractionDefinition", &UInjuredDefinition::InjuredInteractionDefinition)
        .def_readwrite("InjuredAttributeModifiers", &UInjuredDefinition::InjuredAttributeModifiers)
        .def_readwrite("InjuredBonusDamageScale", &UInjuredDefinition::InjuredBonusDamageScale)
        .def_readwrite("InjuredBonusTimePercent", &UInjuredDefinition::InjuredBonusTimePercent)
        .def_readwrite("BaseRejuvenateDelay", &UInjuredDefinition::BaseRejuvenateDelay)
        .def_readwrite("BaseMultiplePlayersRejuvenateDelay", &UInjuredDefinition::BaseMultiplePlayersRejuvenateDelay)
        .def_readwrite("NoEnemiesDelayMultiplier", &UInjuredDefinition::NoEnemiesDelayMultiplier)
        .def_readwrite("ReviveDuration", &UInjuredDefinition::ReviveDuration)
        .def_readwrite("AutoReviveCheckDelay", &UInjuredDefinition::AutoReviveCheckDelay)
        .def_readwrite("InjuredViewDropCycleTime", &UInjuredDefinition::InjuredViewDropCycleTime)
        .def_readwrite("InjuredViewDropStrength", &UInjuredDefinition::InjuredViewDropStrength)
        .def_readwrite("InjuredMouseSensitivityMultiplier", &UInjuredDefinition::InjuredMouseSensitivityMultiplier)
        .def_readwrite("InjuredScreenFadePartSys", &UInjuredDefinition::InjuredScreenFadePartSys)
        .def_readwrite("InjuredCameraAnim", &UInjuredDefinition::InjuredCameraAnim)
        .def_readwrite("InjuredStartAkEvent", &UInjuredDefinition::InjuredStartAkEvent)
        .def_readwrite("InjuredStopAkEvent", &UInjuredDefinition::InjuredStopAkEvent)
        .def_readwrite("InjuredBehaviors", &UInjuredDefinition::InjuredBehaviors)
        .def_readwrite("TargetedBehaviors", &UInjuredDefinition::TargetedBehaviors)
        .def_readwrite("AboutToDieBehaviors", &UInjuredDefinition::AboutToDieBehaviors)
        .def_readwrite("NoEnemyBehaviors", &UInjuredDefinition::NoEnemyBehaviors)
        .def_readwrite("DamageEnemyBehaviors", &UInjuredDefinition::DamageEnemyBehaviors)
        .def_readwrite("DamageSelfBehaviors", &UInjuredDefinition::DamageSelfBehaviors)
        .def_readwrite("KilledEnemyBehaviors", &UInjuredDefinition::KilledEnemyBehaviors)
        .def_readwrite("RecoveredBehaviors", &UInjuredDefinition::RecoveredBehaviors)
        .def_readwrite("ResurrectedBehaviors", &UInjuredDefinition::ResurrectedBehaviors)
        .def_readwrite("RevivedBehaviors", &UInjuredDefinition::RevivedBehaviors)
        .def_readwrite("PermadeathBehaviors", &UInjuredDefinition::PermadeathBehaviors)
        .def_readwrite("RejuvenatedHealthPctOfMax", &UInjuredDefinition::RejuvenatedHealthPctOfMax)
        .def_readwrite("RejuvenatedShieldPctOfMax", &UInjuredDefinition::RejuvenatedShieldPctOfMax)
        .def_readwrite("ResurrectedHealthPctOfMax", &UInjuredDefinition::ResurrectedHealthPctOfMax)
        .def_readwrite("ResurrectedShieldPctOfMax", &UInjuredDefinition::ResurrectedShieldPctOfMax)
        .def_readwrite("RevivedHealthPctOfMax", &UInjuredDefinition::RevivedHealthPctOfMax)
        .def_readwrite("RevivedShieldPctOfMax", &UInjuredDefinition::RevivedShieldPctOfMax)
        .def_readwrite("MaxTimeBetweenInjuries", &UInjuredDefinition::MaxTimeBetweenInjuries)
        .def_readwrite("MaxDesiredSuccessiveInjuries", &UInjuredDefinition::MaxDesiredSuccessiveInjuries)
        .def_readwrite("InjuredMovementSpeed", &UInjuredDefinition::InjuredMovementSpeed)
        .def_readwrite("InjuredMovementAnimNodeName", &UInjuredDefinition::InjuredMovementAnimNodeName)
        .def_readwrite("InjuredWeaponPutDownTime", &UInjuredDefinition::InjuredWeaponPutDownTime)
        .def_readwrite("InjuredWeaponEquipTime", &UInjuredDefinition::InjuredWeaponEquipTime)
        .def_readwrite("InjuredSpecialMoveOverride", &UInjuredDefinition::InjuredSpecialMoveOverride)
        .def_readwrite("InjuredPreDeathAnim", &UInjuredDefinition::InjuredPreDeathAnim)
        .def_readwrite("InjuredDeadCameraStartDistance", &UInjuredDefinition::InjuredDeadCameraStartDistance)
        .def_readwrite("InjuredDeadCameraEndDistance", &UInjuredDefinition::InjuredDeadCameraEndDistance)
        .def_readwrite("InjuredDeadCameraLerpTime", &UInjuredDefinition::InjuredDeadCameraLerpTime)
        .def_readwrite("InjuredDeadCameraRotation", &UInjuredDefinition::InjuredDeadCameraRotation)
        .def_readwrite("InjuredDeadDelayBetweenDeathAnimAndDigistruct", &UInjuredDefinition::InjuredDeadDelayBetweenDeathAnimAndDigistruct)
        .def_readwrite("InjuredDeadDelayBeforeDigistructKillVolume", &UInjuredDefinition::InjuredDeadDelayBeforeDigistructKillVolume)
        .def_readwrite("InjuredDeadBoneName", &UInjuredDefinition::InjuredDeadBoneName)
        .def_readwrite("InjuredPreDeathRecoveryTime", &UInjuredDefinition::InjuredPreDeathRecoveryTime)
        .def_readwrite("InjuredPreDeathRecoveryExponent", &UInjuredDefinition::InjuredPreDeathRecoveryExponent)
        .def_readwrite("InjuredPreDeathRecoveryAnim", &UInjuredDefinition::InjuredPreDeathRecoveryAnim)
        .def("StaticClass", &UInjuredDefinition::StaticClass, py::return_value_policy::reference)
          ;
}