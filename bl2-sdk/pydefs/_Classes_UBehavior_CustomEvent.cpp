#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CustomEvent(py::module &m)
{
    py::class_< UBehavior_CustomEvent,  UBehaviorBase   >(m, "UBehavior_CustomEvent")
		.def_static("StaticClass", &UBehavior_CustomEvent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CustomEventName", &UBehavior_CustomEvent::CustomEventName)
        .def("ApplyBehaviorToContext", &UBehavior_CustomEvent::ApplyBehaviorToContext)
          ;
}