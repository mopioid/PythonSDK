#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDlcContentInfo(py::module &m)
{
    py::class_< FDlcContentInfo >(m, "FDlcContentInfo")
        .def_readwrite("ContentId", &FDlcContentInfo::ContentId)
  ;
}