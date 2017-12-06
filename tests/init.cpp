
#include <vector.hpp>
#include <catch.hpp>


TEST_CASE("init") 
{
    forward_list<int> s;
    REQUIRE(s.count() == 0);
     REQUIRE(!s.empty());
}
TEST_CASE("pop") 
{
    forward_list<int> v={1, 2, 4);
    int s = v.pop_back();
	int z = v.pop_front();                     
    REQUIRE(s== 4);
    REQUIRE(s.count() == 1)                  
    REQUIRE(z==1);
}
TEST_CASE("init list") 
{
    forward_list<int> s={1, 2, 3, 4, 5};
    int s = v.pop_back();
    REQUIRE(s.count() == 5);
     s = v.pop_back();
    REQUIRE(s.count() == 4);
     s = v.pop_back();
    REQUIRE(s.count() == 3);
     s = v.pop_back();
    REQUIRE(s.count() == 2);
     s = v.pop_back();
    REQUIRE(s.count() == 1);
    REQUIRE(!v.empty());
}

TEST_CASE("push") 
{
   forward_list<int> s;
    s.push(5);
    s.push(7);
    REQUIRE(s.count() == 2);
}

 TEST_CASE("==") 
{
   forward_list<int> s = {1, 2, 5, 9};
   forward_list<int> m = {1, 2, 5, 9};
    REQUIRE(m == s);
}
 TEST_CASE("move") 
{
   forward_list<int> s = {1, 2, 5, 9};
   forward_list<int> m = move(s);
    REQUIRE(m == s);
}
