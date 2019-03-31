#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleSprite(py::module &m)
{
    py::class_< UGFxMovieDrawStyleSprite,  UGFxMovieDrawStyleComponent   >(m, "UGFxMovieDrawStyleSprite")
		.def_static("StaticClass", &UGFxMovieDrawStyleSprite::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SpriteSize", &UGFxMovieDrawStyleSprite::SpriteSize)
        .def_readwrite("TheSprite", &UGFxMovieDrawStyleSprite::TheSprite)
          ;
}