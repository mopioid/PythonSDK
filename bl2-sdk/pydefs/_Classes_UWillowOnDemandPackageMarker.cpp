#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowOnDemandPackageMarker(py::module &m)
{
    py::class_< UWillowOnDemandPackageMarker,  UObject   >(m, "UWillowOnDemandPackageMarker")
		.def_static("StaticClass", &UWillowOnDemandPackageMarker::StaticClass, py::return_value_policy::reference)
          ;
}