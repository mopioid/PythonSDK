#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_ConstraintInstance(py::module &m)
{
    py::class_< URB_ConstraintInstance,  UObject   >(m, "URB_ConstraintInstance")
        .def_readwrite("Owner", &URB_ConstraintInstance::Owner)
        .def_readwrite("OwnerComponent", &URB_ConstraintInstance::OwnerComponent)
        .def_readwrite("ConstraintIndex", &URB_ConstraintInstance::ConstraintIndex)
        .def_readwrite("SceneIndex", &URB_ConstraintInstance::SceneIndex)
        .def_readwrite("ConstraintData", &URB_ConstraintInstance::ConstraintData)
        .def_readwrite("LinearPositionTarget", &URB_ConstraintInstance::LinearPositionTarget)
        .def_readwrite("LinearVelocityTarget", &URB_ConstraintInstance::LinearVelocityTarget)
        .def_readwrite("LinearDriveSpring", &URB_ConstraintInstance::LinearDriveSpring)
        .def_readwrite("LinearDriveDamping", &URB_ConstraintInstance::LinearDriveDamping)
        .def_readwrite("LinearDriveForceLimit", &URB_ConstraintInstance::LinearDriveForceLimit)
        .def_readwrite("AngularPositionTarget", &URB_ConstraintInstance::AngularPositionTarget)
        .def_readwrite("AngularVelocityTarget", &URB_ConstraintInstance::AngularVelocityTarget)
        .def_readwrite("AngularDriveSpring", &URB_ConstraintInstance::AngularDriveSpring)
        .def_readwrite("AngularDriveDamping", &URB_ConstraintInstance::AngularDriveDamping)
        .def_readwrite("AngularDriveForceLimit", &URB_ConstraintInstance::AngularDriveForceLimit)
        .def_readwrite("DummyKinActor", &URB_ConstraintInstance::DummyKinActor)
        .def("StaticClass", &URB_ConstraintInstance::StaticClass, py::return_value_policy::reference)
        .def("MoveKinActorTransform", &URB_ConstraintInstance::MoveKinActorTransform)
        .def("SetLinearLimitSize", &URB_ConstraintInstance::SetLinearLimitSize)
        .def("SetAngularDOFLimitScale", &URB_ConstraintInstance::SetAngularDOFLimitScale)
        .def("SetAngularDriveTypeAndParams", &URB_ConstraintInstance::SetAngularDriveTypeAndParams)
        .def("SetAngularDriveParams", &URB_ConstraintInstance::SetAngularDriveParams)
        .def("SetAngularVelocityTarget", &URB_ConstraintInstance::SetAngularVelocityTarget)
        .def("SetAngularPositionTarget", &URB_ConstraintInstance::SetAngularPositionTarget)
        .def("SetLinearDriveParams", &URB_ConstraintInstance::SetLinearDriveParams)
        .def("SetLinearVelocityTarget", &URB_ConstraintInstance::SetLinearVelocityTarget)
        .def("SetLinearPositionTarget", &URB_ConstraintInstance::SetLinearPositionTarget)
        .def("SetAngularVelocityDrive", &URB_ConstraintInstance::SetAngularVelocityDrive)
        .def("SetAngularPositionDrive", &URB_ConstraintInstance::SetAngularPositionDrive)
        .def("SetLinearVelocityDrive", &URB_ConstraintInstance::SetLinearVelocityDrive)
        .def("SetLinearPositionDrive", &URB_ConstraintInstance::SetLinearPositionDrive)
        .def("GetConstraintLocation", &URB_ConstraintInstance::GetConstraintLocation)
        .def("GetPhysicsAssetInstance", &URB_ConstraintInstance::GetPhysicsAssetInstance, py::return_value_policy::reference)
        .def("TermConstraint", &URB_ConstraintInstance::TermConstraint)
        .def("InitConstraint", &URB_ConstraintInstance::InitConstraint)
          ;
}