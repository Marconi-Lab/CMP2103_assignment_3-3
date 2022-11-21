#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.h"


TEST_CASE( "Tests_1", "Tests" ) {
    REQUIRE( area(radius(0)) == 0);
}


