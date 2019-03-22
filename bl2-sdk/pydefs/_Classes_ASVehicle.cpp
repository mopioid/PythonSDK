#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASVehicle(py::module &m)
{
    py::class_< ASVehicle,  AVehicle   >(m, "ASVehicle")
        .def_readwrite("SimObj", &ASVehicle::SimObj)
        .def_readwrite("Wheels", &ASVehicle::Wheels)
        .def_readwrite("COMOffset", &ASVehicle::COMOffset)
        .def_readwrite("InertiaTensorMultiplier", &ASVehicle::InertiaTensorMultiplier)
        .def_readwrite("StayUprightRollResistAngle", &ASVehicle::StayUprightRollResistAngle)
        .def_readwrite("StayUprightPitchResistAngle", &ASVehicle::StayUprightPitchResistAngle)
        .def_readwrite("StayUprightStiffness", &ASVehicle::StayUprightStiffness)
        .def_readwrite("StayUprightDamping", &ASVehicle::StayUprightDamping)
        .def_readwrite("StayUprightConstraintSetup", &ASVehicle::StayUprightConstraintSetup)
        .def_readwrite("StayUprightConstraintInstance", &ASVehicle::StayUprightConstraintInstance)
        .def_readwrite("HeavySuspensionShiftPercent", &ASVehicle::HeavySuspensionShiftPercent)
        .def_readwrite("MaxSpeed", &ASVehicle::MaxSpeed)
        .def_readwrite("MaxAngularVelocity", &ASVehicle::MaxAngularVelocity)
        .def_readwrite("TimeOffGround", &ASVehicle::TimeOffGround)
        .def_readwrite("UprightLiftStrength", &ASVehicle::UprightLiftStrength)
        .def_readwrite("UprightTorqueStrength", &ASVehicle::UprightTorqueStrength)
        .def_readwrite("UprightTime", &ASVehicle::UprightTime)
        .def_readwrite("UprightStartTime", &ASVehicle::UprightStartTime)
        .def_readwrite("EngineSound", &ASVehicle::EngineSound)
        .def_readwrite("SquealSound", &ASVehicle::SquealSound)
        .def_readwrite("CollisionSound", &ASVehicle::CollisionSound)
        .def_readwrite("EnterVehicleSound", &ASVehicle::EnterVehicleSound)
        .def_readwrite("ExitVehicleSound", &ASVehicle::ExitVehicleSound)
        .def_readwrite("CollisionIntervalSecs", &ASVehicle::CollisionIntervalSecs)
        .def_readwrite("CollisionThreshold", &ASVehicle::CollisionThreshold)
        .def_readwrite("SquealThreshold", &ASVehicle::SquealThreshold)
        .def_readwrite("SquealLatThreshold", &ASVehicle::SquealLatThreshold)
        .def_readwrite("LatAngleVolumeMult", &ASVehicle::LatAngleVolumeMult)
        .def_readwrite("EngineStartOffsetSecs", &ASVehicle::EngineStartOffsetSecs)
        .def_readwrite("EngineStopOffsetSecs", &ASVehicle::EngineStopOffsetSecs)
        .def_readwrite("LastCollisionSoundTime", &ASVehicle::LastCollisionSoundTime)
        .def_readwrite("OutputBrake", &ASVehicle::OutputBrake)
        .def_readwrite("OutputGas", &ASVehicle::OutputGas)
        .def_readwrite("OutputSteering", &ASVehicle::OutputSteering)
        .def_readwrite("OutputRise", &ASVehicle::OutputRise)
        .def_readwrite("ForwardVel", &ASVehicle::ForwardVel)
        .def_readwrite("NumPoweredWheels", &ASVehicle::NumPoweredWheels)
        .def_readwrite("BaseOffset", &ASVehicle::BaseOffset)
        .def_readwrite("CamDist", &ASVehicle::CamDist)
        .def_readwrite("DriverViewPitch", &ASVehicle::DriverViewPitch)
        .def_readwrite("DriverViewYaw", &ASVehicle::DriverViewYaw)
        .def_readwrite("VState", &ASVehicle::VState)
        .def_readwrite("AngErrorAccumulator", &ASVehicle::AngErrorAccumulator)
        .def_readwrite("RadialImpulseScaling", &ASVehicle::RadialImpulseScaling)
        .def("StaticClass", &ASVehicle::StaticClass, py::return_value_policy::reference)
        .def("GetSVehicleDebug", &ASVehicle::GetSVehicleDebug)
        .def("HermiteEval", &ASVehicle::HermiteEval)
        .def("PostTeleport", &ASVehicle::PostTeleport)
        .def("eventRigidBodyCollision", &ASVehicle::eventRigidBodyCollision)
        .def("eventDrivingStatusChanged", &ASVehicle::eventDrivingStatusChanged)
        .def("VehiclePlayExitSound", &ASVehicle::VehiclePlayExitSound)
        .def("VehiclePlayEnterSound", &ASVehicle::VehiclePlayEnterSound)
        .def("StopEngineSoundTimed", &ASVehicle::StopEngineSoundTimed)
        .def("StopEngineSound", &ASVehicle::StopEngineSound)
        .def("StartEngineSoundTimed", &ASVehicle::StartEngineSoundTimed)
        .def("StartEngineSound", &ASVehicle::StartEngineSound)
        .def("HasWheelsOnGround", &ASVehicle::HasWheelsOnGround)
        .def("GetDefaultCameraMode", &ASVehicle::GetDefaultCameraMode)
        .def("CalcCamera", &ASVehicle::CalcCamera)
        .def("Died", &ASVehicle::Died)
        .def("AddVelocity", &ASVehicle::AddVelocity)
        .def("InitVehicleRagdoll", &ASVehicle::InitVehicleRagdoll)
        .def("TakeRadiusDamage", &ASVehicle::TakeRadiusDamage)
        .def("StopVehicleSounds", &ASVehicle::StopVehicleSounds)
        .def("TurnOff", &ASVehicle::TurnOff)
        .def("eventDestroyed", &ASVehicle::eventDestroyed)
        .def("eventPostInitAnimTree", &ASVehicle::eventPostInitAnimTree)
        .def("eventPostBeginPlay", &ASVehicle::eventPostBeginPlay)
        .def("SetWheelCollision", &ASVehicle::SetWheelCollision)
        .def("IsSleeping", &ASVehicle::IsSleeping)
        .def("AddTorque", &ASVehicle::AddTorque)
        .def("AddImpulse", &ASVehicle::AddImpulse)
        .def("AddForce", &ASVehicle::AddForce)
          ;
}