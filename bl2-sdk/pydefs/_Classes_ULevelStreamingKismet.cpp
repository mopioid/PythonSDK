#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelStreamingKismet(py::module &m)
{
    py::class_< ULevelStreamingKismet,  ULevelStreaming   >(m, "ULevelStreamingKismet")
		.def_static("StaticClass", &ULevelStreamingKismet::StaticClass, py::return_value_policy::reference)
          ;
}