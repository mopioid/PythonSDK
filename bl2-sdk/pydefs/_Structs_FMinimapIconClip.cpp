#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMinimapIconClip(py::module &m)
{
    py::class_< FMinimapIconClip >(m, "FMinimapIconClip")
        .def_readwrite("Object", &FMinimapIconClip::Object)
        .def_readwrite("MapPos", &FMinimapIconClip::MapPos)
  ;
}