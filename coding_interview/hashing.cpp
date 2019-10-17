#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,vector<int>> m;
    
    vector<pair<int,int>> v;
    for(int i = 0; i < 5; i++){
        int a,b;
        cin >> a >> b;
        v.push_back(make_pair(a,b));
    }

    for(auto i : v){
        if(m[i.first].size() == 0){
            m[i.second].push_back(i.first);
        }else{
            bool found = find(m[i.first].begin(),m[i.first].end(),i.second) != m[i.first].end();
            if(found)
                cout << i.first << " " << i.second << endl;
            else
                m[i.second].push_back(i.first);
        }
    }
    
}