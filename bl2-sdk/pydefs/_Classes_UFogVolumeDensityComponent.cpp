#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFogVolumeDensityComponent(py::module &m)
{
    py::class_< UFogVolumeDensityComponent,  UActorComponent   >(m, "UFogVolumeDensityComponent")
		.def_static("StaticClass", &UFogVolumeDensityComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FogMaterial", &UFogVolumeDensityComponent::FogMaterial)
        .def_readwrite("DefaultFogVolumeMaterial", &UFogVolumeDensityComponent::DefaultFogVolumeMaterial)
        .def_readwrite("SimpleLightColor", &UFogVolumeDensityComponent::SimpleLightColor)
        .def_readwrite("ApproxFogLightColor", &UFogVolumeDensityComponent::ApproxFogLightColor)
        .def_readwrite("StartDistance", &UFogVolumeDensityComponent::StartDistance)
        .def_readwrite("MaxDistance", &UFogVolumeDensityComponent::MaxDistance)
        .def_readwrite("FogVolumeActors", &UFogVolumeDensityComponent::FogVolumeActors)
        .def("SetEnabled", &UFogVolumeDensityComponent::SetEnabled)
          ;
}