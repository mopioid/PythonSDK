#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANavMeshObstacle(py::module &m)
{
    py::class_< ANavMeshObstacle,  AActor   >(m, "ANavMeshObstacle")
		.def_static("StaticClass", &ANavMeshObstacle::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IInterface_NavMeshPathObstacle", &ANavMeshObstacle::VfTable_IInterface_NavMeshPathObstacle)
        .def("ApplyCheckpointRecord", &ANavMeshObstacle::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ANavMeshObstacle::CreateCheckpointRecord)
        .def("SetEnabled", &ANavMeshObstacle::SetEnabled)
        .def("OnToggle", &ANavMeshObstacle::OnToggle)
        .def("PostBeginPlay", &ANavMeshObstacle::PostBeginPlay)
        .def("UnRegisterObstacle", &ANavMeshObstacle::UnRegisterObstacle)
        .def("RegisterObstacle", &ANavMeshObstacle::RegisterObstacle)
        .def("eventGetObstacleBoudingShape", &ANavMeshObstacle::eventGetObstacleBoudingShape)
          ;
}