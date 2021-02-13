#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "sum_range.h"

TEST_CASE("Test sum range with while", "Range min to max")
{
    REQUIRE(sum_range(1, 3) == 6);
    REQUIRE(sum_range(1, 4) == 10);
    REQUIRE(sum_range(50, 100) == 3825);
}