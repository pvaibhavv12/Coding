#include<bits/stdc++.h>
using namespace std;

string lcs(string a,string b){
    int n = a.length();
    int m = b.length();

    int dp[n+1][m+1];
    
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=m;j++){

            if(i == 0 || j == 0)
                dp[i][j] = 0;
            else if(a[i-1] == b[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }    

    int i = n,j = m;
    string rev_lcs = "";
    cout << "the lenght of common subsequence is :" << dp[n][m] << endl;

    while(i > 0 && j > 0){
        if(a[i-1] == b[j-1]){
            rev_lcs += a[i-1];
            i--; j--;
        }
        else if(dp[i-1][j] > dp[i][j-1])
            i--;
        else
            j--;
    }

    reverse(rev_lcs.begin(),rev_lcs.end());
    return rev_lcs;
}

int main(){
    string a,b;
    //cin >> a >> b;
    cout << lcs("aAGGTAB","GXTXAYB") << endl;

}