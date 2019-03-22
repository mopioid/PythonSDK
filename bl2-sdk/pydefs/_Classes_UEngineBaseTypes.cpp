#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UEngineBaseTypes(py::module &m)
{
    py::class_< UEngineBaseTypes,  UObject   >(m, "UEngineBaseTypes")
        .def("StaticClass", &UEngineBaseTypes::StaticClass, py::return_value_policy::reference)
          ;
}