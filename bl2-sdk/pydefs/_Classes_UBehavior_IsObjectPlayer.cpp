#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_IsObjectPlayer(py::module &m)
{
    py::class_< UBehavior_IsObjectPlayer,  UBehaviorBase   >(m, "UBehavior_IsObjectPlayer")
        .def_readwrite("PlayerCandidate", &UBehavior_IsObjectPlayer::PlayerCandidate)
        .def("StaticClass", &UBehavior_IsObjectPlayer::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_IsObjectPlayer::ApplyBehaviorToContext)
          ;
}