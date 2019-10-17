#include<bits/stdc++.h>
using namespace std;

bool sum_set(vector<int>&v,int n,int s){
    bool dp[n+1][s+1];
    for(int i = 0;i <= n;i++)
        dp[i][0] = true;
    for(int i = 1;i <= s;i++)
        dp[0][i] = true;
    
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= s; j++){
            if(j < v[i])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j-v[i]];
        }
    }
    return dp[n][s];
}



int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n;i++)
        cin >> v[i];


    int sum;
    cin >> sum;

    cout << sum_set(v,n,sum) << endl;
    
}