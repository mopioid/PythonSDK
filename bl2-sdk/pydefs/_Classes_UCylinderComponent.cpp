#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCylinderComponent(py::module &m)
{
    py::class_< UCylinderComponent, UPrimitiveComponent   >(m, "UCylinderComponent")
		.def_static("StaticClass", &UCylinderComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("CollisionHeight", &UCylinderComponent::CollisionHeight)
        .def_readwrite("CollisionRadius", &UCylinderComponent::CollisionRadius)
        .def("SetCylinderSize", &UCylinderComponent::SetCylinderSize)
          ;
}