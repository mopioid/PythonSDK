#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClientBeaconConnection(py::module &m)
{
    py::class_< FClientBeaconConnection >(m, "FClientBeaconConnection")
        .def_readwrite("PartyLeader", &FClientBeaconConnection::PartyLeader)
        .def_readwrite("ElapsedHeartbeatTime", &FClientBeaconConnection::ElapsedHeartbeatTime)
        .def_readwrite("Socket", &FClientBeaconConnection::Socket)
  ;
}