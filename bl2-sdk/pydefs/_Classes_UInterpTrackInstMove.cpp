#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstMove(py::module &m)
{
    py::class_< UInterpTrackInstMove,  UInterpTrackInst   >(m, "UInterpTrackInstMove")
		.def_static("StaticClass", &UInterpTrackInstMove::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ResetLocation", &UInterpTrackInstMove::ResetLocation)
        .def_readwrite("ResetRotation", &UInterpTrackInstMove::ResetRotation)
        .def_readwrite("InitialTM", &UInterpTrackInstMove::InitialTM)
        .def_readwrite("InitialQuat", &UInterpTrackInstMove::InitialQuat)
          ;
}