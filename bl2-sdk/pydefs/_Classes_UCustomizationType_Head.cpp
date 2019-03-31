#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCustomizationType_Head(py::module &m)
{
    py::class_< UCustomizationType_Head,  UCustomizationType   >(m, "UCustomizationType_Head")
		.def_static("StaticClass", &UCustomizationType_Head::StaticClass, py::return_value_policy::reference)
          ;
}