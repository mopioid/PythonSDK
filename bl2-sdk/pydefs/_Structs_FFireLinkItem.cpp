#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFireLinkItem(py::module &m)
{
    py::class_< FFireLinkItem >(m, "FFireLinkItem")
        .def_readwrite("SrcType", &FFireLinkItem::SrcType)
        .def_readwrite("SrcAction", &FFireLinkItem::SrcAction)
        .def_readwrite("DestType", &FFireLinkItem::DestType)
        .def_readwrite("DestAction", &FFireLinkItem::DestAction)
  ;
}