#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "type_conversion.h"
#include "variable_def.h"

TEST_CASE("Test setting int values to bool variable", "int 0 bool false any other value true")
{
    REQUIRE(get_boolean_value(0) == false);
    REQUIRE(get_boolean_value(1) == true);
}

TEST_CASE("Test bool value in int", "true returns 1 false returns 0")
{
    REQUIRE(get_int_val_from_bool(true) == 1);
    REQUIRE(get_int_val_from_bool(false) == 0);
}

TEST_CASE("Test unsigned char", "use value less than 0")
{
    REQUIRE(get_unsigned_char(-1) == 255);
}

TEST_CASE("Test signed char", "256 returns undefined")
{
    REQUIRE(get_signed_char(256) == 0);
}

TEST_CASE("Test add int and unsigned int", "")
{
    REQUIRE(add_int_unsigned_int(-42, 10) == -32);
}

TEST_CASE("Test add unsigned int and unsigned int", "")
{
    REQUIRE(subtract_unsigned_int(10, 42) == 32);
    REQUIRE(subtract_unsigned_int(42, 10) == 4294967264);
}

TEST_CASE("Test subtract unsigned int and int", "")
{
    REQUIRE(subtract_int_unsigned_int(10, 10) == 0);
}

TEST_CASE("Test uninitialized int", "returns random values")
{
    REQUIRE(get_uninitialized_int() > 0);
}

TEST_CASE("Test initialized int", "returns 0")
{
    REQUIRE(get_initialized_int() == 0);
}