#include <iostream> 
#include <iterator>
#include <vector>
#include <map>
#include <unordered_map>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;
#include "Graph.h"

using namespace std;


int main() 
{ 
    // int no_of_lines, power_iterations; 
    // std::string from, to; 
    // std::cin >> no_of_lines; 
    // std::cin >> power_iterations; 
    // for(int i = 0; i < no_of_lines; i++) { 
    //     std::cin >> from; 
    //     std::cin >> to; 
    //     // Do Something 
    // } 
    // //Create a graph object 
    // //Created_Graph.PageRank(power_iterations); 

    AdjacencyList graph;
    graph.insert_edge("google.com","gmail.com");
    graph.insert_edge("google.com","maps.com");
    graph.insert_edge("facebook.com","ufl.edu");
    graph.insert_edge("ufl.edu","google.com");
    graph.insert_edge("ufl.edu","gmail.com");
    graph.insert_edge("maps.com","facebook.com");
    graph.insert_edge("gmail.com","maps.com");

    graph.PageRank(2);








} 