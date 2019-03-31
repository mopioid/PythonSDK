#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionWindDirectionAndSpeed(py::module &m)
{
    py::class_< UMaterialExpressionWindDirectionAndSpeed,  UMaterialExpression   >(m, "UMaterialExpressionWindDirectionAndSpeed")
		.def_static("StaticClass", &UMaterialExpressionWindDirectionAndSpeed::StaticClass, py::return_value_policy::reference)
          ;
}