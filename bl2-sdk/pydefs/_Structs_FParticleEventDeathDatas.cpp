#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleEventDeathData(py::module &m)
{
    py::class_< FParticleEventDeathData,  FParticleEventData   >(m, "FParticleEventDeathData")
        .def_readwrite("ParticleTime", &FParticleEventDeathData::ParticleTime)
  ;
}