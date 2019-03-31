#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AISetItemTossTarget(py::module &m)
{
    py::class_< UBehavior_AISetItemTossTarget,  UBehaviorBase   >(m, "UBehavior_AISetItemTossTarget")
		.def_static("StaticClass", &UBehavior_AISetItemTossTarget::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TossTarget", &UBehavior_AISetItemTossTarget::TossTarget)
        .def("ApplyBehaviorToContext", &UBehavior_AISetItemTossTarget::ApplyBehaviorToContext)
          ;
}