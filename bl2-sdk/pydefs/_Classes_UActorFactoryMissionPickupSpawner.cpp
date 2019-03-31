#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryMissionPickupSpawner(py::module &m)
{
    py::class_< UActorFactoryMissionPickupSpawner,  UActorFactory   >(m, "UActorFactoryMissionPickupSpawner")
		.def_static("StaticClass", &UActorFactoryMissionPickupSpawner::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Definition", &UActorFactoryMissionPickupSpawner::Definition)
          ;
}