#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.h"

TEST_CASE( "Tests_2", "Tests" ) {
    REQUIRE( (area(radius(3.141593)) - 1.5708) < 1e-3);
}

