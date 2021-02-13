#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while_sum.h"

TEST_CASE("Test while sum function")
{
    REQUIRE(sum_while(2) == 3);
    REQUIRE(sum_while(3) == 6);
}