#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "factorial.h"

TEST_CASE("Test factorial")
{
    REQUIRE(factorial(5) == 120);
}