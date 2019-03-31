#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstVectorProp(py::module &m)
{
    py::class_< UInterpTrackInstVectorProp,  UInterpTrackInstProperty   >(m, "UInterpTrackInstVectorProp")
		.def_static("StaticClass", &UInterpTrackInstVectorProp::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VectorProp", &UInterpTrackInstVectorProp::VectorProp)
        .def_readwrite("ResetVector", &UInterpTrackInstVectorProp::ResetVector)
          ;
}