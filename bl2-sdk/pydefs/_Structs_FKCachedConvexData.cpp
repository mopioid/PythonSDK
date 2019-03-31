#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKCachedConvexData(py::module &m)
{
    py::class_< FKCachedConvexData >(m, "FKCachedConvexData")
        .def_readwrite("CachedConvexElements", &FKCachedConvexData::CachedConvexElements)
  ;
}