#pragma once
#include <iostream> 
#include <iterator>
#include <vector>
#include <map>
#include <unordered_map>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;



class AdjacencyList { 
 private:  

  unordered_map<string, vector<string>> in_degree;
  unordered_map<string, int> out_degree;
  map<string, float> rank;
  void PrintPageRank();

 public:  

  void PageRank(int n);
  const map<string,float> GetPageRank();
  void insert_edge(string from,string to);

}; 

// used for testing purposes
const map<string,float> AdjacencyList::GetPageRank(){

  return rank;
}


void AdjacencyList::insert_edge(string from, string to){

  // incremened the number of out linkes the from url points to 
    out_degree[from]++;

  // store the in links on the to url
  in_degree[to].push_back(from);

  
  if(out_degree.find(to) == out_degree.end()){

    out_degree[to]=0;

  }
    
  if(in_degree.find(from) == in_degree.end()){

    in_degree[from] = {};

  }

}

// Prints the Page Rank of all pages after p power interations in ascending alphabetical order of webpages and rounding rank to two decimal places
void AdjacencyList::PrintPageRank(){
  string output="";
  for(auto it = rank.begin(); it != rank.end();it++){
    cout<<fixed;
    cout<< it->first << " "<< setprecision(2)<<it->second << endl;
  }
}

// Simplified Page Rank Algorithm for p power iterations
void AdjacencyList::PageRank(int p){

  // initialize the rank of all the pages to be 1/|v| at iteration 0

  for(auto it = in_degree.begin(); it != in_degree.end();it++){

    rank[it->first] = 1.0f / (float) in_degree.size();

  }

  // temporarily store the page rank of the current iteration
  map<string,float> new_rank;

  for(int i = 1; i<p;i++){

    // find the page rank of the current iteration by taking the previous page rank of the url that points to it and dividing it by its' outdegree

    for(auto it = in_degree.begin(); it!= in_degree.end();it++){

      vector<string> fromLinks;

      fromLinks = in_degree[it->first];
      
      float sum = 0.0f;

      if(fromLinks.size()!=0){

        for(int i = 0; i<fromLinks.size();i++){

        // Pr(A) = sum of the previous page rank / outdegree of each page pointing to the current page 

        int outdegree = out_degree[fromLinks[i]];
        float prevRank = rank[fromLinks[i]];

        sum += prevRank / (float)outdegree;

        }
         // store the current page rank
        new_rank[it->first] = sum;
      }
      else{
        new_rank[it->first] =0;
      }

    }
    // update all the page ranks 
    rank = new_rank;
  }
 PrintPageRank(); 
}