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

int count(Adj_list &graph,int start,int nodes,int l){
    vec_bool visited(nodes,false);
    vec_int level(nodes,0); 
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while(!q.empty()){
        int s = q.front();
        q.pop();

        for(auto i = graph[s].bg;i != graph[s].ed;i++){
            if(!visited[*i]){
                visited[*i] = true;
                q.push(*i);
                level[*i] = level[s] + 1;
            }
        }
    }
    int c = 0;
    for(int i = 0;i<nodes;i++)
        if(level[i] == l)
            c++;

    return c;

}

int main(){
    Adj_list graph;
    addEdge(graph,0, 1); 
    addEdge(graph,0, 2); 
    addEdge(graph,1, 3); 
    addEdge(graph,2, 4); 
    addEdge(graph,2, 5); 
  
    int level = 2; 
    cout << count(graph,0,6,2) << endl;
}