#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendInjured(py::module &m)
{
    py::class_< UWillowAnimNodeBlendInjured,  UAnimNodeBlendList   >(m, "UWillowAnimNodeBlendInjured")
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendInjured::BlendTime)
        .def("StaticClass", &UWillowAnimNodeBlendInjured::StaticClass, py::return_value_policy::reference)
          ;
}