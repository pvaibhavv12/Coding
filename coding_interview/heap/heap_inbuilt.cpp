#include<bits/stdc++.h>
using namespace std;

void display_vector(vector<int>&v){
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> v = {5,1,2,9,7,5,3,10};
    priority_queue<int> pq;
    make_heap(v.begin(),v.end());
    display_vector(v);
}