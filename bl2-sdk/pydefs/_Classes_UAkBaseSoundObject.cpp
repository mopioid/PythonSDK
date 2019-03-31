#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkBaseSoundObject(py::module &m)
{
    py::class_< UAkBaseSoundObject,  UObject   >(m, "UAkBaseSoundObject")
		.def_static("StaticClass", &UAkBaseSoundObject::StaticClass, py::return_value_policy::reference)
          ;
}