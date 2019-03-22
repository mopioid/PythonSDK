#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFriendsQuery(py::module &m)
{
    py::class_< FFriendsQuery >(m, "FFriendsQuery")
        .def_readwrite("UniqueId", &FFriendsQuery::UniqueId)
  ;
}