#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetDualWieldBlendState(py::module &m)
{
    py::class_< UBehavior_SetDualWieldBlendState,  UBehaviorBase   >(m, "UBehavior_SetDualWieldBlendState")
		.def_static("StaticClass", &UBehavior_SetDualWieldBlendState::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BlendTime", &UBehavior_SetDualWieldBlendState::BlendTime)
        .def("ApplyBehaviorToContext", &UBehavior_SetDualWieldBlendState::ApplyBehaviorToContext)
          ;
}