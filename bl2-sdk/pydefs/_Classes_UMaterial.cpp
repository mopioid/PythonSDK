#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterial(py::module &m)
{
    py::class_< UMaterial,  UMaterialInterface   >(m, "UMaterial")
        .def_readwrite("PhysMaterial", &UMaterial::PhysMaterial)
        .def_readwrite("PhysicalMaterial", &UMaterial::PhysicalMaterial)
        .def_readwrite("PhysMaterialMask", &UMaterial::PhysMaterialMask)
        .def_readwrite("PhysMaterialMaskUVChannel", &UMaterial::PhysMaterialMaskUVChannel)
        .def_readwrite("BlackPhysicalMaterial", &UMaterial::BlackPhysicalMaterial)
        .def_readwrite("WhitePhysicalMaterial", &UMaterial::WhitePhysicalMaterial)
        .def_readwrite("DiffuseColor", &UMaterial::DiffuseColor)
        .def_readwrite("DiffusePower", &UMaterial::DiffusePower)
        .def_readwrite("SpecularColor", &UMaterial::SpecularColor)
        .def_readwrite("SpecularPower", &UMaterial::SpecularPower)
        .def_readwrite("Normal", &UMaterial::Normal)
        .def_readwrite("EmissiveColor", &UMaterial::EmissiveColor)
        .def_readwrite("Opacity", &UMaterial::Opacity)
        .def_readwrite("OpacityMask", &UMaterial::OpacityMask)
        .def_readwrite("OpacityMaskClipValue", &UMaterial::OpacityMaskClipValue)
        .def_readwrite("Distortion", &UMaterial::Distortion)
        .def_readwrite("BlendMode", &UMaterial::BlendMode)
        .def_readwrite("LightingModel", &UMaterial::LightingModel)
        .def_readwrite("ParticleDownsampling", &UMaterial::ParticleDownsampling)
        .def_readwrite("D3D11TessellationMode", &UMaterial::D3D11TessellationMode)
        .def_readwrite("CustomLighting", &UMaterial::CustomLighting)
        .def_readwrite("CustomSkylightDiffuse", &UMaterial::CustomSkylightDiffuse)
        .def_readwrite("AnisotropicDirection", &UMaterial::AnisotropicDirection)
        .def_readwrite("TwoSidedLightingMask", &UMaterial::TwoSidedLightingMask)
        .def_readwrite("TwoSidedLightingColor", &UMaterial::TwoSidedLightingColor)
        .def_readwrite("WorldPositionOffset", &UMaterial::WorldPositionOffset)
        .def_readwrite("WorldDisplacement", &UMaterial::WorldDisplacement)
        .def_readwrite("TessellationFactors", &UMaterial::TessellationFactors)
        .def_readwrite("EditorX", &UMaterial::EditorX)
        .def_readwrite("EditorY", &UMaterial::EditorY)
        .def_readwrite("EditorPitch", &UMaterial::EditorPitch)
        .def_readwrite("EditorYaw", &UMaterial::EditorYaw)
        .def_readwrite("Expressions", &UMaterial::Expressions)
        .def_readwrite("ReferencedTextures", &UMaterial::ReferencedTextures)
        .def("StaticClass", &UMaterial::StaticClass, py::return_value_policy::reference)
          ;
}