#include "greeter.hpp"
#include <iostream>
#include <string>

namespace greeter
{
    Greeter::Greeter( std::string name )
    {
        m_name = name;
    }

    Greeter::~Greeter()
    {
    }

    std::string Greeter::getName()
    {
        return m_name;
    }

    void Greeter::setName( std::string name )
    {
        m_name = name;
    }

    void Greeter::sayHello()
    {
        std::cout << "Hello " << m_name << "!" << '\n';
    }
}