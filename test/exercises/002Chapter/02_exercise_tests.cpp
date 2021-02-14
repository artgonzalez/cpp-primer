#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "references.h"
#include "pointers.h"

TEST_CASE("215 Test valid reference value function")
{
    REQUIRE(get_int_value_w_reference() == 1);
}

TEST_CASE("217 Test return reference value")
{
    REQUIRE(get_reference_value() == 20);
}

TEST_CASE("220 Test pointer multiplication")
{
    REQUIRE(get_ptr_multiplication_value() == 1764);
}