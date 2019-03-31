#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchDirection_OppositeMyFacingDirection(py::module &m)
{
    py::class_< USearchDirection_OppositeMyFacingDirection,  USearchDirection   >(m, "USearchDirection_OppositeMyFacingDirection")
		.def_static("StaticClass", &USearchDirection_OppositeMyFacingDirection::StaticClass, py::return_value_policy::reference)
          ;
}