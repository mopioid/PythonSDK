#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_FinalBoss(py::module &m)
{
    py::class_< UAction_FinalBoss,  UAction_FollowPath   >(m, "UAction_FinalBoss")
		.def_static("StaticClass", &UAction_FinalBoss::StaticClass, py::return_value_policy::reference)
        .def("eventStop", &UAction_FinalBoss::eventStop)
        .def("eventStart", &UAction_FinalBoss::eventStart)
        .def("eventCanRun", &UAction_FinalBoss::eventCanRun)
          ;
}