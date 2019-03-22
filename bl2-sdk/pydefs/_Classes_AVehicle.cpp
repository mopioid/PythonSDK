#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVehicle(py::module &m)
{
    py::class_< AVehicle,  APawn   >(m, "AVehicle")
        .def_readwrite("Driver", &AVehicle::Driver)
        .def_readwrite("ExitPositions", &AVehicle::ExitPositions)
        .def_readwrite("ExitRadius", &AVehicle::ExitRadius)
        .def_readwrite("ExitOffset", &AVehicle::ExitOffset)
        .def_readwrite("Steering", &AVehicle::Steering)
        .def_readwrite("Throttle", &AVehicle::Throttle)
        .def_readwrite("Rise", &AVehicle::Rise)
        .def_readwrite("TargetLocationAdjustment", &AVehicle::TargetLocationAdjustment)
        .def_readwrite("DriverDamageMult", &AVehicle::DriverDamageMult)
        .def_readwrite("MomentumMult", &AVehicle::MomentumMult)
        .def_readwrite("CrushedDamageType", &AVehicle::CrushedDamageType)
        .def_readwrite("MinCrushSpeed", &AVehicle::MinCrushSpeed)
        .def_readwrite("ForceCrushPenetration", &AVehicle::ForceCrushPenetration)
        .def_readwrite("StuckCount", &AVehicle::StuckCount)
        .def_readwrite("ThrottleTime", &AVehicle::ThrottleTime)
        .def_readwrite("StuckTime", &AVehicle::StuckTime)
        .def_readwrite("OldSteering", &AVehicle::OldSteering)
        .def_readwrite("OnlySteeringStartTime", &AVehicle::OnlySteeringStartTime)
        .def_readwrite("OldThrottle", &AVehicle::OldThrottle)
        .def_readwrite("AIMoveCheckTime", &AVehicle::AIMoveCheckTime)
        .def_readwrite("VehicleMovingTime", &AVehicle::VehicleMovingTime)
        .def_readwrite("TurnTime", &AVehicle::TurnTime)
        .def("StaticClass", &AVehicle::StaticClass, py::return_value_policy::reference)
        .def("GetOccupantWhoCanPickup", [](AVehicle &self , class UIPickupable* Pickup) { class AController** pyOutController = 0 ;  class APawn* ret =  self.GetOccupantWhoCanPickup(Pickup, pyOutController); return py::make_tuple(ret, *pyOutController); })
        .def("SwitchSeats", &AVehicle::SwitchSeats)
        .def("ZeroMovementVariables", &AVehicle::ZeroMovementVariables)
        .def("SetCanTargetCheat", &AVehicle::SetCanTargetCheat)
        .def("CanTarget", &AVehicle::CanTarget)
        .def("SetCanTarget", &AVehicle::SetCanTarget)
        .def("NotifyDriverTakeHit", &AVehicle::NotifyDriverTakeHit)
        .def("eventReplicatedEvent", &AVehicle::eventReplicatedEvent)
        .def("SetVehicleBlockingMeshCollision", &AVehicle::SetVehicleBlockingMeshCollision)
        .def("eventDrivingStatusChanged", &AVehicle::eventDrivingStatusChanged)
        .def("SetDriving", &AVehicle::SetDriving)
        .def("eventGetEntryLocation", &AVehicle::eventGetEntryLocation)
        .def("CrushedBy", &AVehicle::CrushedBy)
        .def("PancakeOther", &AVehicle::PancakeOther)
        .def("eventEncroachingOn", &AVehicle::eventEncroachingOn)
        .def("GetCollisionDamageInstigator", &AVehicle::GetCollisionDamageInstigator, py::return_value_policy::reference)
        .def("eventEncroachedBy", &AVehicle::eventEncroachedBy)
        .def("FaceRotation", &AVehicle::FaceRotation)
        .def("GetDefaultCameraMode", &AVehicle::GetDefaultCameraMode)
        .def("PlayDying", &AVehicle::PlayDying)
        .def("DriverDied", &AVehicle::DriverDied)
        .def("Died", &AVehicle::Died)
        .def("ThrowActiveWeapon", &AVehicle::ThrowActiveWeapon)
        .def("eventTakeDamage", &AVehicle::eventTakeDamage)
        .def("SetKillInstigator", &AVehicle::SetKillInstigator, py::return_value_policy::reference)
        .def("UnPossessed", &AVehicle::UnPossessed)
        .def("TryExitPos", &AVehicle::TryExitPos)
        .def("FindAutoExit", &AVehicle::FindAutoExit)
        .def("PlaceExitingDriver", &AVehicle::PlaceExitingDriver)
        .def("DriverLeft", &AVehicle::DriverLeft)
        .def("SetInputs", &AVehicle::SetInputs)
        .def("NoFailSetDriverLocation", &AVehicle::NoFailSetDriverLocation)
        .def("eventDriverLeave", &AVehicle::eventDriverLeave)
        .def("GetDefaultExitLocation", &AVehicle::GetDefaultExitLocation)
        .def("GetExitRotation", &AVehicle::GetExitRotation)
        .def("eventContinueOnFoot", &AVehicle::eventContinueOnFoot)
        .def("DetachDriver", &AVehicle::DetachDriver)
        .def("AttachDriver", &AVehicle::AttachDriver)
        .def("EntryAnnouncement", &AVehicle::EntryAnnouncement)
        .def("PossessedBy", &AVehicle::PossessedBy)
        .def("DriverEnter", &AVehicle::DriverEnter)
        .def("TryToRide", &AVehicle::TryToRide)
        .def("AnySeatAvailable", &AVehicle::AnySeatAvailable)
        .def("CanEnterVehicle", &AVehicle::CanEnterVehicle)
        .def("Destroyed_HandleDriver", &AVehicle::Destroyed_HandleDriver)
        .def("eventDestroyed", &AVehicle::eventDestroyed)
        .def("CheatFly", &AVehicle::CheatFly)
        .def("CheatGhost", &AVehicle::CheatGhost)
        .def("CheatWalk", &AVehicle::CheatWalk)
        .def("eventPostBeginPlay", &AVehicle::eventPostBeginPlay)
        .def("SetBaseEyeheight", &AVehicle::SetBaseEyeheight)
        .def("PlayerChangedTeam", &AVehicle::PlayerChangedTeam)
        .def("DriverRadiusDamage", &AVehicle::DriverRadiusDamage)
        .def("TakeRadiusDamage", &AVehicle::TakeRadiusDamage)
        .def("GetTargetLocation", &AVehicle::GetTargetLocation)
        .def("GetMaxRiseForce", &AVehicle::GetMaxRiseForce)
        .def("IsAttachedRiderSeat", &AVehicle::IsAttachedRiderSeat)
        .def("GetDriverController", &AVehicle::GetDriverController, py::return_value_policy::reference)
        .def("GetVehicleBase", &AVehicle::GetVehicleBase, py::return_value_policy::reference)
        .def("Suicide", &AVehicle::Suicide)
        .def("NotifyTeamChanged", &AVehicle::NotifyTeamChanged)
          ;
}