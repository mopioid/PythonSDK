#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AActor(py::module &m)
{
    py::class_< AActor,  UObject   >(m, "AActor")
		.def_static("StaticClass", &AActor::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIWorldBody", &AActor::VfTable_IIWorldBody)
        .def_readwrite("VfTable_IISpawnActor", &AActor::VfTable_IISpawnActor)
        .def_readwrite("VfTable_IIDamageCauser", &AActor::VfTable_IIDamageCauser)
        .def_readwrite("Components", &AActor::Components)
        .def_readwrite("AllComponents", &AActor::AllComponents)
        .def_readwrite("Location", &AActor::Location)
        .def_readwrite("Rotation", &AActor::Rotation)
        .def_readwrite("DrawScale", &AActor::DrawScale)
        .def_readwrite("DrawScale3D", &AActor::DrawScale3D)
        .def_readwrite("PrePivot", &AActor::PrePivot)
        .def_readwrite("DetachFence", &AActor::DetachFence)
        .def_readwrite("CustomTimeDilation", &AActor::CustomTimeDilation)
        .def_readwrite("Physics", &AActor::Physics)
        .def_readwrite("RemoteRole", &AActor::RemoteRole)
        .def_readwrite("Role", &AActor::Role)
        .def_readwrite("CollisionType", &AActor::CollisionType)
        .def_readwrite("ReplicatedCollisionType", &AActor::ReplicatedCollisionType)
        .def_readwrite("TickGroup", &AActor::TickGroup)
        .def_readwrite("Owner", &AActor::Owner)
        .def_readwrite("Base", &AActor::Base)
        .def_readwrite("Timers", &AActor::Timers)
        .def_readwrite("NetTag", &AActor::NetTag)
        .def_readwrite("NetUpdateTime", &AActor::NetUpdateTime)
        .def_readwrite("NetUpdateFrequency", &AActor::NetUpdateFrequency)
        .def_readwrite("NetPriority", &AActor::NetPriority)
        .def_readwrite("LastNetUpdateTime", &AActor::LastNetUpdateTime)
        .def_readwrite("Instigator", &AActor::Instigator)
        .def_readwrite("WorldInfo", &AActor::WorldInfo)
        .def_readwrite("LifeSpan", &AActor::LifeSpan)
        .def_readwrite("CreationTime", &AActor::CreationTime)
        .def_readwrite("LastRenderTime", &AActor::LastRenderTime)
        .def_readwrite("Touching", &AActor::Touching)
        .def_readwrite("LatentFloat", &AActor::LatentFloat)
        .def_readwrite("PhysicsVolume", &AActor::PhysicsVolume)
        .def_readwrite("Velocity", &AActor::Velocity)
        .def_readwrite("Acceleration", &AActor::Acceleration)
        .def_readwrite("AngularVelocity", &AActor::AngularVelocity)
        .def_readwrite("BaseSkelComponent", &AActor::BaseSkelComponent)
        .def_readwrite("BaseBoneName", &AActor::BaseBoneName)
        .def_readwrite("Attached", &AActor::Attached)
        .def_readwrite("RelativeLocation", &AActor::RelativeLocation)
        .def_readwrite("RelativeRotation", &AActor::RelativeRotation)
        .def_readwrite("CollisionComponent", &AActor::CollisionComponent)
        .def_readwrite("OverlapTag", &AActor::OverlapTag)
        .def_readwrite("RotationRate", &AActor::RotationRate)
        .def_readwrite("GeneratedEvents", &AActor::GeneratedEvents)
        .def_readwrite("LatentActions", &AActor::LatentActions)
        .def_readwrite("MostRecentDamageTaken", &AActor::MostRecentDamageTaken)
        .def("IsWaterVolume", &AActor::IsWaterVolume)
        .def("GetControllerResponsibleForDamage", &AActor::GetControllerResponsibleForDamage, py::return_value_policy::reference)
        .def("GetInstigator", &AActor::GetInstigator, py::return_value_policy::reference)
        .def("GetInstigatorSelfDamageScale", &AActor::GetInstigatorSelfDamageScale)
        .def("GetFireIntervalChanceModifier", &AActor::GetFireIntervalChanceModifier)
        .def("GetStatusEffectBaseChanceModifier", &AActor::GetStatusEffectBaseChanceModifier)
        .def("GetStatusEffectChanceModifier", &AActor::GetStatusEffectChanceModifier)
        .def("GetStatusEffectBaseDamage", &AActor::GetStatusEffectBaseDamage)
        .def("WaitingForAttachmentBase", &AActor::WaitingForAttachmentBase)
        .def("Behavior_ChangeVisibility", &AActor::Behavior_ChangeVisibility)
        .def("Behavior_ToggleVisibility", &AActor::Behavior_ToggleVisibility)
        .def("Behavior_ChangeCollisionSize", &AActor::Behavior_ChangeCollisionSize)
        .def("Behavior_ChangeCollision", &AActor::Behavior_ChangeCollision)
        .def("GetDamageVector", &AActor::GetDamageVector)
        .def("GetRigidBodyMesh", &AActor::GetRigidBodyMesh, py::return_value_policy::reference)
        .def("ClientConsoleCommand", &AActor::ClientConsoleCommand)
        .def("Behavior_ClientConsoleCommand", &AActor::Behavior_ClientConsoleCommand)
        .def("Behavior_ConsoleCommand", &AActor::Behavior_ConsoleCommand)
        .def("Behavior_StopSound", &AActor::Behavior_StopSound)
        .def("Behavior_PlaySoundForListener", &AActor::Behavior_PlaySoundForListener)
        .def("Behavior_PlaySound", &AActor::Behavior_PlaySound)
        .def("Behavior_PostAkEvent", &AActor::Behavior_PostAkEvent)
        .def("Behavior_Destroy", &AActor::Behavior_Destroy)
        .def("ClearResourcePoolReference", &AActor::ClearResourcePoolReference)
        .def("GetResourcePoolCurrentValueOrDefault", &AActor::GetResourcePoolCurrentValueOrDefault)
        .def("IsResourcePoolValid", &AActor::IsResourcePoolValid)
        .def("GetCanTargetCheat", &AActor::GetCanTargetCheat)
        .def("GetCanTarget", &AActor::GetCanTarget)
        .def("SetCanTargetCheat", &AActor::SetCanTargetCheat)
        .def("CanTarget", &AActor::CanTarget)
        .def("SetCanTarget", &AActor::SetCanTarget)
        .def("WorldBodyAttachComponent", &AActor::WorldBodyAttachComponent)
        .def("WorldBodyAttachActor", &AActor::WorldBodyAttachActor)
        .def("WorldBodyAttachTo", &AActor::WorldBodyAttachTo)
        .def("GetWorldBodyAttachmentBase", &AActor::GetWorldBodyAttachmentBase, py::return_value_policy::reference)
        .def("GetWorldBodyAttachmentBoneForComponent", &AActor::GetWorldBodyAttachmentBoneForComponent)
        .def("GetWorldBodyAttachmentLocationAndRotation", &AActor::GetWorldBodyAttachmentLocationAndRotation)
        .def("GetWorldBodyAttachmentRotation", &AActor::GetWorldBodyAttachmentRotation)
        .def("GetWorldBodyAttachmentLocation", &AActor::GetWorldBodyAttachmentLocation)
        .def("GetWorldBodyVelocity", &AActor::GetWorldBodyVelocity)
        .def("GetWorldBodyRotation", &AActor::GetWorldBodyRotation)
        .def("GetWorldBodyLocation", &AActor::GetWorldBodyLocation)
        .def("GetSpawnOwner", &AActor::GetSpawnOwner, py::return_value_policy::reference)
        .def("GetActorMetrics", &AActor::GetActorMetrics)
        .def("ShouldBeHiddenBySHOW_NavigationNodes", &AActor::ShouldBeHiddenBySHOW_NavigationNodes)
        .def("WillOverlap", [](AActor &self , struct FVector PosA, struct FVector VelA, struct FVector PosB, struct FVector VelB, float StepSize, float Radius) { float* pyTime = (float*)malloc(sizeof(float)) ;  bool ret =  self.WillOverlap(PosA, VelA, PosB, VelB, StepSize, Radius, pyTime); return py::make_tuple(ret, *pyTime); })
        .def("eventReplicationEnded", &AActor::eventReplicationEnded)
        .def("SetDebugBeaconState", &AActor::SetDebugBeaconState)
        .def("eventPostDemoRewind", &AActor::eventPostDemoRewind)
        .def("eventAnimTreeUpdated", &AActor::eventAnimTreeUpdated)
        .def("SupportsKismetModification", &AActor::SupportsKismetModification)
        .def("eventTrailsNotifyEnd", &AActor::eventTrailsNotifyEnd)
        .def("eventTrailsNotifyTick", &AActor::eventTrailsNotifyTick)
        .def("eventTrailsNotify", &AActor::eventTrailsNotify)
        .def("eventCreateForceField", &AActor::eventCreateForceField)
        .def("eventPlayParticleEffect", &AActor::eventPlayParticleEffect)
        .def("IsInPersistentLevel", &AActor::IsInPersistentLevel)
        .def("eventOnRigidBodySpringOverextension", &AActor::eventOnRigidBodySpringOverextension)
        .def("GetPackageGuid", &AActor::GetPackageGuid)
        .def("eventPostInitAnimTree", &AActor::eventPostInitAnimTree)
        .def("eventTraceTouch", &AActor::eventTraceTouch)
        .def("eventRootMotionExtracted", &AActor::eventRootMotionExtracted)
        .def("eventRootMotionProcessed", &AActor::eventRootMotionProcessed)
        .def("eventRootMotionModeChanged", &AActor::eventRootMotionModeChanged)
        .def("eventPostRenderFor", &AActor::eventPostRenderFor)
        .def("NativePostRenderFor", &AActor::NativePostRenderFor)
        .def("SetHUDLocation", &AActor::SetHUDLocation)
        .def("eventOnRanOver", &AActor::eventOnRanOver)
        .def("eventRigidBodyCollision", &AActor::eventRigidBodyCollision)
        .def("eventInterpolationChanged", &AActor::eventInterpolationChanged)
        .def("eventInterpolationFinished", &AActor::eventInterpolationFinished)
        .def("eventInterpolationStarted", &AActor::eventInterpolationStarted)
        .def("eventSpawnedByKismet", &AActor::eventSpawnedByKismet)
        .def("GetTargetLocation", &AActor::GetTargetLocation)
        .def("FindGoodEndView", &AActor::FindGoodEndView)
        .def("NotifyLocalPlayerTeamReceived", &AActor::NotifyLocalPlayerTeamReceived)
        .def("eventScriptGetTeamNum", &AActor::eventScriptGetTeamNum)
        .def("GetTeamNum", &AActor::GetTeamNum)
        .def("PawnBaseDied", &AActor::PawnBaseDied)
        .def("IsPlayerOwned", &AActor::IsPlayerOwned)
        .def("eventGetSpotOthersShouldLookAt", &AActor::eventGetSpotOthersShouldLookAt)
        .def("GetActorEyesViewPoint", &AActor::GetActorEyesViewPoint)
        .def("eventGetActorFaceFXAsset", &AActor::eventGetActorFaceFXAsset, py::return_value_policy::reference)
        .def("CanActorPlayFaceFXAnim", &AActor::CanActorPlayFaceFXAnim)
        .def("IsActorPlayingFaceFXAnim", &AActor::IsActorPlayingFaceFXAnim)
        .def("eventTickSkelControl", &AActor::eventTickSkelControl)
        .def("eventSetSkelControlScale", &AActor::eventSetSkelControlScale)
        .def("eventSetMorphWeight", &AActor::eventSetMorphWeight)
        .def("eventStopActorFaceFXAnim", &AActor::eventStopActorFaceFXAnim)
        .def("eventPlayActorFaceFXAnim", &AActor::eventPlayActorFaceFXAnim)
        .def("eventFinishAnimControl", &AActor::eventFinishAnimControl)
        .def("LastMatineeAnimFinished", &AActor::LastMatineeAnimFinished)
        .def("eventSetAnimPosition", &AActor::eventSetAnimPosition)
        .def("eventBeginAnimControl", &AActor::eventBeginAnimControl)
        .def("eventOnAnimPlay", &AActor::eventOnAnimPlay)
        .def("eventOnAnimEnd", &AActor::eventOnAnimEnd)
        .def("DoKismetAttachment", &AActor::DoKismetAttachment)
        .def("OnAttachToActor", &AActor::OnAttachToActor)
        .def("OnToggleHidden", &AActor::OnToggleHidden)
        .def("OnChangeCollision", &AActor::OnChangeCollision)
        .def("OnSetPhysics", &AActor::OnSetPhysics)
        .def("OnSetBlockRigidBody", &AActor::OnSetBlockRigidBody)
        .def("OnSetVelocity", &AActor::OnSetVelocity)
        .def("OnTeleport", &AActor::OnTeleport)
        .def("eventModifyHealth", &AActor::eventModifyHealth)
        .def("OnModifyHealth", &AActor::OnModifyHealth)
        .def("PrestreamTextures", &AActor::PrestreamTextures)
        .def("eventShutDown", &AActor::eventShutDown)
        .def("SetNetUpdateTime", &AActor::SetNetUpdateTime)
        .def("eventForceNetRelevant", &AActor::eventForceNetRelevant)
        .def("OnDestroy", &AActor::OnDestroy)
        .def("ClearLatentAction", &AActor::ClearLatentAction)
        .def("FindEventsOfClass", &AActor::FindEventsOfClass)
        .def("ActivateEventClass", &AActor::ActivateEventClass)
        .def("TriggerGlobalEventClass", &AActor::TriggerGlobalEventClass)
        .def("eventReceivedNewEvent", &AActor::eventReceivedNewEvent)
        .def("TriggerEventClass", &AActor::TriggerEventClass)
        .def("eventDebugMessagePlayer", &AActor::eventDebugMessagePlayer)
        .def("ImpactEffectIsRelevant", &AActor::ImpactEffectIsRelevant)
        .def("ActorEffectIsRelevant", &AActor::ActorEffectIsRelevant)
        .def("EffectIsRelevant", &AActor::EffectIsRelevant)
        .def("GetTraceImpact", &AActor::GetTraceImpact, py::return_value_policy::reference)
        .def("GetUntouchImpact", &AActor::GetUntouchImpact, py::return_value_policy::reference)
        .def("GetTouchImpact", &AActor::GetTouchImpact, py::return_value_policy::reference)
        .def("ApplyFluidSurfaceImpact", &AActor::ApplyFluidSurfaceImpact)
        .def("CanSplash", &AActor::CanSplash)
        .def("PlayTeleportEffect", &AActor::PlayTeleportEffect)
        .def("eventReset", &AActor::eventReset)
        .def("eventGetFaceFXAudioComponent", &AActor::eventGetFaceFXAudioComponent, py::return_value_policy::reference)
        .def("eventModifyHearSoundComponent", &AActor::eventModifyHearSoundComponent)
        .def("GetPhysicsName", &AActor::GetPhysicsName)
        .def("SwitchDisplayDebugPage", &AActor::SwitchDisplayDebugPage)
        .def("GetDebugName", &AActor::GetDebugName)
        .def("MatchStarting", &AActor::MatchStarting)
        .def("GetLocalString", &AActor::GetLocalString)
        .def("ReplaceHTMLMarkup", &AActor::ReplaceHTMLMarkup)
        .def("ReplaceText", &AActor::ReplaceText)
        .def("CheckForOwnedInstanceData", &AActor::CheckForOwnedInstanceData)
        .def("GetHumanReadableName", &AActor::GetHumanReadableName)
        .def("GetItemName", &AActor::GetItemName)
        .def("CalcCamera", [](AActor &self , float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot) { float* pyout_FOV = (float*)malloc(sizeof(float)) ;  bool ret =  self.CalcCamera(fDeltaTime, out_CamLoc, out_CamRot, pyout_FOV); return py::make_tuple(ret, *pyout_FOV); })
        .def("eventEndViewTarget", &AActor::eventEndViewTarget)
        .def("eventBecomeViewTarget", &AActor::eventBecomeViewTarget)
        .def("CheckForErrors", &AActor::CheckForErrors)
        .def("eventDebugFreezeGame", &AActor::eventDebugFreezeGame)
        .def("GetGravityZ", &AActor::GetGravityZ)
        .def("CheckHitInfo", &AActor::CheckHitInfo)
        .def("TakeRadiusDamage", &AActor::TakeRadiusDamage)
        .def("eventHealDamage", &AActor::eventHealDamage)
        .def("eventTakeDamage", &AActor::eventTakeDamage)
        .def("ActorTakeDamageInner", &AActor::ActorTakeDamageInner)
        .def("GetPipelineImpactDefinition", &AActor::GetPipelineImpactDefinition, py::return_value_policy::reference)
        .def("GetPipelineDamageType", &AActor::GetPipelineDamageType, py::return_value_policy::reference)
        .def("ReleaseDamagePipeline", &AActor::ReleaseDamagePipeline)
        .def("GetDamagePipeline", &AActor::GetDamagePipeline, py::return_value_policy::reference)
        .def("KilledBy", &AActor::KilledBy)
        .def("HurtRadius", &AActor::HurtRadius)
        .def("CanWorldGeometryBecomeDynamic", &AActor::CanWorldGeometryBecomeDynamic)
        .def("StopsProjectile", &AActor::StopsProjectile)
        .def("eventNotifySkelControlBeyondLimit", &AActor::eventNotifySkelControlBeyondLimit)
        .def("eventConstraintBrokenNotify", &AActor::eventConstraintBrokenNotify)
        .def("eventSetInitialState", &AActor::eventSetInitialState)
        .def("eventPostBeginPlay", &AActor::eventPostBeginPlay)
        .def("eventBroadcastLocalizedTeamMessage", &AActor::eventBroadcastLocalizedTeamMessage)
        .def("eventBroadcastLocalizedMessage", &AActor::eventBroadcastLocalizedMessage)
        .def("eventPreBeginPlay", &AActor::eventPreBeginPlay)
		.def("VisibleDamageableActors", [](AActor &self , class UClass* BaseClass, float Radius, struct FVector Loc, unsigned long bIgnoreHidden, struct FVector Extent, unsigned long bTraceActors, class UClass* InterfaceClass, unsigned long bSkipTraceTest, class AActor* IgnoreActor, struct FTraceHitInfo* HitInfo) { class AActor** pyActor = 0 ;   self.VisibleDamageableActors(BaseClass, Radius, Loc, bIgnoreHidden, Extent, bTraceActors, InterfaceClass, bSkipTraceTest, IgnoreActor, pyActor, HitInfo); return py::make_tuple(*pyActor); })
        .def("GetALocalPlayerController", &AActor::GetALocalPlayerController, py::return_value_policy::reference)
        .def("LocalPlayerControllers", [](AActor &self , class UClass* BaseClass) { class APlayerController** pyPC = 0 ;   self.LocalPlayerControllers(BaseClass, pyPC); return py::make_tuple(*pyPC); })
        .def("AllOwnedComponents", [](AActor &self , class UClass* BaseClass) { class UActorComponent** pyOutComponent = 0 ;   self.AllOwnedComponents(BaseClass, pyOutComponent); return py::make_tuple(*pyOutComponent); })
        .def("ComponentList", [](AActor &self , class UClass* BaseClass) { class UActorComponent** pyout_Component = 0 ;   self.ComponentList(BaseClass, pyout_Component); return py::make_tuple(*pyout_Component); })
        .def("OverlappingActors", [](AActor &self , class UClass* BaseClass, float Radius, struct FVector Loc, unsigned long bIgnoreHidden) { class AActor** pyout_Actor = 0 ;   self.OverlappingActors(BaseClass, Radius, Loc, bIgnoreHidden, pyout_Actor); return py::make_tuple(*pyout_Actor); })
        .def("CollidingActors", [](AActor &self , class UClass* BaseClass, float Radius, struct FVector Loc, unsigned long bUseOverlapCheck, class UClass* InterfaceClass, struct FTraceHitInfo* HitInfo) { class AActor** pyActor = 0 ;   self.CollidingActors(BaseClass, Radius, Loc, bUseOverlapCheck, InterfaceClass, pyActor, HitInfo); return py::make_tuple(*pyActor); })
        .def("VisibleCollidingActors", [](AActor &self , class UClass* BaseClass, float Radius, struct FVector Loc, unsigned long bIgnoreHidden, struct FVector Extent, unsigned long bTraceActors, class UClass* InterfaceClass, unsigned long bSkipTraceTest, struct FTraceHitInfo* HitInfo) { class AActor** pyActor = 0 ;   self.VisibleCollidingActors(BaseClass, Radius, Loc, bIgnoreHidden, Extent, bTraceActors, InterfaceClass, bSkipTraceTest, pyActor, HitInfo); return py::make_tuple(*pyActor); })
        .def("VisibleActors", [](AActor &self , class UClass* BaseClass, float Radius, struct FVector Loc) { class AActor** pyActor = 0 ;   self.VisibleActors(BaseClass, Radius, Loc, pyActor); return py::make_tuple(*pyActor); })
        .def("TraceActors", [](AActor &self , class UClass* BaseClass, struct FVector End, struct FVector Start, struct FVector Extent, int ExtraTraceFlags, struct FVector* HitLoc, struct FVector* HitNorm, struct FTraceHitInfo* HitInfo) { class AActor** pyActor = 0 ;   self.TraceActors(BaseClass, End, Start, Extent, ExtraTraceFlags, pyActor, HitLoc, HitNorm, HitInfo); return py::make_tuple(*pyActor); })
        .def("TouchingActors", [](AActor &self , class UClass* BaseClass) { class AActor** pyActor = 0 ;   self.TouchingActors(BaseClass, pyActor); return py::make_tuple(*pyActor); })
        .def("BasedActors", [](AActor &self , class UClass* BaseClass) { class AActor** pyActor = 0 ;   self.BasedActors(BaseClass, pyActor); return py::make_tuple(*pyActor); })
        .def("ChildActors", [](AActor &self , class UClass* BaseClass) { class AActor** pyActor = 0 ;   self.ChildActors(BaseClass, pyActor); return py::make_tuple(*pyActor); })
        .def("DynamicActors", [](AActor &self , class UClass* BaseClass, class UClass* InterfaceClass) { class AActor** pyActor = 0 ;   self.DynamicActors(BaseClass, InterfaceClass, pyActor); return py::make_tuple(*pyActor); })
        .def("AllActors", [](AActor &self , class UClass* BaseClass, class UClass* InterfaceClass) { class AActor** pyActor = 0 ;   self.AllActors(BaseClass, InterfaceClass, pyActor); return py::make_tuple(*pyActor); })
        .def("GetURLMap", &AActor::GetURLMap)
        .def("GetDestination", &AActor::GetDestination)
        .def("CalculateMinSpeedTrajectory", &AActor::CalculateMinSpeedTrajectory)
        .def("SuggestTossVelocity", &AActor::SuggestTossVelocity)
        .def("PlayerCanSeeMe", &AActor::PlayerCanSeeMe)
        .def("MakeNoiseAt", &AActor::MakeNoiseAt)
        .def("MakeNoise", &AActor::MakeNoise)
        .def("PostAkTriggerObject", &AActor::PostAkTriggerObject)
        .def("SetAkSwitchObject", &AActor::SetAkSwitchObject)
        .def("SetRTPCObjectValue", &AActor::SetRTPCObjectValue)
        .def("PostAkEvent", &AActor::PostAkEvent)
        .def("PlaySoundBase", &AActor::PlaySoundBase)
        .def("OnAkEventCompleted", &AActor::OnAkEventCompleted)
        .def("PlayAkEvent", &AActor::PlayAkEvent)
        .def("StopSound", &AActor::StopSound)
        .def("PlaySound", &AActor::PlaySound)
        .def("CreateAudioComponent", &AActor::CreateAudioComponent, py::return_value_policy::reference)
        .def("ResetTimerTimeDilation", &AActor::ResetTimerTimeDilation)
        .def("ModifyTimerTimeDilation", &AActor::ModifyTimerTimeDilation)
        .def("GetRemainingTimeForTimer", &AActor::GetRemainingTimeForTimer)
        .def("GetTimerRate", &AActor::GetTimerRate)
        .def("GetTimerCount", &AActor::GetTimerCount)
        .def("IsTimerActive", &AActor::IsTimerActive)
        .def("PauseTimer", &AActor::PauseTimer)
        .def("ClearAllTimers", &AActor::ClearAllTimers)
        .def("ClearTimer", &AActor::ClearTimer)
        .def("SetTimer", &AActor::SetTimer)
        .def("eventTornOff", &AActor::eventTornOff)
        .def("Destroy", &AActor::Destroy)
        .def("SpawnForMap", &AActor::SpawnForMap, py::return_value_policy::reference)
        .def("Spawn", &AActor::Spawn, py::return_value_policy::reference)
        .def("IsBlockedBy", &AActor::IsBlockedBy)
        .def("GetBoundingCylinder", [](AActor &self ) { float* pyCollisionRadius = (float*)malloc(sizeof(float)) ; float* pyCollisionHeight = (float*)malloc(sizeof(float)) ;   self.GetBoundingCylinder(pyCollisionRadius, pyCollisionHeight); return py::make_tuple(*pyCollisionRadius, *pyCollisionHeight); })
        .def("GetComponentsBoundingBox", &AActor::GetComponentsBoundingBox)
        .def("IsOverlapping", &AActor::IsOverlapping)
        .def("ContainsPoint", &AActor::ContainsPoint)
        .def("FindSpot", &AActor::FindSpot)
        .def("TraceAllPhysicsAssetInteractions", &AActor::TraceAllPhysicsAssetInteractions)
        .def("FastTrace", &AActor::FastTrace)
        .def("PointCheckComponent", &AActor::PointCheckComponent)
        .def("TraceComponent", &AActor::TraceComponent)
        .def("Trace", &AActor::Trace, py::return_value_policy::reference)
        .def("VolumeBasedDestroy", &AActor::VolumeBasedDestroy)
        .def("eventOutsideWorldBounds", &AActor::eventOutsideWorldBounds)
        .def("eventFellOutOfWorld", &AActor::eventFellOutOfWorld)
        .def("UsedBy", &AActor::UsedBy)
        .def("eventOverRotated", &AActor::eventOverRotated)
        .def("ClampRotation", &AActor::ClampRotation)
        .def("eventOnSleepRBPhysics", &AActor::eventOnSleepRBPhysics)
        .def("eventOnWakeRBPhysics", &AActor::eventOnWakeRBPhysics)
        .def("eventRanInto", &AActor::eventRanInto)
        .def("eventEncroachedBy", &AActor::eventEncroachedBy)
        .def("eventEncroachingOn", &AActor::eventEncroachingOn)
        .def("eventCollisionChanged", &AActor::eventCollisionChanged)
        .def("eventSpecialHandling", &AActor::eventSpecialHandling, py::return_value_policy::reference)
        .def("eventDetach", &AActor::eventDetach)
        .def("eventAttach", &AActor::eventAttach)
        .def("eventBaseChange", &AActor::eventBaseChange)
        .def("eventBump", &AActor::eventBump)
        .def("eventUnTouch", &AActor::eventUnTouch)
        .def("eventPostTouch", &AActor::eventPostTouch)
        .def("eventTouch", &AActor::eventTouch)
        .def("eventPhysicsVolumeChange", &AActor::eventPhysicsVolumeChange)
        .def("eventLanded", &AActor::eventLanded)
        .def("eventFalling", &AActor::eventFalling)
        .def("eventHitWall", &AActor::eventHitWall)
        .def("eventTimer", &AActor::eventTimer)
        .def("eventTick", &AActor::eventTick)
        .def("eventLostChild", &AActor::eventLostChild)
        .def("eventGainedChild", &AActor::eventGainedChild)
        .def("eventDestroyed", &AActor::eventDestroyed)
        .def("SetTickIsDisabled", &AActor::SetTickIsDisabled)
        .def("SetTickGroup", &AActor::SetTickGroup)
        .def("ReattachComponent", &AActor::ReattachComponent)
        .def("DetachComponent", &AActor::DetachComponent)
        .def("AttachComponent", &AActor::AttachComponent)
        .def("UnClock", [](AActor &self ) { float* pyTime = (float*)malloc(sizeof(float)) ;   self.UnClock(pyTime); return py::make_tuple(*pyTime); })
        .def("Clock", [](AActor &self ) { float* pyTime = (float*)malloc(sizeof(float)) ;   self.Clock(pyTime); return py::make_tuple(*pyTime); })
        .def("SetPhysics", &AActor::SetPhysics)
        .def("SetOnlyOwnerSee", &AActor::SetOnlyOwnerSee)
        .def("SetHidden", &AActor::SetHidden)
        .def("ChartData", &AActor::ChartData)
        .def("FlushDebugStrings", &AActor::FlushDebugStrings)
        .def("DrawDebugFrustrum", &AActor::DrawDebugFrustrum)
        .def("DrawDebugString", &AActor::DrawDebugString)
        .def("DrawDebugCone", &AActor::DrawDebugCone)
        .def("DrawDebugCylinder", &AActor::DrawDebugCylinder)
        .def("DrawDebugSphere", &AActor::DrawDebugSphere)
        .def("DrawDebugCoordinateSystem", &AActor::DrawDebugCoordinateSystem)
        .def("DrawDebugStar", &AActor::DrawDebugStar)
        .def("DrawDebugBox", &AActor::DrawDebugBox)
        .def("DrawDebugPoint", &AActor::DrawDebugPoint)
        .def("DrawDebugLine", &AActor::DrawDebugLine)
        .def("FlushPersistentDebugLines", &AActor::FlushPersistentDebugLines)
        .def("GetBasedPosition", &AActor::GetBasedPosition)
        .def("SetBasedPosition", &AActor::SetBasedPosition)
        .def("BP2Vect", &AActor::BP2Vect)
        .def("Vect2BP", &AActor::Vect2BP)
        .def("SetForcedInitialReplicatedProperty", &AActor::SetForcedInitialReplicatedProperty)
        .def("eventReplicatedEvent", &AActor::eventReplicatedEvent)
        .def("GetAggregateBaseVelocity", &AActor::GetAggregateBaseVelocity)
        .def("IsOwnedBy", &AActor::IsOwnedBy)
        .def("GetBaseMost", &AActor::GetBaseMost, py::return_value_policy::reference)
        .def("IsBasedOn", &AActor::IsBasedOn)
        .def("SearchForBaseBelow", [](AActor &self , float HeightBelow, struct FVector* HitNormal) { class AActor** pyNewBase = 0 ;   self.SearchForBaseBelow(HeightBelow, pyNewBase, HitNormal); return py::make_tuple(*pyNewBase); })
        .def("FindBase", &AActor::FindBase)
        .def("SetOwner", &AActor::SetOwner)
        .def("SetBase", &AActor::SetBase)
        .def("GetTerminalVelocity", &AActor::GetTerminalVelocity)
        .def("AutonomousPhysics", &AActor::AutonomousPhysics)
        .def("MoveSmooth", &AActor::MoveSmooth)
        .def("fixedTurn", &AActor::fixedTurn)
        .def("SetShadowParentOnAllAttachedComponents", &AActor::SetShadowParentOnAllAttachedComponents)
        .def("SetHardAttach", &AActor::SetHardAttach)
        .def("SetRelativeLocation", &AActor::SetRelativeLocation)
        .def("SetRelativeRotation", &AActor::SetRelativeRotation)
        .def("SetZone", &AActor::SetZone)
        .def("MovingWhichWay", [](AActor &self ) { float* pyAmount = (float*)malloc(sizeof(float)) ;  unsigned char ret =  self.MovingWhichWay(pyAmount); return py::make_tuple(ret, *pyAmount); })
        .def("SetRotation", &AActor::SetRotation)
        .def("SetLocation", &AActor::SetLocation)
        .def("Move", &AActor::Move)
        .def("SetCollisionAndCollisionType", &AActor::SetCollisionAndCollisionType)
        .def("SetDrawScale3D", &AActor::SetDrawScale3D)
        .def("SetDrawScale", &AActor::SetDrawScale)
        .def("SetCollisionType", &AActor::SetCollisionType)
        .def("SetCollisionSize", &AActor::SetCollisionSize)
        .def("SetCollision", &AActor::SetCollision)
        .def("Sleep", &AActor::Sleep)
        .def("ConsoleCommand", &AActor::ConsoleCommand)
        .def("ForceUpdateComponents", &AActor::ForceUpdateComponents)
          ;
}