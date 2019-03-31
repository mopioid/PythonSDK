#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCombatPointData(py::module &m)
{
    py::class_< FCombatPointData >(m, "FCombatPointData")
        .def_readwrite("Slot", &FCombatPointData::Slot)
        .def_readwrite("Location", &FCombatPointData::Location)
        .def_readwrite("Actor", &FCombatPointData::Actor)
        .def_readwrite("ConstraintType", &FCombatPointData::ConstraintType)
        .def_readwrite("ConstraintTags", &FCombatPointData::ConstraintTags)
  ;
}