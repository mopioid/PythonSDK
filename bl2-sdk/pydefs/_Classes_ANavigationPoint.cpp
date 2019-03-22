#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ANavigationPoint(py::module &m)
{
    py::class_< ANavigationPoint,  AActor   >(m, "ANavigationPoint")
        .def_readwrite("NavOctreeObject", &ANavigationPoint::NavOctreeObject)
        .def_readwrite("PathRenderingComponentClass", &ANavigationPoint::PathRenderingComponentClass)
        .def_readwrite("PathList", &ANavigationPoint::PathList)
        .def_readwrite("visitedWeight", &ANavigationPoint::visitedWeight)
        .def_readwrite("bestPathWeight", &ANavigationPoint::bestPathWeight)
        .def_readwrite("nextNavigationPoint", &ANavigationPoint::nextNavigationPoint)
        .def_readwrite("nextOrdered", &ANavigationPoint::nextOrdered)
        .def_readwrite("prevOrdered", &ANavigationPoint::prevOrdered)
        .def_readwrite("previousPath", &ANavigationPoint::previousPath)
        .def_readwrite("Cost", &ANavigationPoint::Cost)
        .def_readwrite("ExtraCost", &ANavigationPoint::ExtraCost)
        .def_readwrite("TransientCost", &ANavigationPoint::TransientCost)
        .def_readwrite("LastDetourWeight", &ANavigationPoint::LastDetourWeight)
        .def_readwrite("CylinderComponent", &ANavigationPoint::CylinderComponent)
        .def_readwrite("MaxPathSize", &ANavigationPoint::MaxPathSize)
        .def_readwrite("NavGuid", &ANavigationPoint::NavGuid)
        .def_readwrite("NetworkID", &ANavigationPoint::NetworkID)
        .def_readwrite("AnchoredPawn", &ANavigationPoint::AnchoredPawn)
        .def_readwrite("LastAnchoredPawnTime", &ANavigationPoint::LastAnchoredPawnTime)
        .def_readwrite("NodeSearchFlags", &ANavigationPoint::NodeSearchFlags)
        .def_readwrite("AreaActor", &ANavigationPoint::AreaActor)
        .def_readwrite("AreaName", &ANavigationPoint::AreaName)
        .def_readwrite("AreaReach", &ANavigationPoint::AreaReach)
        .def_readwrite("AreaVerticalReach", &ANavigationPoint::AreaVerticalReach)
        .def_readwrite("NoStoppingRadius", &ANavigationPoint::NoStoppingRadius)
        .def_readwrite("BusyPathCostMultiplier", &ANavigationPoint::BusyPathCostMultiplier)
        .def("StaticClass", &ANavigationPoint::StaticClass, py::return_value_policy::reference)
        .def("eventGetDebugAbbrev", &ANavigationPoint::eventGetDebugAbbrev)
        .def("ApplyCheckpointRecord", &ANavigationPoint::ApplyCheckpointRecord)
        .def("CreateCheckpointRecord", &ANavigationPoint::CreateCheckpointRecord)
        .def("ShouldSaveForCheckpoint", &ANavigationPoint::ShouldSaveForCheckpoint)
        .def("eventShutDown", &ANavigationPoint::eventShutDown)
        .def("OnToggle", &ANavigationPoint::OnToggle)
        .def("IsOnDifferentNetwork", &ANavigationPoint::IsOnDifferentNetwork)
        .def("GetAllNavInRadius", &ANavigationPoint::GetAllNavInRadius)
        .def("GetNearestAreaNavPointTo_Script", &ANavigationPoint::GetNearestAreaNavPointTo_Script, py::return_value_policy::reference)
        .def("IsInTheSameAreaAs", &ANavigationPoint::IsInTheSameAreaAs)
        .def("IsInThisAreaName", &ANavigationPoint::IsInThisAreaName)
        .def("IsInThisArea", &ANavigationPoint::IsInThisArea)
        .def("GetAreaColor", &ANavigationPoint::GetAreaColor)
        .def("GetAreaName", &ANavigationPoint::GetAreaName)
        .def("GetNearestNavToPoint", &ANavigationPoint::GetNearestNavToPoint, py::return_value_policy::reference)
        .def("GetNearestNavToActor", &ANavigationPoint::GetNearestNavToActor, py::return_value_policy::reference)
        .def("ProceedWithMove", &ANavigationPoint::ProceedWithMove)
        .def("eventSuggestMovePreparation", &ANavigationPoint::eventSuggestMovePreparation)
        .def("eventDetourWeight", &ANavigationPoint::eventDetourWeight)
        .def("eventAccept", &ANavigationPoint::eventAccept)
        .def("eventSpecialCost", &ANavigationPoint::eventSpecialCost)
        .def("CanTeleport", &ANavigationPoint::CanTeleport)
        .def("IsUsableAnchorFor", &ANavigationPoint::IsUsableAnchorFor)
        .def("GetReachSpecTo", &ANavigationPoint::GetReachSpecTo, py::return_value_policy::reference)
        .def("GetBoundingCylinder", &ANavigationPoint::GetBoundingCylinder)
          ;
}