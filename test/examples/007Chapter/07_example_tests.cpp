#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "screen.h"

TEST_CASE("Test screen get char function")
{
    Screen screen(5, 5, 'c');
    REQUIRE(screen.get(1, 1) == 'c');
}
