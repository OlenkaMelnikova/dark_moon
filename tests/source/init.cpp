#include <Do-While.hpp>
#include <catch.hpp>

SCENARIO("Do-While Sum", "[Sum]") {
    
    float rv = Sum;
    
	REQUIRE( rv == 12.0 );
}
