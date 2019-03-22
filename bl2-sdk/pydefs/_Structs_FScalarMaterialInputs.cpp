#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScalarMaterialInput(py::module &m)
{
    py::class_< FScalarMaterialInput,  FMaterialInput   >(m, "FScalarMaterialInput")
        .def_readwrite("Constant", &FScalarMaterialInput::Constant)
  ;
}