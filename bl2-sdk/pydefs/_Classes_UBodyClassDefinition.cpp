#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBodyClassDefinition(py::module &m)
{
    py::class_< UBodyClassDefinition,  UGBXDefinition   >(m, "UBodyClassDefinition")
        .def_readwrite("VfTable_IIHitRegionInfoProvider", &UBodyClassDefinition::VfTable_IIHitRegionInfoProvider)
        .def_readwrite("HeadLookAtName", &UBodyClassDefinition::HeadLookAtName)
        .def_readwrite("BodyTag", &UBodyClassDefinition::BodyTag)
        .def_readwrite("PhysicsJumpSMD", &UBodyClassDefinition::PhysicsJumpSMD)
        .def_readwrite("ScrapedStances", &UBodyClassDefinition::ScrapedStances)
        .def_readwrite("Mass", &UBodyClassDefinition::Mass)
        .def_readwrite("CrouchHeight", &UBodyClassDefinition::CrouchHeight)
        .def_readwrite("DefaultHitRegion", &UBodyClassDefinition::DefaultHitRegion)
        .def_readwrite("HitRegionList", &UBodyClassDefinition::HitRegionList)
        .def_readwrite("DamageLocationTime", &UBodyClassDefinition::DamageLocationTime)
        .def_readwrite("DamageLocationFadeTime", &UBodyClassDefinition::DamageLocationFadeTime)
        .def_readwrite("DamageLocationSize", &UBodyClassDefinition::DamageLocationSize)
        .def_readwrite("DeathDef", &UBodyClassDefinition::DeathDef)
        .def_readwrite("CustomDeathBehaviors", &UBodyClassDefinition::CustomDeathBehaviors)
        .def_readwrite("InjuredDeathAnim", &UBodyClassDefinition::InjuredDeathAnim)
        .def_readwrite("RagDollGravity", &UBodyClassDefinition::RagDollGravity)
        .def_readwrite("MinimumRecognizedImpact", &UBodyClassDefinition::MinimumRecognizedImpact)
        .def_readwrite("DirectImpactEffectThreshold", &UBodyClassDefinition::DirectImpactEffectThreshold)
        .def_readwrite("SlidingImpactEffectThreshold", &UBodyClassDefinition::SlidingImpactEffectThreshold)
        .def_readwrite("ImpactEffectProbability", &UBodyClassDefinition::ImpactEffectProbability)
        .def_readwrite("RagdollImpact", &UBodyClassDefinition::RagdollImpact)
        .def_readwrite("RD_EffectsThreshold", &UBodyClassDefinition::RD_EffectsThreshold)
        .def_readwrite("RD_SlideThreshold", &UBodyClassDefinition::RD_SlideThreshold)
        .def_readwrite("RD_ImpactThreshold", &UBodyClassDefinition::RD_ImpactThreshold)
        .def_readwrite("RD_SlideMinRepeatTime", &UBodyClassDefinition::RD_SlideMinRepeatTime)
        .def_readwrite("RD_ImpactMinRepeatTime", &UBodyClassDefinition::RD_ImpactMinRepeatTime)
        .def_readwrite("RD_SlideExplosion", &UBodyClassDefinition::RD_SlideExplosion)
        .def_readwrite("RD_SlideExplosionDamageRadius", &UBodyClassDefinition::RD_SlideExplosionDamageRadius)
        .def_readwrite("RD_ImpactExplosion", &UBodyClassDefinition::RD_ImpactExplosion)
        .def_readwrite("RD_ImpactExplosionDamageRadius", &UBodyClassDefinition::RD_ImpactExplosionDamageRadius)
        .def_readwrite("RD_ImpactAkEventThreshold", &UBodyClassDefinition::RD_ImpactAkEventThreshold)
        .def_readwrite("RD_ImpactAkEventMinRepeatTime", &UBodyClassDefinition::RD_ImpactAkEventMinRepeatTime)
        .def_readwrite("RD_ImpactAkEvent", &UBodyClassDefinition::RD_ImpactAkEvent)
        .def_readwrite("FootstepBones", &UBodyClassDefinition::FootstepBones)
        .def_readwrite("FootstepImpact", &UBodyClassDefinition::FootstepImpact)
        .def_readwrite("LeadInFootstepImpacts", &UBodyClassDefinition::LeadInFootstepImpacts)
        .def_readwrite("HeavyFootStepImpact", &UBodyClassDefinition::HeavyFootStepImpact)
        .def_readwrite("JumpedImpact", &UBodyClassDefinition::JumpedImpact)
        .def_readwrite("LandedImpact", &UBodyClassDefinition::LandedImpact)
        .def_readwrite("UnwalkableTerrainStaggerVelocityZ", &UBodyClassDefinition::UnwalkableTerrainStaggerVelocityZ)
        .def_readwrite("LandedMinVel", &UBodyClassDefinition::LandedMinVel)
        .def_readwrite("SkidImpact", &UBodyClassDefinition::SkidImpact)
        .def_readwrite("SkidCameraLurchMagnitude", &UBodyClassDefinition::SkidCameraLurchMagnitude)
        .def_readwrite("SkidCameraLurchSpeed", &UBodyClassDefinition::SkidCameraLurchSpeed)
        .def_readwrite("BehaviorAliasLookup", &UBodyClassDefinition::BehaviorAliasLookup)
        .def_readwrite("ArmsMaterialIndex", &UBodyClassDefinition::ArmsMaterialIndex)
        .def_readwrite("ShieldEnabledParameterName", &UBodyClassDefinition::ShieldEnabledParameterName)
        .def_readwrite("ShieldColorParameterName", &UBodyClassDefinition::ShieldColorParameterName)
        .def_readwrite("TouchImpactDefinition", &UBodyClassDefinition::TouchImpactDefinition)
        .def_readwrite("UntouchImpactDefinition", &UBodyClassDefinition::UntouchImpactDefinition)
        .def_readwrite("NumFootstepsToStop", &UBodyClassDefinition::NumFootstepsToStop)
        .def_readwrite("StoppedAkEvent", &UBodyClassDefinition::StoppedAkEvent)
        .def_readwrite("HitByVehicleImpactDefinition", &UBodyClassDefinition::HitByVehicleImpactDefinition)
        .def_readwrite("RunOverByVehicleImpactDefinition", &UBodyClassDefinition::RunOverByVehicleImpactDefinition)
        .def_readwrite("PlayerReRezCoordinatedEffect", &UBodyClassDefinition::PlayerReRezCoordinatedEffect)
        .def_readwrite("PlayerReRezAnim", &UBodyClassDefinition::PlayerReRezAnim)
        .def_readwrite("PlayerEventDef", &UBodyClassDefinition::PlayerEventDef)
        .def_readwrite("DefaultTurns", &UBodyClassDefinition::DefaultTurns)
        .def_readwrite("DefaultCrouchTurns", &UBodyClassDefinition::DefaultCrouchTurns)
        .def_readwrite("AnimationParentBody", &UBodyClassDefinition::AnimationParentBody)
        .def_readwrite("FirstPersonHands", &UBodyClassDefinition::FirstPersonHands)
        .def_readwrite("PrimaryStandInOffset", &UBodyClassDefinition::PrimaryStandInOffset)
        .def_readwrite("WeaponActionParentClass", &UBodyClassDefinition::WeaponActionParentClass)
        .def_readwrite("AimOffsetNodeName", &UBodyClassDefinition::AimOffsetNodeName)
        .def_readwrite("DefaultWeaponHoldDef", &UBodyClassDefinition::DefaultWeaponHoldDef)
        .def_readwrite("WeaponHoldDefs", &UBodyClassDefinition::WeaponHoldDefs)
        .def_readwrite("CanShootWeaponIf", &UBodyClassDefinition::CanShootWeaponIf)
        .def_readwrite("DefaultFirstPersonWeaponHoldDef", &UBodyClassDefinition::DefaultFirstPersonWeaponHoldDef)
        .def_readwrite("FirstPersonWeaponHoldDefs", &UBodyClassDefinition::FirstPersonWeaponHoldDefs)
        .def_readwrite("ThrowGrenadeAkEvent", &UBodyClassDefinition::ThrowGrenadeAkEvent)
        .def_readwrite("MeleeAkEvent", &UBodyClassDefinition::MeleeAkEvent)
        .def_readwrite("ExtraWeaponSlots", &UBodyClassDefinition::ExtraWeaponSlots)
        .def_readwrite("ExpectedInstanceDataSize", &UBodyClassDefinition::ExpectedInstanceDataSize)
        .def_readwrite("CloakStyle", &UBodyClassDefinition::CloakStyle)
        .def_readwrite("DefaultStance", &UBodyClassDefinition::DefaultStance)
        .def_readwrite("PainDialogLines", &UBodyClassDefinition::PainDialogLines)
        .def_readwrite("DefaultStatusEffectSockets", &UBodyClassDefinition::DefaultStatusEffectSockets)
        .def_readwrite("DefaultParticleSystemTemplate", &UBodyClassDefinition::DefaultParticleSystemTemplate)
        .def_readwrite("MeleeWeaponMesh", &UBodyClassDefinition::MeleeWeaponMesh)
        .def_readwrite("MeleeSocketName", &UBodyClassDefinition::MeleeSocketName)
        .def_readwrite("MeleeCameraAnim", &UBodyClassDefinition::MeleeCameraAnim)
        .def_readwrite("PrimaryColorParameterName", &UBodyClassDefinition::PrimaryColorParameterName)
        .def_readwrite("SecondaryColorParameterName", &UBodyClassDefinition::SecondaryColorParameterName)
        .def_readwrite("TertiaryColorParameterName", &UBodyClassDefinition::TertiaryColorParameterName)
        .def_readwrite("PhysVehicleExtentScalars", &UBodyClassDefinition::PhysVehicleExtentScalars)
        .def_readwrite("StaggerSettings", &UBodyClassDefinition::StaggerSettings)
        .def_readwrite("MinKnockbackMomentum", &UBodyClassDefinition::MinKnockbackMomentum)
        .def_readwrite("KnockbackSMD", &UBodyClassDefinition::KnockbackSMD)
        .def_readwrite("KnockbackLandSMD", &UBodyClassDefinition::KnockbackLandSMD)
        .def_readwrite("BodyComposition", &UBodyClassDefinition::BodyComposition)
        .def_readwrite("CringeMinRepeatTime", &UBodyClassDefinition::CringeMinRepeatTime)
        .def_readwrite("CringeMaxRepeatTime", &UBodyClassDefinition::CringeMaxRepeatTime)
        .def_readwrite("Cringes", &UBodyClassDefinition::Cringes)
        .def_readwrite("CustomCringes", &UBodyClassDefinition::CustomCringes)
        .def_readwrite("DodgeAngle", &UBodyClassDefinition::DodgeAngle)
        .def_readwrite("DodgeChance", &UBodyClassDefinition::DodgeChance)
        .def_readwrite("DodgeTargetDistMin", &UBodyClassDefinition::DodgeTargetDistMin)
        .def_readwrite("DodgeRepeatTimeMin", &UBodyClassDefinition::DodgeRepeatTimeMin)
        .def_readwrite("DodgeRepeatTimeMax", &UBodyClassDefinition::DodgeRepeatTimeMax)
        .def_readwrite("DodgeDelayTime", &UBodyClassDefinition::DodgeDelayTime)
        .def_readwrite("DodgeAnimLeft", &UBodyClassDefinition::DodgeAnimLeft)
        .def_readwrite("DodgeAnimRight", &UBodyClassDefinition::DodgeAnimRight)
        .def_readwrite("DodgeGrenadeChance", &UBodyClassDefinition::DodgeGrenadeChance)
        .def_readwrite("MovementDodgeAnims", &UBodyClassDefinition::MovementDodgeAnims)
        .def_readwrite("MovementDodgeTime", &UBodyClassDefinition::MovementDodgeTime)
        .def_readwrite("PlayProvokedAnimChance", &UBodyClassDefinition::PlayProvokedAnimChance)
        .def_readwrite("PlayUnprovokedAnimChance", &UBodyClassDefinition::PlayUnprovokedAnimChance)
        .def_readwrite("ProvokedAnims", &UBodyClassDefinition::ProvokedAnims)
        .def_readwrite("UnprovokedAnims", &UBodyClassDefinition::UnprovokedAnims)
        .def_readwrite("DialogGroup", &UBodyClassDefinition::DialogGroup)
        .def_readwrite("DialogName", &UBodyClassDefinition::DialogName)
        .def_readwrite("DialogGroups", &UBodyClassDefinition::DialogGroups)
        .def_readwrite("InitialTauntWait", &UBodyClassDefinition::InitialTauntWait)
        .def_readwrite("SubsequentTauntWait", &UBodyClassDefinition::SubsequentTauntWait)
        .def_readwrite("TauntCustomEvent", &UBodyClassDefinition::TauntCustomEvent)
        .def_readwrite("StartHeavyBreathingAkEvent", &UBodyClassDefinition::StartHeavyBreathingAkEvent)
        .def_readwrite("StopHeavyBreathingAkEvent", &UBodyClassDefinition::StopHeavyBreathingAkEvent)
        .def_readwrite("TimeBetweenHeavyBreathLoop", &UBodyClassDefinition::TimeBetweenHeavyBreathLoop)
        .def_readwrite("BreathingLoops", &UBodyClassDefinition::BreathingLoops)
        .def_readwrite("InjuredAnims", &UBodyClassDefinition::InjuredAnims)
        .def_readwrite("InjuredAnimsLeft", &UBodyClassDefinition::InjuredAnimsLeft)
        .def_readwrite("InjuredAnimsRight", &UBodyClassDefinition::InjuredAnimsRight)
        .def_readwrite("InjuredAnimsCritical", &UBodyClassDefinition::InjuredAnimsCritical)
        .def_readwrite("InjuredHealthPct", &UBodyClassDefinition::InjuredHealthPct)
        .def_readwrite("OnInjured", &UBodyClassDefinition::OnInjured)
        .def_readwrite("OnUninjured", &UBodyClassDefinition::OnUninjured)
        .def_readwrite("LostShieldAnim", &UBodyClassDefinition::LostShieldAnim)
        .def_readwrite("LostShieldDamageTriggers", &UBodyClassDefinition::LostShieldDamageTriggers)
        .def_readwrite("StartInjuredAkEvent", &UBodyClassDefinition::StartInjuredAkEvent)
        .def_readwrite("StopInjuredAkEvent", &UBodyClassDefinition::StopInjuredAkEvent)
        .def_readwrite("InjuredLoopOverrides", &UBodyClassDefinition::InjuredLoopOverrides)
        .def_readwrite("CloakExceptions", &UBodyClassDefinition::CloakExceptions)
        .def_readwrite("CloakEnterAnims", &UBodyClassDefinition::CloakEnterAnims)
        .def_readwrite("CloakExitAnims", &UBodyClassDefinition::CloakExitAnims)
        .def_readwrite("CloakEffect", &UBodyClassDefinition::CloakEffect)
        .def_readwrite("UnCloakEffect", &UBodyClassDefinition::UnCloakEffect)
        .def_readwrite("CloakEnter", &UBodyClassDefinition::CloakEnter)
        .def_readwrite("CloakExit", &UBodyClassDefinition::CloakExit)
        .def_readwrite("CoverOffset", &UBodyClassDefinition::CoverOffset)
        .def_readwrite("CoverMantleOffset", &UBodyClassDefinition::CoverMantleOffset)
        .def_readwrite("CoverIdleTime", &UBodyClassDefinition::CoverIdleTime)
        .def_readwrite("CoverFireTime", &UBodyClassDefinition::CoverFireTime)
        .def_readwrite("CoverMantleLerpStartTime", &UBodyClassDefinition::CoverMantleLerpStartTime)
        .def_readwrite("CoverMantleLerpStopTime", &UBodyClassDefinition::CoverMantleLerpStopTime)
        .def_readwrite("MantleAnim", &UBodyClassDefinition::MantleAnim)
        .def_readwrite("CoverStance_HighLeft", &UBodyClassDefinition::CoverStance_HighLeft)
        .def_readwrite("CoverStance_HighRight", &UBodyClassDefinition::CoverStance_HighRight)
        .def_readwrite("CoverStance_LowCenter", &UBodyClassDefinition::CoverStance_LowCenter)
        .def_readwrite("RunStance", &UBodyClassDefinition::RunStance)
        .def_readwrite("PatrolStance", &UBodyClassDefinition::PatrolStance)
        .def_readwrite("SprintStance", &UBodyClassDefinition::SprintStance)
        .def_readwrite("InjuredStance", &UBodyClassDefinition::InjuredStance)
        .def_readwrite("CrouchStance", &UBodyClassDefinition::CrouchStance)
        .def_readwrite("ParentDamageLimit", &UBodyClassDefinition::ParentDamageLimit)
        .def_readwrite("DamageParentScale", &UBodyClassDefinition::DamageParentScale)
        .def_readwrite("AudioDistanceRTPC", &UBodyClassDefinition::AudioDistanceRTPC)
        .def_readwrite("DeltaRotationModifierBySpeed", &UBodyClassDefinition::DeltaRotationModifierBySpeed)
        .def_readwrite("SimulatedRotationLerpTime", &UBodyClassDefinition::SimulatedRotationLerpTime)
        .def_readwrite("CrawlerFloorAdjustBones", &UBodyClassDefinition::CrawlerFloorAdjustBones)
        .def_readwrite("CrawlerFloorAdjustRadius", &UBodyClassDefinition::CrawlerFloorAdjustRadius)
        .def_readwrite("CrawlerFloorAdjustTraceUp", &UBodyClassDefinition::CrawlerFloorAdjustTraceUp)
        .def_readwrite("CrawlerFloorAdjustTraceDown", &UBodyClassDefinition::CrawlerFloorAdjustTraceDown)
        .def_readwrite("CrawlerFloorAdjustOffset", &UBodyClassDefinition::CrawlerFloorAdjustOffset)
        .def_readwrite("CrawlerFloorAdjustRate", &UBodyClassDefinition::CrawlerFloorAdjustRate)
        .def_readwrite("PhaseLockDef", &UBodyClassDefinition::PhaseLockDef)
        .def_readwrite("DLCVehicleAnimSetMappings", &UBodyClassDefinition::DLCVehicleAnimSetMappings)
        .def("StaticClass", &UBodyClassDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetHitRegions", [](UBodyClassDefinition &self , TArray< class UBodyHitRegionDefinition* >* Regions) { class UBodyHitRegionDefinition** pyDefaultRegion = 0 ;   self.GetHitRegions(Regions, pyDefaultRegion); return py::make_tuple(*pyDefaultRegion); })
        .def("ShouldUseUpperBodyMovementBlendForHoldName", &UBodyClassDefinition::ShouldUseUpperBodyMovementBlendForHoldName)
        .def("ShouldUseArmBoneBlendForHoldName", &UBodyClassDefinition::ShouldUseArmBoneBlendForHoldName)
        .def("GetAimOffsetProfileForHoldName", &UBodyClassDefinition::GetAimOffsetProfileForHoldName)
        .def("GetFirstPersonWeaponHoldAnimSets", &UBodyClassDefinition::GetFirstPersonWeaponHoldAnimSets)
        .def("GetWeaponHoldAnimSets", &UBodyClassDefinition::GetWeaponHoldAnimSets)
        .def("GetFirstPersonWeaponHoldDef", &UBodyClassDefinition::GetFirstPersonWeaponHoldDef, py::return_value_policy::reference)
        .def("GetWeaponHoldDef", &UBodyClassDefinition::GetWeaponHoldDef, py::return_value_policy::reference)
        .def("GetCloakBody", &UBodyClassDefinition::GetCloakBody, py::return_value_policy::reference)
        .def("ShouldCloak", &UBodyClassDefinition::ShouldCloak)
        .def("GetCringeAnim", &UBodyClassDefinition::GetCringeAnim, py::return_value_policy::reference)
        .def("GetKnockbackBody", &UBodyClassDefinition::GetKnockbackBody, py::return_value_policy::reference)
          ;
}