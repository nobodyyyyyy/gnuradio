/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dtv/dvbt2_paprtr_cc.h>

void bind_dvbt2_paprtr_cc(py::module& m)
{
    using dvbt2_paprtr_cc    = gr::dtv::dvbt2_paprtr_cc;


    py::class_<dvbt2_paprtr_cc,gr::sync_block,
        std::shared_ptr<dvbt2_paprtr_cc>>(m, "dvbt2_paprtr_cc")

        .def(py::init(&dvbt2_paprtr_cc::make),
           py::arg("carriermode"), 
           py::arg("fftsize"), 
           py::arg("pilotpattern"), 
           py::arg("guardinterval"), 
           py::arg("numdatasyms"), 
           py::arg("paprmode"), 
           py::arg("version"), 
           py::arg("vclip"), 
           py::arg("iterations"), 
           py::arg("vlength") 
        )
        

        .def("to_basic_block",[](std::shared_ptr<dvbt2_paprtr_cc> p){
            return p->to_basic_block();
        })
        ;


} 
