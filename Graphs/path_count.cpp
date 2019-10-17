#include<bits/stdc++.h>
using namespace std;
typedef unordered_map<int,vector<int>> Adj_list;
#define print cout<< 
#define vec_int vector<int>
#define vec_bool vector<bool>
#define bg begin()
#define ed end()

void addEdge(Adj_list &graph,int vertex,int connection){
    graph[vertex].push_back(connection);
 //   graph[connection].push_back(vertex);
}

void path_count(Adj_list &graph,vec_bool &visited,int source,int destination,int &count){
    visited[source] = true;
    if(source == destination)
        count++;
    for(auto i = graph[source].bg;i != graph[source].ed;i++){
        if(!visited[*i])
            path_count(graph,visited,*i,destination,count);
    }
    visited[source] = false; 
}

int main(){
    Adj_list graph;
    addEdge(graph,0, 1); 
    addEdge(graph,0, 2); 
    addEdge(graph,0, 3); 
    addEdge(graph,2, 0); 
    addEdge(graph,2, 1); 
    addEdge(graph,1, 3); 
    int count = 0;
    vec_bool visited(4,false);
    cout << path_count(graph,visited,2,3,count);
}