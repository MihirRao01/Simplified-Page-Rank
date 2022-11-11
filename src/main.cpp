#include <sstream>
#include "Graph.h"



int main() 
{ 

    AdjacencyList graph;

    // read in the first number of lines 

    int n = 0;
    cin>> n;

    // read in power iterations;

    int p;
    cin>> p;

    // read in all the urls

    for(int i = 0; i < n; i++){
        //cout<<"line : "<<i<<endl;

        string from,to;

        cin >> from;
        cin >> to;

        // create the adjacency list
        graph.insert_edge(from,to);

        

    }

    // calculate page rank
    graph.PageRank(p);


return 0;

   








} 