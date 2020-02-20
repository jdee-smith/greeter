#include "greeter.hpp"
#include <vector>

namespace greeter
{
    template <typename T>
    std::vector<T> Greeter::square( const std::vector<T> &v )
    {
        const int n = v.size();
        std::vector<T> m(n);
        for ( int i { 0 }; i < n; ++i )
        {
            m[i] = v[i] * v[i];
        }

        return m;
    }
}