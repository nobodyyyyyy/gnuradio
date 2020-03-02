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

#include <gnuradio/dtv/catv_trellis_enc_bb.h>

void bind_catv_trellis_enc_bb(py::module& m)
{
    using catv_trellis_enc_bb    = gr::dtv::catv_trellis_enc_bb;


    py::class_<catv_trellis_enc_bb,gr::block,
        std::shared_ptr<catv_trellis_enc_bb>>(m, "catv_trellis_enc_bb")

        .def(py::init(&catv_trellis_enc_bb::make),
           py::arg("constellation") 
        )
        

        .def("to_basic_block",[](std::shared_ptr<catv_trellis_enc_bb> p){
            return p->to_basic_block();
        })
        ;


} 
