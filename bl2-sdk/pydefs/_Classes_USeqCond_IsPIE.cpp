#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqCond_IsPIE(py::module &m)
{
    py::class_< USeqCond_IsPIE,  USequenceCondition   >(m, "USeqCond_IsPIE")
		.def_static("StaticClass", &USeqCond_IsPIE::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqCond_IsPIE::eventGetObjClassVersion)
          ;
}