#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ResurrectPlayer(py::module &m)
{
    py::class_< UWillowSeqAct_ResurrectPlayer,  USequenceAction   >(m, "UWillowSeqAct_ResurrectPlayer")
        .def("StaticClass", &UWillowSeqAct_ResurrectPlayer::StaticClass, py::return_value_policy::reference)
        .def("eventOnActivated", &UWillowSeqAct_ResurrectPlayer::eventOnActivated)
          ;
}