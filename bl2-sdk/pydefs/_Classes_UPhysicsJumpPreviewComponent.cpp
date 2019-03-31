#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPhysicsJumpPreviewComponent(py::module &m)
{
    py::class_< UPhysicsJumpPreviewComponent,  UWillowPreviewComponent   >(m, "UPhysicsJumpPreviewComponent")
		.def_static("StaticClass", &UPhysicsJumpPreviewComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("JumpNode", &UPhysicsJumpPreviewComponent::JumpNode)
          ;
}