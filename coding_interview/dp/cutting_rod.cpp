#include<iostream>
#include<vector>
using namespace std;

int max_value(vector<int>&costs,int n){
    vector<int> v(n+1);
    v[0] = 0;
    for(int i = 1; i <= n;i++){
        int max_cost = -2;
        for(int j = 0;j < i;j++)
            max_cost = max(max_cost,v[j] + costs[i-j-1]);
        v[i] = max_cost;
    }
    return v[n];
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n;i++)
        cin >> v[i];
    cout << max_value(v,n) << endl;
}