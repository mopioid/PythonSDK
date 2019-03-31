#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackMorphWeight(py::module &m)
{
    py::class_< UInterpTrackMorphWeight,  UInterpTrackFloatBase   >(m, "UInterpTrackMorphWeight")
		.def_static("StaticClass", &UInterpTrackMorphWeight::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MorphNodeName", &UInterpTrackMorphWeight::MorphNodeName)
          ;
}