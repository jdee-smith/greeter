#ifndef GREETER_H
#define GREETER_H

#include <string>
#include <vector>

namespace greeter
{
    class Greeter
    {
    private:
        std::string m_name;
    public:
        Greeter( std::string name );
        ~Greeter();
        std::string getName();
        void setName( std::string name );
        void sayHello();
        template <typename T> std::vector<T> square( const std::vector<T> &v );
    };
}

#include "greeter.tpp"

#endif