#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTPOV(py::module &m)
{
    py::class_< FTPOV >(m, "FTPOV")
        .def_readwrite("Location", &FTPOV::Location)
        .def_readwrite("Rotation", &FTPOV::Rotation)
        .def_readwrite("FOV", &FTPOV::FOV)
  ;
}