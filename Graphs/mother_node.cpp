#include<bits/stdc++.h>
using namespace std;
typedef unordered_map<int,vector<int>> Adj_list;
#define print(y) cout<<y<<endl

void addEdge(Adj_list &graph,int vertex,int connection){
    graph[vertex].push_back(connection);
 //   graph[connection].push_back(vertex);
}

void dfs_side(Adj_list &graph,int start,vector<bool> &visited){

    visited[start] = true;
    //print start;
    for(auto i : graph[start]){
        if(!visited[i])
            dfs_side(graph,i,visited);
    }

}
void dfs(Adj_list &graph,int nodes){
    
    
    for(int i = 0;i < nodes;i++){
        vector<bool> visited(nodes,false);
        dfs_side(graph,i,visited);
        int count = 0;
        for(auto j : visited)
        {
            if(j == true)
                count++;
        }
        if(count == nodes)
            print(i);
    }

}

int main(){
    Adj_list graph; 
    addEdge(graph,0, 1); 
    addEdge(graph,0, 2); 
    addEdge(graph,1, 3); 
    addEdge(graph,4, 1); 
    addEdge(graph,6, 4); 
    addEdge(graph,5, 6); 
    addEdge(graph,5, 2); 
    addEdge(graph,6, 0); 
    dfs(graph,7);
}