#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrunkenRandomComponent(py::module &m)
{
    py::class_< UDrunkenRandomComponent,  UDrunkenBaseComponent   >(m, "UDrunkenRandomComponent")
		.def_static("StaticClass", &UDrunkenRandomComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("PathCorrectionInterval", &UDrunkenRandomComponent::PathCorrectionInterval)
        .def_readwrite("TurnSpeed", &UDrunkenRandomComponent::TurnSpeed)
        .def_readwrite("ApproachTurnSpeed", &UDrunkenRandomComponent::ApproachTurnSpeed)
        .def_readwrite("MaxSpreadAngle", &UDrunkenRandomComponent::MaxSpreadAngle)
        .def_readwrite("MaxDepartureAngle", &UDrunkenRandomComponent::MaxDepartureAngle)
        .def_readwrite("LastUpdateTime", &UDrunkenRandomComponent::LastUpdateTime)
        .def_readwrite("LastDepartureAngle", &UDrunkenRandomComponent::LastDepartureAngle)
        .def_readwrite("LastRotationOffset", &UDrunkenRandomComponent::LastRotationOffset)
        .def_readwrite("TargetRotationOffset", &UDrunkenRandomComponent::TargetRotationOffset)
          ;
}