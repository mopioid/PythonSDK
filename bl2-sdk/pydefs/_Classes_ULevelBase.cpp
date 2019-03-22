#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelBase(py::module &m)
{
    py::class_< ULevelBase,  UObject   >(m, "ULevelBase")
        .def("StaticClass", &ULevelBase::StaticClass, py::return_value_policy::reference)
          ;
}