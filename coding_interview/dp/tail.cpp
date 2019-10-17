#include<bits/stdc++.h>
using namespace std;


int count(int n){
    vector<int> v(n+1);

    if(n == 1 || n == 2)
        return n;
    v[1] = 1;
    v[2] = 2;

    for(int i = 3;i < n + 1;i++)
        v[i] = v[i-1] + v[i-2];
    return v[n]; 
    
}

int main(){
    cout << count(4) << endl;
}