#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "string_initialize.h"

TEST_CASE("Test string substring")
{
    REQUIRE(test_substring("John bestern", 5) == "bestern");
}