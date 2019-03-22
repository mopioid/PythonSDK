#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPostProcessSettings(py::module &m)
{
    py::class_< FPostProcessSettings >(m, "FPostProcessSettings")
        .def_readwrite("Bloom_Scale", &FPostProcessSettings::Bloom_Scale)
        .def_readwrite("Bloom_Threshold", &FPostProcessSettings::Bloom_Threshold)
        .def_readwrite("Bloom_Tint", &FPostProcessSettings::Bloom_Tint)
        .def_readwrite("Bloom_ScreenBlendThreshold", &FPostProcessSettings::Bloom_ScreenBlendThreshold)
        .def_readwrite("Bloom_InterpolationDuration", &FPostProcessSettings::Bloom_InterpolationDuration)
        .def_readwrite("DOF_BlurBloomKernelSize", &FPostProcessSettings::DOF_BlurBloomKernelSize)
        .def_readwrite("DOF_FalloffExponent", &FPostProcessSettings::DOF_FalloffExponent)
        .def_readwrite("DOF_BlurKernelSize", &FPostProcessSettings::DOF_BlurKernelSize)
        .def_readwrite("DOF_MaxNearBlurAmount", &FPostProcessSettings::DOF_MaxNearBlurAmount)
        .def_readwrite("DOF_MinBlurAmount", &FPostProcessSettings::DOF_MinBlurAmount)
        .def_readwrite("DOF_MaxFarBlurAmount", &FPostProcessSettings::DOF_MaxFarBlurAmount)
        .def_readwrite("DOF_FocusType", &FPostProcessSettings::DOF_FocusType)
        .def_readwrite("DOF_FocusInnerRadius", &FPostProcessSettings::DOF_FocusInnerRadius)
        .def_readwrite("DOF_FocusDistance", &FPostProcessSettings::DOF_FocusDistance)
        .def_readwrite("DOF_FocusPosition", &FPostProcessSettings::DOF_FocusPosition)
        .def_readwrite("DOF_TunnelVisionScale", &FPostProcessSettings::DOF_TunnelVisionScale)
        .def_readwrite("DOF_TunnelVisionYOffset", &FPostProcessSettings::DOF_TunnelVisionYOffset)
        .def_readwrite("DOF_InterpolationDuration", &FPostProcessSettings::DOF_InterpolationDuration)
        .def_readwrite("DOF_BokehTexture", &FPostProcessSettings::DOF_BokehTexture)
        .def_readwrite("MotionBlur_MaxVelocity", &FPostProcessSettings::MotionBlur_MaxVelocity)
        .def_readwrite("MotionBlur_Amount", &FPostProcessSettings::MotionBlur_Amount)
        .def_readwrite("MotionBlur_CameraRotationThreshold", &FPostProcessSettings::MotionBlur_CameraRotationThreshold)
        .def_readwrite("MotionBlur_CameraTranslationThreshold", &FPostProcessSettings::MotionBlur_CameraTranslationThreshold)
        .def_readwrite("MotionBlur_InterpolationDuration", &FPostProcessSettings::MotionBlur_InterpolationDuration)
        .def_readwrite("Scene_Desaturation", &FPostProcessSettings::Scene_Desaturation)
        .def_readwrite("Scene_Colorize", &FPostProcessSettings::Scene_Colorize)
        .def_readwrite("Scene_TonemapperScale", &FPostProcessSettings::Scene_TonemapperScale)
        .def_readwrite("Scene_ImageGrainScale", &FPostProcessSettings::Scene_ImageGrainScale)
        .def_readwrite("Scene_HighLights", &FPostProcessSettings::Scene_HighLights)
        .def_readwrite("Scene_MidTones", &FPostProcessSettings::Scene_MidTones)
        .def_readwrite("Scene_Shadows", &FPostProcessSettings::Scene_Shadows)
        .def_readwrite("Scene_InterpolationDuration", &FPostProcessSettings::Scene_InterpolationDuration)
        .def_readwrite("RimShader_Color", &FPostProcessSettings::RimShader_Color)
        .def_readwrite("RimShader_InterpolationDuration", &FPostProcessSettings::RimShader_InterpolationDuration)
        .def_readwrite("ColorGrading_LookupTable", &FPostProcessSettings::ColorGrading_LookupTable)
        .def_readwrite("ColorGradingLUT", &FPostProcessSettings::ColorGradingLUT)
  ;
}