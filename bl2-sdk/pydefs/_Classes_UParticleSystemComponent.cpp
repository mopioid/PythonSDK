#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleSystemComponent(py::module &m)
{
    py::class_< UParticleSystemComponent,  UPrimitiveComponent   >(m, "UParticleSystemComponent")
		.def_static("StaticClass", &UParticleSystemComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Template", &UParticleSystemComponent::Template)
        .def_readwrite("LightEnvironmentClass", &UParticleSystemComponent::LightEnvironmentClass)
        .def_readwrite("LightEnvironmentSharedInstigator", &UParticleSystemComponent::LightEnvironmentSharedInstigator)
        .def_readwrite("MaxLightEnvironmentPooledReuses", &UParticleSystemComponent::MaxLightEnvironmentPooledReuses)
        .def_readwrite("EmitterInstances", &UParticleSystemComponent::EmitterInstances)
        .def_readwrite("SMComponents", &UParticleSystemComponent::SMComponents)
        .def_readwrite("SMMaterialInterfaces", &UParticleSystemComponent::SMMaterialInterfaces)
        .def_readwrite("SkelMeshComponents", &UParticleSystemComponent::SkelMeshComponents)
        .def_readwrite("ViewMBInfoArray", &UParticleSystemComponent::ViewMBInfoArray)
        .def_readwrite("InstanceParameters", &UParticleSystemComponent::InstanceParameters)
        .def_readwrite("OldPosition", &UParticleSystemComponent::OldPosition)
        .def_readwrite("PartSysVelocity", &UParticleSystemComponent::PartSysVelocity)
        .def_readwrite("WarmupTime", &UParticleSystemComponent::WarmupTime)
        .def_readwrite("LODLevel", &UParticleSystemComponent::LODLevel)
        .def_readwrite("SecondsBeforeInactive", &UParticleSystemComponent::SecondsBeforeInactive)
        .def_readwrite("TimeSinceLastForceUpdateTransform", &UParticleSystemComponent::TimeSinceLastForceUpdateTransform)
        .def_readwrite("MaxTimeBeforeForceUpdateTransform", &UParticleSystemComponent::MaxTimeBeforeForceUpdateTransform)
        .def_readwrite("AccumTickTime", &UParticleSystemComponent::AccumTickTime)
        .def_readwrite("LODMethod", &UParticleSystemComponent::LODMethod)
        .def_readwrite("ReplayState", &UParticleSystemComponent::ReplayState)
        .def_readwrite("CachedViewRelevanceFlags", &UParticleSystemComponent::CachedViewRelevanceFlags)
        .def_readwrite("ReplayClips", &UParticleSystemComponent::ReplayClips)
        .def_readwrite("ReplayClipIDNumber", &UParticleSystemComponent::ReplayClipIDNumber)
        .def_readwrite("ReplayFrameIndex", &UParticleSystemComponent::ReplayFrameIndex)
        .def_readwrite("AccumLODDistanceCheckTime", &UParticleSystemComponent::AccumLODDistanceCheckTime)
        .def_readwrite("SpawnEvents", &UParticleSystemComponent::SpawnEvents)
        .def_readwrite("DeathEvents", &UParticleSystemComponent::DeathEvents)
        .def_readwrite("CollisionEvents", &UParticleSystemComponent::CollisionEvents)
        .def_readwrite("TraceEvents", &UParticleSystemComponent::TraceEvents)
        .def_readwrite("KismetEvents", &UParticleSystemComponent::KismetEvents)
        .def_readwrite("ReleaseResourcesFence", &UParticleSystemComponent::ReleaseResourcesFence)
        .def_readwrite("CustomTimeDilation", &UParticleSystemComponent::CustomTimeDilation)
        .def_readwrite("EmitterDelay", &UParticleSystemComponent::EmitterDelay)
        .def_readwrite("AudioEventDelay", &UParticleSystemComponent::AudioEventDelay)
        .def_readwrite("LoopingAkPlayingInfo", &UParticleSystemComponent::LoopingAkPlayingInfo)
        .def("Behavior_ChangeParticleSystemActiveState", &UParticleSystemComponent::Behavior_ChangeParticleSystemActiveState)
        .def("Behavior_SetVectorParameterValue", [](UParticleSystemComponent &self , struct FName* ParameterName, struct FVector* Value) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;   self.Behavior_SetVectorParameterValue(pySectionIndex, ParameterName, Value); return py::make_tuple(*pySectionIndex); })
        .def("Behavior_SetColorParameterValue", [](UParticleSystemComponent &self , struct FName* ParameterName, struct FLinearColor* Value) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;   self.Behavior_SetColorParameterValue(pySectionIndex, ParameterName, Value); return py::make_tuple(*pySectionIndex); })
        .def("Behavior_SetObjectParameterValue", [](UParticleSystemComponent &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; class UObject** pyValue = 0 ;   self.Behavior_SetObjectParameterValue(pySectionIndex, ParameterName, pyValue); return py::make_tuple(*pySectionIndex, *pyValue); })
        .def("Behavior_SetFloatParameterValue", [](UParticleSystemComponent &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; float* pyValue = (float*)malloc(sizeof(float)) ;   self.Behavior_SetFloatParameterValue(pySectionIndex, ParameterName, pyValue); return py::make_tuple(*pySectionIndex, *pyValue); })
        .def("Behavior_GetObjectParameterValue", [](UParticleSystemComponent &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; class UObject** pyValue = 0 ;  bool ret =  self.Behavior_GetObjectParameterValue(pySectionIndex, ParameterName, pyValue); return py::make_tuple(ret, *pySectionIndex, *pyValue); })
        .def("Behavior_GetVectorParameterValue", [](UParticleSystemComponent &self , struct FName* ParameterName, struct FVector* Value) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;  bool ret =  self.Behavior_GetVectorParameterValue(pySectionIndex, ParameterName, Value); return py::make_tuple(ret, *pySectionIndex); })
        .def("Behavior_GetColorParameterValue", [](UParticleSystemComponent &self , struct FName* ParameterName, struct FLinearColor* Value) { int* pySectionIndex = (int*)malloc(sizeof(int)) ;  bool ret =  self.Behavior_GetColorParameterValue(pySectionIndex, ParameterName, Value); return py::make_tuple(ret, *pySectionIndex); })
        .def("Behavior_GetFloatParameterValue", [](UParticleSystemComponent &self , struct FName* ParameterName) { int* pySectionIndex = (int*)malloc(sizeof(int)) ; float* pyValue = (float*)malloc(sizeof(float)) ;  bool ret =  self.Behavior_GetFloatParameterValue(pySectionIndex, ParameterName, pyValue); return py::make_tuple(ret, *pySectionIndex, *pyValue); })
        .def("SetStopSpawning", &UParticleSystemComponent::SetStopSpawning)
        .def("ResetToDefaults", &UParticleSystemComponent::ResetToDefaults)
        .def("SetActive", &UParticleSystemComponent::SetActive)
        .def("ClearParameter", &UParticleSystemComponent::ClearParameter)
        .def("GetMaterialParameter", [](UParticleSystemComponent &self , struct FName InName) { class UMaterialInterface** pyOutMaterial = 0 ;  bool ret =  self.GetMaterialParameter(InName, pyOutMaterial); return py::make_tuple(ret, *pyOutMaterial); })
        .def("GetActorParameter", [](UParticleSystemComponent &self , struct FName InName) { class AActor** pyOutActor = 0 ;  bool ret =  self.GetActorParameter(InName, pyOutActor); return py::make_tuple(ret, *pyOutActor); })
        .def("GetColorParameter", &UParticleSystemComponent::GetColorParameter)
        .def("GetVectorParameter", &UParticleSystemComponent::GetVectorParameter)
        .def("GetFloatParameter", [](UParticleSystemComponent &self , struct FName InName) { float* pyOutFloat = (float*)malloc(sizeof(float)) ;  bool ret =  self.GetFloatParameter(InName, pyOutFloat); return py::make_tuple(ret, *pyOutFloat); })
        .def("SetMaterialParameter", &UParticleSystemComponent::SetMaterialParameter)
        .def("SetActorParameter", &UParticleSystemComponent::SetActorParameter)
        .def("SetColorParameter", &UParticleSystemComponent::SetColorParameter)
        .def("SetVectorRandParameter", &UParticleSystemComponent::SetVectorRandParameter)
        .def("SetVectorParameter", &UParticleSystemComponent::SetVectorParameter)
        .def("SetFloatRandParameter", &UParticleSystemComponent::SetFloatRandParameter)
        .def("SetFloatParameter", &UParticleSystemComponent::SetFloatParameter)
        .def("GetEditorLODLevel", &UParticleSystemComponent::GetEditorLODLevel)
        .def("GetLODLevel", &UParticleSystemComponent::GetLODLevel)
        .def("SetEditorLODLevel", &UParticleSystemComponent::SetEditorLODLevel)
        .def("SetLODLevel", &UParticleSystemComponent::SetLODLevel)
        .def("SystemHasCompleted", &UParticleSystemComponent::SystemHasCompleted)
        .def("GetMaxLifespan", &UParticleSystemComponent::GetMaxLifespan)
        .def("DetermineLODLevelForLocation", &UParticleSystemComponent::DetermineLODLevelForLocation)
        .def("SetBeamTargetStrength", &UParticleSystemComponent::SetBeamTargetStrength)
        .def("SetBeamTargetTangent", &UParticleSystemComponent::SetBeamTargetTangent)
        .def("SetBeamTargetPoint", &UParticleSystemComponent::SetBeamTargetPoint)
        .def("SetBeamSourceStrength", &UParticleSystemComponent::SetBeamSourceStrength)
        .def("SetBeamSourceTangent", &UParticleSystemComponent::SetBeamSourceTangent)
        .def("SetBeamSourcePoint", &UParticleSystemComponent::SetBeamSourcePoint)
        .def("SetBeamDistance", &UParticleSystemComponent::SetBeamDistance)
        .def("SetBeamEndPoint", &UParticleSystemComponent::SetBeamEndPoint)
        .def("SetBeamTessellationFactor", &UParticleSystemComponent::SetBeamTessellationFactor)
        .def("SetBeamType", &UParticleSystemComponent::SetBeamType)
        .def("RewindEmitterInstances", &UParticleSystemComponent::RewindEmitterInstances)
        .def("RewindEmitterInstance", &UParticleSystemComponent::RewindEmitterInstance)
        .def("SetKillOnCompleted", &UParticleSystemComponent::SetKillOnCompleted)
        .def("SetKillOnDeactivate", &UParticleSystemComponent::SetKillOnDeactivate)
        .def("GetSkipBoundsUpdate", &UParticleSystemComponent::GetSkipBoundsUpdate)
        .def("SetSkipBoundsUpdate", &UParticleSystemComponent::SetSkipBoundsUpdate)
        .def("GetSkipUpdateDynamicDataDuringTick", &UParticleSystemComponent::GetSkipUpdateDynamicDataDuringTick)
        .def("SetSkipUpdateDynamicDataDuringTick", &UParticleSystemComponent::SetSkipUpdateDynamicDataDuringTick)
        .def("KillParticlesInEmitter", &UParticleSystemComponent::KillParticlesInEmitter)
        .def("KillParticlesForced", &UParticleSystemComponent::KillParticlesForced)
        .def("DeactivateSystem", &UParticleSystemComponent::DeactivateSystem)
        .def("ActivateSystem", &UParticleSystemComponent::ActivateSystem)
        .def("SetTemplate", &UParticleSystemComponent::SetTemplate)
        .def("OnSystemFinished", &UParticleSystemComponent::OnSystemFinished)
          ;
}