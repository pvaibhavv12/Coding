#include<bits/stdc++.h>
#include<vector>
using namespace std;

int ans(vector<int> &v,int i,int j,int sum){

    if(i == j - 1)
        return max(v[i],v[j]);
    
    return max((sum - ans(v,i+1,j,sum - v[i])),(sum - ans(v,i,j-1,sum - v[j])));

}

int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n;i++)
        cin >> v[i];

    int sum = accumulate(v.begin(),v.end(),0);
    cout << ans(v,0,n-1,sum) << endl;
    

}