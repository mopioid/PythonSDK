#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFileChannel(py::module &m)
{
    py::class_< UFileChannel,  UChannel   >(m, "UFileChannel")
		.def_static("StaticClass", &UFileChannel::StaticClass, py::return_value_policy::reference)
          ;
}