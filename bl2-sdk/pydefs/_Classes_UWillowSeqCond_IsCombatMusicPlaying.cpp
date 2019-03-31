#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqCond_IsCombatMusicPlaying(py::module &m)
{
    py::class_< UWillowSeqCond_IsCombatMusicPlaying,  USequenceCondition   >(m, "UWillowSeqCond_IsCombatMusicPlaying")
		.def_static("StaticClass", &UWillowSeqCond_IsCombatMusicPlaying::StaticClass, py::return_value_policy::reference)
          ;
}