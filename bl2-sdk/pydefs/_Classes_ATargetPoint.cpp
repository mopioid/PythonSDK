#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ATargetPoint(py::module &m)
{
    py::class_< ATargetPoint,  AKeypoint   >(m, "ATargetPoint")
		.def_static("StaticClass", &ATargetPoint::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SpawnRefCount", &ATargetPoint::SpawnRefCount)
          ;
}