#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTAlphaBlend(py::module &m)
{
    py::class_< FTAlphaBlend >(m, "FTAlphaBlend")
        .def_readwrite("AlphaIn", &FTAlphaBlend::AlphaIn)
        .def_readwrite("AlphaOut", &FTAlphaBlend::AlphaOut)
        .def_readwrite("AlphaTarget", &FTAlphaBlend::AlphaTarget)
        .def_readwrite("BlendTime", &FTAlphaBlend::BlendTime)
        .def_readwrite("BlendTimeToGo", &FTAlphaBlend::BlendTimeToGo)
        .def_readwrite("BlendType", &FTAlphaBlend::BlendType)
  ;
}