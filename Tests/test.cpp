#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.h"

double value_t1 = 1234.56;

TEST_CASE( "Tests_1", "Tests" ) {
    REQUIRE( is_valid(value_t1) == 0);
}


