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

#include <gnuradio/dtv/atsc_randomizer.h>

void bind_atsc_randomizer(py::module& m)
{
    using atsc_randomizer    = gr::dtv::atsc_randomizer;


    py::class_<atsc_randomizer,gr::sync_block,
        std::shared_ptr<atsc_randomizer>>(m, "atsc_randomizer")

        .def(py::init(&atsc_randomizer::make)
        )
        

        .def("to_basic_block",[](std::shared_ptr<atsc_randomizer> p){
            return p->to_basic_block();
        })
        ;


} 
