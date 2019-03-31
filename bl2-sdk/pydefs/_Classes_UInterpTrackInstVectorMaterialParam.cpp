#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstVectorMaterialParam(py::module &m)
{
    py::class_< UInterpTrackInstVectorMaterialParam,  UInterpTrackInst   >(m, "UInterpTrackInstVectorMaterialParam")
		.def_static("StaticClass", &UInterpTrackInstVectorMaterialParam::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MICInfos", &UInterpTrackInstVectorMaterialParam::MICInfos)
        .def_readwrite("InstancedTrack", &UInterpTrackInstVectorMaterialParam::InstancedTrack)
          ;
}