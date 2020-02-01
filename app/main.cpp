#define CATCH_CONFIG_MAIN


#include "catch.hpp"

int add(int a,int b)
{
    return a+b;
}

TEST_CASE("add test")
{
    int result = add(5,6);

    REQUIRE(result==11);
}

TEST_CASE("add test 2")
{
    int result = add(1,1);

    REQUIRE(result==33);
}
