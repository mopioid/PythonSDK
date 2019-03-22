#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASkeletalMeshActorMAT(py::module &m)
{
    py::class_< ASkeletalMeshActorMAT,  ASkeletalMeshActor   >(m, "ASkeletalMeshActorMAT")
        .def_readwrite("SlotNodes", &ASkeletalMeshActorMAT::SlotNodes)
        .def("StaticClass", &ASkeletalMeshActorMAT::StaticClass, py::return_value_policy::reference)
        .def("eventSetSkelControlScale", &ASkeletalMeshActorMAT::eventSetSkelControlScale)
        .def("eventSetMorphWeight", &ASkeletalMeshActorMAT::eventSetMorphWeight)
        .def("eventFinishAnimControl", &ASkeletalMeshActorMAT::eventFinishAnimControl)
        .def("MAT_SetAnimPosition", &ASkeletalMeshActorMAT::MAT_SetAnimPosition)
        .def("eventSetAnimPosition", &ASkeletalMeshActorMAT::eventSetAnimPosition)
        .def("ClearAnimNodes", &ASkeletalMeshActorMAT::ClearAnimNodes)
        .def("CacheAnimNodes", &ASkeletalMeshActorMAT::CacheAnimNodes)
        .def("eventPostInitAnimTree", &ASkeletalMeshActorMAT::eventPostInitAnimTree)
        .def("eventDestroyed", &ASkeletalMeshActorMAT::eventDestroyed)
        .def("MAT_SetSkelControlStrength", &ASkeletalMeshActorMAT::MAT_SetSkelControlStrength)
        .def("MAT_SetSkelControlScale", &ASkeletalMeshActorMAT::MAT_SetSkelControlScale)
        .def("MAT_SetMorphWeight", &ASkeletalMeshActorMAT::MAT_SetMorphWeight)
        .def("MAT_SetAnimWeights", &ASkeletalMeshActorMAT::MAT_SetAnimWeights)
          ;
}