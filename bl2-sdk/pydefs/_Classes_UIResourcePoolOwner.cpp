#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIResourcePoolOwner(py::module &m)
{
    py::class_< UIResourcePoolOwner,  UInterface   >(m, "UIResourcePoolOwner")
        .def("StaticClass", &UIResourcePoolOwner::StaticClass, py::return_value_policy::reference)
        .def("CanSetResourcePoolValues", &UIResourcePoolOwner::CanSetResourcePoolValues)
          ;
}