#include<bits/stdc++.h>
using namespace std;
typedef unordered_map<int,vector<int>> Adj_list;
#define print cout<< 


void addEdge(Adj_list &graph,int vertex,int connection){
    graph[vertex].push_back(connection);
 //   graph[connection].push_back(vertex);
}

void BFS(int start,Adj_list &graph,int nodes){
    
    vector<bool> visited(nodes,false);

    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        print s;

        for(auto i : graph[s]){
            //print i;
            if(!visited[i]){
                visited[i] = true;
                q.push(i);
            }
        }

    }
    

}

int main(){
    
    Adj_list graph;
    addEdge(graph,0, 1); 
    addEdge(graph,0, 2); 
    addEdge(graph,1, 2); 
    addEdge(graph,2, 0); 
    addEdge(graph,2, 3); 
    addEdge(graph,3, 3);
    BFS(2,graph,4); 
}