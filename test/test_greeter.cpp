#define BOOST_TEST_MODULE

#include "greeter.hpp"
#include "boost/test/included/unit_test.hpp"
#include "boost/test/tools/output_test_stream.hpp"
#include <iostream>
#include <string>

BOOST_AUTO_TEST_SUITE ( GreeterTestSuite )

struct cout_redirect
{
    public:
        cout_redirect( std::streambuf * new_buffer )
            : old( std::cout.rdbuf( new_buffer ) )
        { }

        ~cout_redirect( )
        {
            std::cout.rdbuf( old );
        } 
    private:
        std::streambuf * old;
};

BOOST_AUTO_TEST_CASE ( test_sayHello )
{
    boost::test_tools::output_test_stream output;
    {
        cout_redirect guard( output.rdbuf() );
        greeter::Greeter greeter { "Jason" };
        greeter.sayHello();
    }

    BOOST_CHECK ( output.is_equal ( "Hello Jason!\n" ) );
}

BOOST_AUTO_TEST_SUITE_END( )