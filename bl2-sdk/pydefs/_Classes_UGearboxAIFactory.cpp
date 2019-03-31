#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxAIFactory(py::module &m)
{
    py::class_< UGearboxAIFactory,  UAIFactoryBase   >(m, "UGearboxAIFactory")
		.def_static("StaticClass", &UGearboxAIFactory::StaticClass, py::return_value_policy::reference)
        .def("FreeRuleEngine", &UGearboxAIFactory::FreeRuleEngine)
        .def("GetRuleEngineFromTemplate", [](UGearboxAIFactory &self , class URuleEngine* RuleEngineTemplate) { class URuleEngine** pyOutRuleEngine = 0 ;  bool ret =  self.GetRuleEngineFromTemplate(RuleEngineTemplate, pyOutRuleEngine); return py::make_tuple(ret, *pyOutRuleEngine); })
          ;
}