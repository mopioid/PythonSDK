#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHUDWidget_WorldSpace(py::module &m)
{
    py::class_< UHUDWidget_WorldSpace,  UHUDWidget_Base   >(m, "UHUDWidget_WorldSpace")
		.def_static("StaticClass", &UHUDWidget_WorldSpace::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ObjectiveIcons", &UHUDWidget_WorldSpace::ObjectiveIcons)
        .def_readwrite("PlayerIcons", &UHUDWidget_WorldSpace::PlayerIcons)
        .def_readwrite("NPCAllyIcons", &UHUDWidget_WorldSpace::NPCAllyIcons)
        .def_readwrite("HUDDef", &UHUDWidget_WorldSpace::HUDDef)
        .def_readwrite("NextRelevantPlayerPawnIndex", &UHUDWidget_WorldSpace::NextRelevantPlayerPawnIndex)
        .def_readwrite("VVOrg", &UHUDWidget_WorldSpace::VVOrg)
        .def_readwrite("VVExt", &UHUDWidget_WorldSpace::VVExt)
        .def_readwrite("TopLevelClip", &UHUDWidget_WorldSpace::TopLevelClip)
        .def_readwrite("MinimapWrapperClip", &UHUDWidget_WorldSpace::MinimapWrapperClip)
        .def_readwrite("MinimapClip", &UHUDWidget_WorldSpace::MinimapClip)
        .def_readwrite("ParentClip", &UHUDWidget_WorldSpace::ParentClip)
        .def("GetPRIFor", &UHUDWidget_WorldSpace::GetPRIFor, py::return_value_policy::reference)
        .def("NotifyOfPawnRelevance", &UHUDWidget_WorldSpace::NotifyOfPawnRelevance)
        .def("UpdateNPCAllyIcons", &UHUDWidget_WorldSpace::UpdateNPCAllyIcons)
        .def("UpdatePlayerIcons", &UHUDWidget_WorldSpace::UpdatePlayerIcons)
        .def("UpdateObjectiveIcons", &UHUDWidget_WorldSpace::UpdateObjectiveIcons)
        .def("IsShowingObjective", &UHUDWidget_WorldSpace::IsShowingObjective)
        .def("SetVirtualViewport", &UHUDWidget_WorldSpace::SetVirtualViewport)
        .def("Update", &UHUDWidget_WorldSpace::Update)
        .def("Deinit", &UHUDWidget_WorldSpace::Deinit)
        .def("Init", &UHUDWidget_WorldSpace::Init)
          ;
}