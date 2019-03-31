#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_DisableCombatMusicLogic(py::module &m)
{
    py::class_< UWillowSeqAct_DisableCombatMusicLogic,  USequenceAction   >(m, "UWillowSeqAct_DisableCombatMusicLogic")
		.def_static("StaticClass", &UWillowSeqAct_DisableCombatMusicLogic::StaticClass, py::return_value_policy::reference)
          ;
}