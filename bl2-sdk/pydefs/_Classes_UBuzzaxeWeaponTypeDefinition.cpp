#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBuzzaxeWeaponTypeDefinition(py::module &m)
{
    py::class_< UBuzzaxeWeaponTypeDefinition,  UWeaponTypeDefinition   >(m, "UBuzzaxeWeaponTypeDefinition")
		.def_static("StaticClass", &UBuzzaxeWeaponTypeDefinition::StaticClass, py::return_value_policy::reference)
          ;
}