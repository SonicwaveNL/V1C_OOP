#define CATCH_CONFIG_MAIN 
#include "catch.hpp"

#include <ostream>
#include "vector.hpp"

TEST_CASE( "constructors" ){
    vector x;
    REQUIRE( x == vector( 13, 3 ) );

    vector y( 12 );
    REQUIRE( y == vector( 12, 3 ) );

    vector z( 12, 23 );
    REQUIRE( z == vector( 12, 23 ) );

}

TEST_CASE( "add operator" ){
    vector x( 3 );
    vector y = x + 4;
    REQUIRE( x == vector( 3, 3 ) ); 
    REQUIRE( y == vector( 7, 7 ) );

    vector z( 6, 16 );
    vector j = z + vector( 5, 15 );
    REQUIRE( z == vector( 6, 16 ) );
    REQUIRE( j == vector( 11, 31 ) ); 
}

TEST_CASE( "add into operator" ){
    vector x( 4, 5 );
    x += 4;
    REQUIRE( x == vector( 8, 9 ) );

    vector z( 6, 16 );
    z += vector( 5, 2 );
    REQUIRE( z == vector( 11, 18 ) );
}

TEST_CASE( "multiply by operator" ){
    vector x( 4, 5 );
    vector y = x * 4;
    REQUIRE( x == vector( 4, 5 ) ); 
    REQUIRE( y == vector( 16, 20 ) );

    vector z( 6, 16 );
    vector j = z * vector( 5, 2 );
    REQUIRE( z == vector( 6, 16 ) );
    REQUIRE( j == vector( 30, 32 ) );
}

TEST_CASE( "multiply into operator" ){
    vector x( 4, 5 );
    x *= 4;
    REQUIRE( x == vector( 16, 20 ) );

    vector z( 6, 16 );
    z *= vector( 5, 2 );
    REQUIRE( z == vector( 30, 32 ) );
}

TEST_CASE( "steam operator" ){
    vector x( 4, 5 );
    std::stringstream s;
    s << x;
    REQUIRE( x == vector( 4, 5 ) ); 
    
}
