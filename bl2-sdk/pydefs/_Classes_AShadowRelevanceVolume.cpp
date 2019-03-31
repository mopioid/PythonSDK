#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AShadowRelevanceVolume(py::module &m)
{
    py::class_< AShadowRelevanceVolume,  AVolume   >(m, "AShadowRelevanceVolume")
		.def_static("StaticClass", &AShadowRelevanceVolume::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ShadowRelevanceList", &AShadowRelevanceVolume::ShadowRelevanceList)
          ;
}