
#include <vector.hpp>
#include <catch.hpp>


SCENARIO("init") 
{
    forward_list<int> s;
    REQUIRE(s.count() == 0);
    REQUIRE(!s.empty());
}
