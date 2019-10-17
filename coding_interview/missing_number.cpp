#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&v,int n){
    for(int i = 0; i < n ;i++)
        if(v[i] > 0)
            return i + 1;
    return n + 1;
}

int main(){
    int n;
    cin >> n ;
    vector<int> v(n);
    for(int i = 0; i < n;i++)
        cin >> v[i];

    for(int i = 0; i < n;i++)
    {
        if(v[i] > 0 && v[i] < n)
        {
            v[v[i] -1 ] = v[v[i] - 1]*-1;
        }
    }

    cout << find(v,n) << endl;
    
}