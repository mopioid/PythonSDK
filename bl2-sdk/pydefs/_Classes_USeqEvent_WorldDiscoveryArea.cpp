#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_WorldDiscoveryArea(py::module &m)
{
    py::class_< USeqEvent_WorldDiscoveryArea,  USequenceEvent   >(m, "USeqEvent_WorldDiscoveryArea")
		.def_static("StaticClass", &USeqEvent_WorldDiscoveryArea::StaticClass, py::return_value_policy::reference)
          ;
}