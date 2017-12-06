
#include <vector.hpp>
#include <catch.hpp>


SCENARIO("init") 
{
    forward_list<int> s;
    REQUIRE(s.count() == 0);
    REQUIRE(s.empty());
}

SCENARIO("pop") 
{
    forward_list<int> v={1, 2, 4};
    int s = v.pop_back();
    int z = v.pop_front();                     
    REQUIRE(s== 4);
    REQUIRE(v.count() == 1);                
    REQUIRE(z==1);
}
SCENARIO("init list") 
{
    forward_list<int> v={1, 2, 3, 4, 5, 6};
    int s = v.pop_back();
    REQUIRE(v.count() == 5);
    REQUIRE(s == 6);
    s = v.pop_back();
    REQUIRE(s == 5);
    REQUIRE(v.count() == 4);
    s = v.pop_back();
    REQUIRE(s == 4);
    REQUIRE(v.count() == 3);
    s = v.pop_back();
    REQUIRE(s == 3);
    REQUIRE(v.count() == 2);
    s = v.pop_back();
    REQUIRE(s == 2);
    REQUIRE(v.count() == 1);
    s = v.pop_back();
    REQUIRE(s == 1);
    REQUIRE(!v.empty());
}

SCENARIO("push") 
{
   forward_list<int> s;
    s.push_back(5);
    s.push_front(7);
    REQUIRE(s.count() == 2);
}
SCENARIO("clear") 
{
   forward_list<int> s;
   s.push_back(5);
   s.push_front(7);
   s.clear();
   REQUIRE(s.count() == 0);
}
 SCENARIO("move") 
{
   forward_list<int> s = {1, 2};
   forward_list<int> m =std:: move(s);
   REQUIRE(m.count()==2);
}

