#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ToggleHUD(py::module &m)
{
    py::class_< USeqAct_ToggleHUD,  USequenceAction   >(m, "USeqAct_ToggleHUD")
		.def_static("StaticClass", &USeqAct_ToggleHUD::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_ToggleHUD::eventGetObjClassVersion)
          ;
}