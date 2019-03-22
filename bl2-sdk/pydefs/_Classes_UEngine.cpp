#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEngine(py::module &m)
{
    py::class_< UEngine,  USubsystem   >(m, "UEngine")
        .def_readwrite("TinyFont", &UEngine::TinyFont)
        .def_readwrite("TinyFontName", &UEngine::TinyFontName)
        .def_readwrite("SmallFont", &UEngine::SmallFont)
        .def_readwrite("SmallFontName", &UEngine::SmallFontName)
        .def_readwrite("MediumFont", &UEngine::MediumFont)
        .def_readwrite("MediumFontName", &UEngine::MediumFontName)
        .def_readwrite("LargeFont", &UEngine::LargeFont)
        .def_readwrite("LargeFontName", &UEngine::LargeFontName)
        .def_readwrite("NonShipMediumFont", &UEngine::NonShipMediumFont)
        .def_readwrite("NonShipLargeFont", &UEngine::NonShipLargeFont)
        .def_readwrite("SubtitleFont", &UEngine::SubtitleFont)
        .def_readwrite("SubtitleFontName", &UEngine::SubtitleFontName)
        .def_readwrite("GlyphFont", &UEngine::GlyphFont)
        .def_readwrite("GlyphFontName", &UEngine::GlyphFontName)
        .def_readwrite("AdditionalFonts", &UEngine::AdditionalFonts)
        .def_readwrite("AdditionalFontNames", &UEngine::AdditionalFontNames)
        .def_readwrite("ConsoleClass", &UEngine::ConsoleClass)
        .def_readwrite("ConsoleClassName", &UEngine::ConsoleClassName)
        .def_readwrite("GameViewportClientClass", &UEngine::GameViewportClientClass)
        .def_readwrite("GameViewportClientClassName", &UEngine::GameViewportClientClassName)
        .def_readwrite("DataStoreClientClass", &UEngine::DataStoreClientClass)
        .def_readwrite("DataStoreClientClassName", &UEngine::DataStoreClientClassName)
        .def_readwrite("LocalPlayerClass", &UEngine::LocalPlayerClass)
        .def_readwrite("LocalPlayerClassName", &UEngine::LocalPlayerClassName)
        .def_readwrite("DefaultMaterial", &UEngine::DefaultMaterial)
        .def_readwrite("DefaultMaterialName", &UEngine::DefaultMaterialName)
        .def_readwrite("DefaultDecalMaterial", &UEngine::DefaultDecalMaterial)
        .def_readwrite("DefaultDecalMaterialName", &UEngine::DefaultDecalMaterialName)
        .def_readwrite("DefaultTexture", &UEngine::DefaultTexture)
        .def_readwrite("DefaultTextureName", &UEngine::DefaultTextureName)
        .def_readwrite("WireframeMaterial", &UEngine::WireframeMaterial)
        .def_readwrite("WireframeMaterialName", &UEngine::WireframeMaterialName)
        .def_readwrite("EmissiveTexturedMaterial", &UEngine::EmissiveTexturedMaterial)
        .def_readwrite("EmissiveTexturedMaterialName", &UEngine::EmissiveTexturedMaterialName)
        .def_readwrite("GeomMaterial", &UEngine::GeomMaterial)
        .def_readwrite("GeomMaterialName", &UEngine::GeomMaterialName)
        .def_readwrite("DefaultFogVolumeMaterial", &UEngine::DefaultFogVolumeMaterial)
        .def_readwrite("DefaultFogVolumeMaterialName", &UEngine::DefaultFogVolumeMaterialName)
        .def_readwrite("TickMaterial", &UEngine::TickMaterial)
        .def_readwrite("TickMaterialName", &UEngine::TickMaterialName)
        .def_readwrite("CrossMaterial", &UEngine::CrossMaterial)
        .def_readwrite("CrossMaterialName", &UEngine::CrossMaterialName)
        .def_readwrite("LevelColorationLitMaterial", &UEngine::LevelColorationLitMaterial)
        .def_readwrite("LevelColorationLitMaterialName", &UEngine::LevelColorationLitMaterialName)
        .def_readwrite("LevelColorationUnlitMaterial", &UEngine::LevelColorationUnlitMaterial)
        .def_readwrite("LevelColorationUnlitMaterialName", &UEngine::LevelColorationUnlitMaterialName)
        .def_readwrite("LightingTexelDensityMaterial", &UEngine::LightingTexelDensityMaterial)
        .def_readwrite("LightingTexelDensityName", &UEngine::LightingTexelDensityName)
        .def_readwrite("ShadedLevelColorationLitMaterial", &UEngine::ShadedLevelColorationLitMaterial)
        .def_readwrite("ShadedLevelColorationLitMaterialName", &UEngine::ShadedLevelColorationLitMaterialName)
        .def_readwrite("ShadedLevelColorationUnlitMaterial", &UEngine::ShadedLevelColorationUnlitMaterial)
        .def_readwrite("ShadedLevelColorationUnlitMaterialName", &UEngine::ShadedLevelColorationUnlitMaterialName)
        .def_readwrite("RemoveSurfaceMaterial", &UEngine::RemoveSurfaceMaterial)
        .def_readwrite("RemoveSurfaceMaterialName", &UEngine::RemoveSurfaceMaterialName)
        .def_readwrite("VertexColorMaterial", &UEngine::VertexColorMaterial)
        .def_readwrite("VertexColorMaterialName", &UEngine::VertexColorMaterialName)
        .def_readwrite("VertexColorViewModeMaterial_ColorOnly", &UEngine::VertexColorViewModeMaterial_ColorOnly)
        .def_readwrite("VertexColorViewModeMaterialName_ColorOnly", &UEngine::VertexColorViewModeMaterialName_ColorOnly)
        .def_readwrite("VertexColorViewModeMaterial_AlphaAsColor", &UEngine::VertexColorViewModeMaterial_AlphaAsColor)
        .def_readwrite("VertexColorViewModeMaterialName_AlphaAsColor", &UEngine::VertexColorViewModeMaterialName_AlphaAsColor)
        .def_readwrite("VertexColorViewModeMaterial_RedOnly", &UEngine::VertexColorViewModeMaterial_RedOnly)
        .def_readwrite("VertexColorViewModeMaterialName_RedOnly", &UEngine::VertexColorViewModeMaterialName_RedOnly)
        .def_readwrite("VertexColorViewModeMaterial_GreenOnly", &UEngine::VertexColorViewModeMaterial_GreenOnly)
        .def_readwrite("VertexColorViewModeMaterialName_GreenOnly", &UEngine::VertexColorViewModeMaterialName_GreenOnly)
        .def_readwrite("VertexColorViewModeMaterial_BlueOnly", &UEngine::VertexColorViewModeMaterial_BlueOnly)
        .def_readwrite("VertexColorViewModeMaterialName_BlueOnly", &UEngine::VertexColorViewModeMaterialName_BlueOnly)
        .def_readwrite("HeatmapMaterial", &UEngine::HeatmapMaterial)
        .def_readwrite("HeatmapMaterialName", &UEngine::HeatmapMaterialName)
        .def_readwrite("BoneWeightMaterial", &UEngine::BoneWeightMaterial)
        .def_readwrite("BoneWeightMaterialName", &UEngine::BoneWeightMaterialName)
        .def_readwrite("TangentColorMaterial", &UEngine::TangentColorMaterial)
        .def_readwrite("TangentColorMaterialName", &UEngine::TangentColorMaterialName)
        .def_readwrite("FacebookIntegration", &UEngine::FacebookIntegration)
        .def_readwrite("FacebookIntegrationClassName", &UEngine::FacebookIntegrationClassName)
        .def_readwrite("MaxRMSDForCombiningMappings", &UEngine::MaxRMSDForCombiningMappings)
        .def_readwrite("LightingOnlyBrightness", &UEngine::LightingOnlyBrightness)
        .def_readwrite("LightComplexityColors", &UEngine::LightComplexityColors)
        .def_readwrite("ShaderComplexityColors", &UEngine::ShaderComplexityColors)
        .def_readwrite("MaxPixelShaderAdditiveComplexityCount", &UEngine::MaxPixelShaderAdditiveComplexityCount)
        .def_readwrite("MinTextureDensity", &UEngine::MinTextureDensity)
        .def_readwrite("IdealTextureDensity", &UEngine::IdealTextureDensity)
        .def_readwrite("MaxTextureDensity", &UEngine::MaxTextureDensity)
        .def_readwrite("MinLightMapDensity", &UEngine::MinLightMapDensity)
        .def_readwrite("IdealLightMapDensity", &UEngine::IdealLightMapDensity)
        .def_readwrite("MaxLightMapDensity", &UEngine::MaxLightMapDensity)
        .def_readwrite("RenderLightMapDensityGrayscaleScale", &UEngine::RenderLightMapDensityGrayscaleScale)
        .def_readwrite("RenderLightMapDensityColorScale", &UEngine::RenderLightMapDensityColorScale)
        .def_readwrite("LightMapDensityVertexMappedColor", &UEngine::LightMapDensityVertexMappedColor)
        .def_readwrite("LightMapDensitySelectedColor", &UEngine::LightMapDensitySelectedColor)
        .def_readwrite("MinVertexDensity", &UEngine::MinVertexDensity)
        .def_readwrite("IdealVertexDensity", &UEngine::IdealVertexDensity)
        .def_readwrite("MaxVertexDensity", &UEngine::MaxVertexDensity)
        .def_readwrite("StatColorMappings", &UEngine::StatColorMappings)
        .def_readwrite("EditorBrushMaterial", &UEngine::EditorBrushMaterial)
        .def_readwrite("EditorBrushMaterialName", &UEngine::EditorBrushMaterialName)
        .def_readwrite("DefaultPhysMaterial", &UEngine::DefaultPhysMaterial)
        .def_readwrite("DefaultPhysMaterialName", &UEngine::DefaultPhysMaterialName)
        .def_readwrite("ApexDamageParams", &UEngine::ApexDamageParams)
        .def_readwrite("ApexDamageParamsName", &UEngine::ApexDamageParamsName)
        .def_readwrite("TerrainErrorMaterial", &UEngine::TerrainErrorMaterial)
        .def_readwrite("TerrainErrorMaterialName", &UEngine::TerrainErrorMaterialName)
        .def_readwrite("TerrainMaterialMaxTextureCount", &UEngine::TerrainMaterialMaxTextureCount)
        .def_readwrite("OnlineSubsystemClass", &UEngine::OnlineSubsystemClass)
        .def_readwrite("DefaultOnlineSubsystemName", &UEngine::DefaultOnlineSubsystemName)
        .def_readwrite("DefaultPostProcess", &UEngine::DefaultPostProcess)
        .def_readwrite("DefaultPostProcessName", &UEngine::DefaultPostProcessName)
        .def_readwrite("ThumbnailSkeletalMeshPostProcess", &UEngine::ThumbnailSkeletalMeshPostProcess)
        .def_readwrite("ThumbnailSkeletalMeshPostProcessName", &UEngine::ThumbnailSkeletalMeshPostProcessName)
        .def_readwrite("ThumbnailParticleSystemPostProcess", &UEngine::ThumbnailParticleSystemPostProcess)
        .def_readwrite("ThumbnailParticleSystemPostProcessName", &UEngine::ThumbnailParticleSystemPostProcessName)
        .def_readwrite("ThumbnailMaterialPostProcess", &UEngine::ThumbnailMaterialPostProcess)
        .def_readwrite("ThumbnailMaterialPostProcessName", &UEngine::ThumbnailMaterialPostProcessName)
        .def_readwrite("DefaultUIScenePostProcess", &UEngine::DefaultUIScenePostProcess)
        .def_readwrite("DefaultUIScenePostProcessName", &UEngine::DefaultUIScenePostProcessName)
        .def_readwrite("DefaultUICaretMaterial", &UEngine::DefaultUICaretMaterial)
        .def_readwrite("DefaultUICaretMaterialName", &UEngine::DefaultUICaretMaterialName)
        .def_readwrite("SceneCaptureReflectActorMaterial", &UEngine::SceneCaptureReflectActorMaterial)
        .def_readwrite("SceneCaptureReflectActorMaterialName", &UEngine::SceneCaptureReflectActorMaterialName)
        .def_readwrite("SceneCaptureCubeActorMaterial", &UEngine::SceneCaptureCubeActorMaterial)
        .def_readwrite("SceneCaptureCubeActorMaterialName", &UEngine::SceneCaptureCubeActorMaterialName)
        .def_readwrite("ScreenDoorNoiseTexture", &UEngine::ScreenDoorNoiseTexture)
        .def_readwrite("ScreenDoorNoiseTextureName", &UEngine::ScreenDoorNoiseTextureName)
        .def_readwrite("ImageGrainNoiseTexture", &UEngine::ImageGrainNoiseTexture)
        .def_readwrite("ImageGrainNoiseTextureName", &UEngine::ImageGrainNoiseTextureName)
        .def_readwrite("RandomAngleTexture", &UEngine::RandomAngleTexture)
        .def_readwrite("RandomAngleTextureName", &UEngine::RandomAngleTextureName)
        .def_readwrite("RandomNormalTexture", &UEngine::RandomNormalTexture)
        .def_readwrite("RandomNormalTextureName", &UEngine::RandomNormalTextureName)
        .def_readwrite("RandomMirrorDiscTexture", &UEngine::RandomMirrorDiscTexture)
        .def_readwrite("RandomMirrorDiscTextureName", &UEngine::RandomMirrorDiscTextureName)
        .def_readwrite("WeightMapPlaceholderTexture", &UEngine::WeightMapPlaceholderTexture)
        .def_readwrite("WeightMapPlaceholderTextureName", &UEngine::WeightMapPlaceholderTextureName)
        .def_readwrite("LightMapDensityTexture", &UEngine::LightMapDensityTexture)
        .def_readwrite("LightMapDensityTextureName", &UEngine::LightMapDensityTextureName)
        .def_readwrite("LightMapDensityNormal", &UEngine::LightMapDensityNormal)
        .def_readwrite("LightMapDensityNormalName", &UEngine::LightMapDensityNormalName)
        .def_readwrite("DefaultSound", &UEngine::DefaultSound)
        .def_readwrite("DefaultSoundName", &UEngine::DefaultSoundName)
        .def_readwrite("TimeBetweenPurgingPendingKillObjects", &UEngine::TimeBetweenPurgingPendingKillObjects)
        .def_readwrite("Client", &UEngine::Client)
        .def_readwrite("GamePlayers", &UEngine::GamePlayers)
        .def_readwrite("GameViewport", &UEngine::GameViewport)
        .def_readwrite("DeferredCommands", &UEngine::DeferredCommands)
        .def_readwrite("TickCycles", &UEngine::TickCycles)
        .def_readwrite("GameCycles", &UEngine::GameCycles)
        .def_readwrite("ClientCycles", &UEngine::ClientCycles)
        .def_readwrite("MaxSmoothedFrameRate", &UEngine::MaxSmoothedFrameRate)
        .def_readwrite("MinSmoothedFrameRate", &UEngine::MinSmoothedFrameRate)
        .def_readwrite("NumPawnsAllowedToBeSpawnedInAFrame", &UEngine::NumPawnsAllowedToBeSpawnedInAFrame)
        .def_readwrite("RemoteControlExec", &UEngine::RemoteControlExec)
        .def_readwrite("MobileMaterialEmulator", &UEngine::MobileMaterialEmulator)
        .def_readwrite("C_WorldBox", &UEngine::C_WorldBox)
        .def_readwrite("C_BrushWire", &UEngine::C_BrushWire)
        .def_readwrite("C_AddWire", &UEngine::C_AddWire)
        .def_readwrite("C_SubtractWire", &UEngine::C_SubtractWire)
        .def_readwrite("C_SemiSolidWire", &UEngine::C_SemiSolidWire)
        .def_readwrite("C_NonSolidWire", &UEngine::C_NonSolidWire)
        .def_readwrite("C_WireBackground", &UEngine::C_WireBackground)
        .def_readwrite("C_ScaleBoxHi", &UEngine::C_ScaleBoxHi)
        .def_readwrite("C_VolumeCollision", &UEngine::C_VolumeCollision)
        .def_readwrite("C_BSPCollision", &UEngine::C_BSPCollision)
        .def_readwrite("C_OrthoBackground", &UEngine::C_OrthoBackground)
        .def_readwrite("C_Volume", &UEngine::C_Volume)
        .def_readwrite("C_BrushShape", &UEngine::C_BrushShape)
        .def_readwrite("StreamingDistanceFactor", &UEngine::StreamingDistanceFactor)
        .def_readwrite("ScoutClassName", &UEngine::ScoutClassName)
        .def_readwrite("TransitionType", &UEngine::TransitionType)
        .def_readwrite("TransitionDescription", &UEngine::TransitionDescription)
        .def_readwrite("TransitionGameType", &UEngine::TransitionGameType)
        .def_readwrite("MeshLODRange", &UEngine::MeshLODRange)
        .def_readwrite("CameraRotationThreshold", &UEngine::CameraRotationThreshold)
        .def_readwrite("CameraTranslationThreshold", &UEngine::CameraTranslationThreshold)
        .def_readwrite("PrimitiveProbablyVisibleTime", &UEngine::PrimitiveProbablyVisibleTime)
        .def_readwrite("PercentUnoccludedRequeries", &UEngine::PercentUnoccludedRequeries)
        .def_readwrite("MaxOcclusionPixelsFraction", &UEngine::MaxOcclusionPixelsFraction)
        .def_readwrite("PhysXLevel", &UEngine::PhysXLevel)
        .def_readwrite("MaxFluidNumVerts", &UEngine::MaxFluidNumVerts)
        .def_readwrite("FluidSimulationTimeLimit", &UEngine::FluidSimulationTimeLimit)
        .def_readwrite("MaxParticleResize", &UEngine::MaxParticleResize)
        .def_readwrite("MaxParticleResizeWarn", &UEngine::MaxParticleResizeWarn)
        .def_readwrite("MaxParticleVertexMemory", &UEngine::MaxParticleVertexMemory)
        .def_readwrite("MaxParticleSpriteCount", &UEngine::MaxParticleSpriteCount)
        .def_readwrite("MaxParticleSubUVCount", &UEngine::MaxParticleSubUVCount)
        .def_readwrite("BeginUPTryCount", &UEngine::BeginUPTryCount)
        .def_readwrite("PendingDroppedNotes", &UEngine::PendingDroppedNotes)
        .def_readwrite("DynamicCoverMeshComponentName", &UEngine::DynamicCoverMeshComponentName)
        .def_readwrite("NetClientTicksPerSecond", &UEngine::NetClientTicksPerSecond)
        .def_readwrite("MaxTrackedOcclusionIncrement", &UEngine::MaxTrackedOcclusionIncrement)
        .def_readwrite("TrackedOcclusionStepSize", &UEngine::TrackedOcclusionStepSize)
        .def_readwrite("DefaultSelectedMaterialColor", &UEngine::DefaultSelectedMaterialColor)
        .def_readwrite("DefaultHoveredMaterialColor", &UEngine::DefaultHoveredMaterialColor)
        .def_readwrite("SelectedMaterialColor", &UEngine::SelectedMaterialColor)
        .def_readwrite("UnselectedMaterialColor", &UEngine::UnselectedMaterialColor)
        .def_readwrite("NumberOfOnScreenDebugMessages", &UEngine::NumberOfOnScreenDebugMessages)
        .def_readwrite("IgnoreSimulatedFuncWarnings", &UEngine::IgnoreSimulatedFuncWarnings)
        .def_readwrite("ScreenSaverInhibitorSemaphore", &UEngine::ScreenSaverInhibitorSemaphore)
        .def_readwrite("ScreenSaverInhibitor", &UEngine::ScreenSaverInhibitor)
        .def_readwrite("HitchWatcherThreadSemaphore", &UEngine::HitchWatcherThreadSemaphore)
        .def_readwrite("GlobalTranslationContext", &UEngine::GlobalTranslationContext)
        .def_readwrite("LoadingMovieStartTime", &UEngine::LoadingMovieStartTime)
        .def_readwrite("MatineeCaptureName", &UEngine::MatineeCaptureName)
        .def_readwrite("MatineePackageCaptureName", &UEngine::MatineePackageCaptureName)
        .def_readwrite("VisibleLevelsForMatineeCapture", &UEngine::VisibleLevelsForMatineeCapture)
        .def_readwrite("MatineeCaptureFPS", &UEngine::MatineeCaptureFPS)
        .def_readwrite("MatineeCaptureType", &UEngine::MatineeCaptureType)
        .def_readwrite("BlockingMeshColor", &UEngine::BlockingMeshColor)
        .def_readwrite("BlockingMeshOpacity", &UEngine::BlockingMeshOpacity)
        .def_readwrite("CinematicAutoSkipDelay", &UEngine::CinematicAutoSkipDelay)
        .def_readwrite("CinematicAutoSkipMaps", &UEngine::CinematicAutoSkipMaps)
        .def_readwrite("SFXVolume", &UEngine::SFXVolume)
        .def_readwrite("VoiceOverVolume", &UEngine::VoiceOverVolume)
        .def_readwrite("BinkMovieVolumeScaleFactor", &UEngine::BinkMovieVolumeScaleFactor)
        .def("StaticClass", &UEngine::StaticClass, py::return_value_policy::reference)
        .def("GetPhysXLevel", &UEngine::GetPhysXLevel)
        .def("GetFacebookIntegration", &UEngine::GetFacebookIntegration, py::return_value_policy::reference)
        .def("BasicLoadObject", &UEngine::BasicLoadObject)
        .def("BasicSaveObject", &UEngine::BasicSaveObject)
        .def("AddTextureStreamingSlaveLoc", &UEngine::AddTextureStreamingSlaveLoc)
        .def("BrowseToURL", &UEngine::BrowseToURL)
        .def("GetWorldPostProcessChain", &UEngine::GetWorldPostProcessChain, py::return_value_policy::reference)
        .def("GetEngine", &UEngine::GetEngine, py::return_value_policy::reference)
        .def("AddOverlayWrapped", &UEngine::AddOverlayWrapped)
        .def("AddOverlay", &UEngine::AddOverlay)
        .def("RemoveAllOverlays", &UEngine::RemoveAllOverlays)
        .def("StopMovie", &UEngine::StopMovie)
        .def("PlayLoadMapMovie", &UEngine::PlayLoadMapMovie)
        .def("GetLastMovieName", &UEngine::GetLastMovieName)
        .def("GetAkAudioDevice", &UEngine::GetAkAudioDevice, py::return_value_policy::reference)
        .def("GetAudioDevice", &UEngine::GetAudioDevice, py::return_value_policy::reference)
        .def("IsStereoscopic3D", &UEngine::IsStereoscopic3D)
        .def("IsSplitScreen", &UEngine::IsSplitScreen)
        .def("GetAdditionalFont", &UEngine::GetAdditionalFont, py::return_value_policy::reference)
        .def("GetSubtitleFont", &UEngine::GetSubtitleFont, py::return_value_policy::reference)
        .def("GetLargeFont", &UEngine::GetLargeFont, py::return_value_policy::reference)
        .def("GetMediumFont", &UEngine::GetMediumFont, py::return_value_policy::reference)
        .def("GetSmallFont", &UEngine::GetSmallFont, py::return_value_policy::reference)
        .def("GetTinyFont", &UEngine::GetTinyFont, py::return_value_policy::reference)
        .def("GetBuildDate", &UEngine::GetBuildDate)
        .def("GetCurrentWorldInfo", &UEngine::GetCurrentWorldInfo, py::return_value_policy::reference)
        .def("IsGame", &UEngine::IsGame)
        .def("IsEditor", &UEngine::IsEditor)
          ;
}