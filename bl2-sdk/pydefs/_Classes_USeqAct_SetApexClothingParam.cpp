#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_SetApexClothingParam(py::module &m)
{
    py::class_< USeqAct_SetApexClothingParam,  USequenceAction   >(m, "USeqAct_SetApexClothingParam")
        .def("StaticClass", &USeqAct_SetApexClothingParam::StaticClass, py::return_value_policy::reference)
          ;
}