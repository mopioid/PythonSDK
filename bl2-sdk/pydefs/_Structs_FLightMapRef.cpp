#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightMapRef(py::module &m)
{
    py::class_< FLightMapRef >(m, "FLightMapRef")
        .def_readwrite("Reference", &FLightMapRef::Reference)
  ;
}