#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUnloadableDlcMissionStatusData(py::module &m)
{
    py::class_< FUnloadableDlcMissionStatusData >(m, "FUnloadableDlcMissionStatusData")
        .def_readwrite("MissionDefName", &FUnloadableDlcMissionStatusData::MissionDefName)
        .def_readwrite("Status", &FUnloadableDlcMissionStatusData::Status)
        .def_readwrite("DlcPackageId", &FUnloadableDlcMissionStatusData::DlcPackageId)
        .def_readwrite("ObjectivesProgress", &FUnloadableDlcMissionStatusData::ObjectivesProgress)
        .def_readwrite("ActiveObjectiveSetIndex", &FUnloadableDlcMissionStatusData::ActiveObjectiveSetIndex)
        .def_readwrite("SubObjectiveSetsIndices", &FUnloadableDlcMissionStatusData::SubObjectiveSetsIndices)
        .def_readwrite("GameStage", &FUnloadableDlcMissionStatusData::GameStage)
        .def_readwrite("NeedsRewards", &FUnloadableDlcMissionStatusData::NeedsRewards)
        .def_readwrite("HeardKickoff", &FUnloadableDlcMissionStatusData::HeardKickoff)
  ;
}