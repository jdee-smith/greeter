/*cppimport
<%
cfg['compiler_args'] = ['-std=c++17', '-stdlib=libc++', '-Igreeter', '-mmacosx-version-min=10.14']
cfg['sources'] = ['../greeter/greeter.cpp']
setup_pybind11(cfg)
%>
*/

#include "greeter.hpp"
#include "pybind11/pybind11.h"

namespace py = pybind11;

PYBIND11_MODULE( greeter, m )
{
    py::class_<greeter::Greeter>( m, "Greeter" )
        .def( py::init<std::string>(), py::arg("name") )
        .def( "getName", &greeter::Greeter::getName, "Get m_name." )
        .def( "setName", &greeter::Greeter::setName, py::arg("name"), "Set m_name." )
        .def( "sayHello", &greeter::Greeter::sayHello, "Say hello." );

}