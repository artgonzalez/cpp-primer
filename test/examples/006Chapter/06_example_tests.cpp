#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "factorial.h"
#include "call_by_value.h"
#include "call_by_reference.h"
#include "value_return_function.h"

TEST_CASE("Test factorial")
{
    REQUIRE(factorial(5) == 120);
}

TEST_CASE("Test call by value function", "parameter values copied to function scope")
{
    int num = 10;
    value_parameter(num);
    
    REQUIRE( num == 10);
}

TEST_CASE("Test pointer parameter function", "pointer parameter changes variable pointed to")
{
    int num = 10;
    pointer_parameter(&num);

    REQUIRE(num == 0);
}

TEST_CASE("Test reference parameter function", "reference parameter changes referenced variable")
{
    int num = 10;
    reference_parameter(num);

    REQUIRE(num == 0);
}

TEST_CASE("Test int value return by value", "by value creates a copy")
{
    int num = 0;
    //int* ret_ptr = &get_value(num); can't reference
    int num2 = get_value(num);
    num = 5;

    REQUIRE(num != num2);//not equal they are stored on different addresses
}

TEST_CASE("Test value return functions", "Pay attention to local function variables")
{
    std::string name = "Joe";
    std::string* name_ptr = &extr_ref_string(name);
    REQUIRE(name == *name_ptr);
    
    name = "John";
    REQUIRE(name == *name_ptr);
}