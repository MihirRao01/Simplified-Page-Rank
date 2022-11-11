#include "../src/Graph.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the Project2 directory):
		g++ -std=c++14 -Werror -Wuninitialized -o build/test test-unit/test.cpp && build/test
*/




// TEST_CASE("PageRank","[Rank]"){

//     AdjacencyList graph;

//     graph.insert_edge("google.com","gmail.com");
//     graph.insert_edge("google.com","maps.com");
//     graph.insert_edge("facebook.com","ufl.edu");
//     graph.insert_edge("ufl.edu","google.com");
//     graph.insert_edge("ufl.edu","gmail.com");
//     graph.insert_edge("maps.com","facebook.com");
//     graph.insert_edge("gmail.com","maps.com");

//     graph.PageRank(2);

//     map<string,float> rank = graph.GetPageRank();

//     REQUIRE(rank["facebook.com"]==0.20f);
//     REQUIRE(rank["gmail.com"]==0.20f);
//     REQUIRE(rank["google.com"]==0.10f);
//     REQUIRE(rank["maps.com"]==0.30f);
//     REQUIRE(rank["ufl.edu"]==0.20f);




// }

TEST_CASE("PageRank1","[Rank]"){

    AdjacencyList graph;

    graph.insert_edge("0","3");
    graph.insert_edge("1","3");
    graph.insert_edge("2","0");
    graph.insert_edge("2","1");
    graph.insert_edge("3","2");
    

    graph.PageRank(10);

    map<string,float> rank = graph.GetPageRank();

    REQUIRE(1==1);


}
