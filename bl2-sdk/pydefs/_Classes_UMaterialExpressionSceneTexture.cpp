#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionSceneTexture(py::module &m)
{
    py::class_< UMaterialExpressionSceneTexture,  UMaterialExpression   >(m, "UMaterialExpressionSceneTexture")
        .def_readwrite("Coordinates", &UMaterialExpressionSceneTexture::Coordinates)
        .def_readwrite("SceneTextureType", &UMaterialExpressionSceneTexture::SceneTextureType)
        .def("StaticClass", &UMaterialExpressionSceneTexture::StaticClass, py::return_value_policy::reference)
          ;
}