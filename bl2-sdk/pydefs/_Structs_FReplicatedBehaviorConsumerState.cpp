#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedBehaviorConsumerState(py::module &m)
{
    py::class_< FReplicatedBehaviorConsumerState >(m, "FReplicatedBehaviorConsumerState")
        .def_readwrite("BehaviorSequenceEnabledFlags", &FReplicatedBehaviorConsumerState::BehaviorSequenceEnabledFlags)
  ;
}