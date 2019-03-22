#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFluidSurfaceComponent(py::module &m)
{
    py::class_< UFluidSurfaceComponent,  UPrimitiveComponent   >(m, "UFluidSurfaceComponent")
        .def_readwrite("FluidMaterial", &UFluidSurfaceComponent::FluidMaterial)
        .def_readwrite("LightMapResolution", &UFluidSurfaceComponent::LightMapResolution)
        .def_readwrite("SimulationQuadsX", &UFluidSurfaceComponent::SimulationQuadsX)
        .def_readwrite("SimulationQuadsY", &UFluidSurfaceComponent::SimulationQuadsY)
        .def_readwrite("GridSpacing", &UFluidSurfaceComponent::GridSpacing)
        .def_readwrite("GridSpacingLowRes", &UFluidSurfaceComponent::GridSpacingLowRes)
        .def_readwrite("TargetSimulation", &UFluidSurfaceComponent::TargetSimulation)
        .def_readwrite("GPUTessellationFactor", &UFluidSurfaceComponent::GPUTessellationFactor)
        .def_readwrite("FluidDamping", &UFluidSurfaceComponent::FluidDamping)
        .def_readwrite("FluidTravelSpeed", &UFluidSurfaceComponent::FluidTravelSpeed)
        .def_readwrite("FluidHeightScale", &UFluidSurfaceComponent::FluidHeightScale)
        .def_readwrite("FluidUpdateRate", &UFluidSurfaceComponent::FluidUpdateRate)
        .def_readwrite("ForceImpact", &UFluidSurfaceComponent::ForceImpact)
        .def_readwrite("ForceContinuous", &UFluidSurfaceComponent::ForceContinuous)
        .def_readwrite("LightingContrast", &UFluidSurfaceComponent::LightingContrast)
        .def_readwrite("TargetDetail", &UFluidSurfaceComponent::TargetDetail)
        .def_readwrite("DeactivationDistance", &UFluidSurfaceComponent::DeactivationDistance)
        .def_readwrite("DetailResolution", &UFluidSurfaceComponent::DetailResolution)
        .def_readwrite("DetailSize", &UFluidSurfaceComponent::DetailSize)
        .def_readwrite("DetailDamping", &UFluidSurfaceComponent::DetailDamping)
        .def_readwrite("DetailTravelSpeed", &UFluidSurfaceComponent::DetailTravelSpeed)
        .def_readwrite("DetailTransfer", &UFluidSurfaceComponent::DetailTransfer)
        .def_readwrite("DetailHeightScale", &UFluidSurfaceComponent::DetailHeightScale)
        .def_readwrite("DetailUpdateRate", &UFluidSurfaceComponent::DetailUpdateRate)
        .def_readwrite("NormalLength", &UFluidSurfaceComponent::NormalLength)
        .def_readwrite("TestRippleSpeed", &UFluidSurfaceComponent::TestRippleSpeed)
        .def_readwrite("TestRippleFrequency", &UFluidSurfaceComponent::TestRippleFrequency)
        .def_readwrite("TestRippleRadius", &UFluidSurfaceComponent::TestRippleRadius)
        .def_readwrite("FluidWidth", &UFluidSurfaceComponent::FluidWidth)
        .def_readwrite("FluidHeight", &UFluidSurfaceComponent::FluidHeight)
        .def_readwrite("TestRippleTime", &UFluidSurfaceComponent::TestRippleTime)
        .def_readwrite("TestRippleAngle", &UFluidSurfaceComponent::TestRippleAngle)
        .def_readwrite("DeactivationTimer", &UFluidSurfaceComponent::DeactivationTimer)
        .def_readwrite("ViewDistance", &UFluidSurfaceComponent::ViewDistance)
        .def_readwrite("SimulationPosition", &UFluidSurfaceComponent::SimulationPosition)
        .def_readwrite("DetailPosition", &UFluidSurfaceComponent::DetailPosition)
        .def_readwrite("ClampMap", &UFluidSurfaceComponent::ClampMap)
        .def_readwrite("ShadowMaps", &UFluidSurfaceComponent::ShadowMaps)
        .def_readwrite("LightMap", &UFluidSurfaceComponent::LightMap)
        .def_readwrite("FluidSimulation", &UFluidSurfaceComponent::FluidSimulation)
        .def("StaticClass", &UFluidSurfaceComponent::StaticClass, py::return_value_policy::reference)
        .def("SetSimulationPosition", &UFluidSurfaceComponent::SetSimulationPosition)
        .def("SetDetailPosition", &UFluidSurfaceComponent::SetDetailPosition)
        .def("ApplyForce", &UFluidSurfaceComponent::ApplyForce)
          ;
}