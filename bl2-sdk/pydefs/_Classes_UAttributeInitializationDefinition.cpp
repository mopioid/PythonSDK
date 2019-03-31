#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeInitializationDefinition(py::module &m)
{
    py::class_< UAttributeInitializationDefinition,  UGBXDefinition   >(m, "UAttributeInitializationDefinition")
		.def_static("StaticClass", &UAttributeInitializationDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BaseValueMode", &UAttributeInitializationDefinition::BaseValueMode)
        .def_readwrite("RoundingMode", &UAttributeInitializationDefinition::RoundingMode)
        .def_readwrite("ValueFormula", &UAttributeInitializationDefinition::ValueFormula)
        .def_readwrite("ConditionalInitialization", &UAttributeInitializationDefinition::ConditionalInitialization)
        .def_readwrite("RandomVariance", &UAttributeInitializationDefinition::RandomVariance)
        .def_readwrite("RangeRestriction", &UAttributeInitializationDefinition::RangeRestriction)
        .def("SetBaseValue", &UAttributeInitializationDefinition::SetBaseValue)
        .def("EvaluateInitializationData", &UAttributeInitializationDefinition::EvaluateInitializationData)
          ;
}