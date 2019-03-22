#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UProjectileBehavior_TagPayloadType(py::module &m)
{
    py::class_< UProjectileBehavior_TagPayloadType,  UProjectileBehaviorBase   >(m, "UProjectileBehavior_TagPayloadType")
        .def_readwrite("PayloadType", &UProjectileBehavior_TagPayloadType::PayloadType)
        .def("StaticClass", &UProjectileBehavior_TagPayloadType::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UProjectileBehavior_TagPayloadType::ApplyBehaviorToContext)
          ;
}