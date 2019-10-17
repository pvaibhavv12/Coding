#include<bits/stdc++.h>
using namespace std;

int ways_friend(int n){
    vector<int> dp(n+1,0);
    
    dp[1] = 1;
    dp[2] = 2;
    for(int i = 3;i <= n;i++)
        dp[i] = dp[i-1] + (i - 1)*dp[i-2];
    
    return dp[n];
}

int main(){
    int n;
    cin >> n;
    cout << ways_friend(n) << endl;
}