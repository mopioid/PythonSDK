#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGBXLineCheckResult(py::module &m)
{
    py::class_< FGBXLineCheckResult >(m, "FGBXLineCheckResult")
        .def_readwrite("Location", &FGBXLineCheckResult::Location)
        .def_readwrite("Normal", &FGBXLineCheckResult::Normal)
        .def_readwrite("Time", &FGBXLineCheckResult::Time)
  ;
}