#include<bits/stdc++.h>
using namespace std;

/*int find_count(vector<int>&v,int n){
    int dp[n+1][v.size()];
    for(int  i = 0; i < v.size();i++)
        dp[0][i] = 1;
    
    for(int i = 1; i <= n;i++){
        for(int j = 0;j < n;j++){
            int x = (i - v[j] >= 0 )?dp[i-v[j]][j]:0;
            int y = (j > 0)?dp[i][j-1]:0;
            dp[i][j] = x + y;
        }
    }
    return dp[n][v.size()-1];
}*/

int another(vector<int>&v,int n,int m){
    int dp[n+1];
    dp[0] = 1;
    for(int i = 0;i < m;i++){
        for(int j = v[i]; j <= n;j++)
            dp[j] += dp[j - v[i]];
    }
    return dp[n];
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n;i++)
        cin >> v[i];

    int m;
    cin >> m;

    cout << find_count(v,m);
}