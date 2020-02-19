#ifndef GREETER_H
#define GREETER_H

#include <string>

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
    };
}

#endif