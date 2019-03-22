#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UReferenceSet(py::module &m)
{
    py::class_< UReferenceSet,  UObject   >(m, "UReferenceSet")
        .def_readwrite("References", &UReferenceSet::References)
        .def("StaticClass", &UReferenceSet::StaticClass, py::return_value_policy::reference)
          ;
}