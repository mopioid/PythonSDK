#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USparkInterfaceSteamworks(py::module &m)
{
    py::class_< USparkInterfaceSteamworks,  USparkInterfaceImpl   >(m, "USparkInterfaceSteamworks")
        .def("StaticClass", &USparkInterfaceSteamworks::StaticClass, py::return_value_policy::reference)
          ;
}