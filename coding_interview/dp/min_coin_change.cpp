#include<iostream>
#include<vector>
using namespace std;
int max_value = 100000;

int min_coin_change(int change){
    int coins[3] = {1,10,25};

    vector<int> dp(change+1,max_value);
    dp[0] = 0;
    for(int i = 1;i<=change;i++){
        for(auto j : coins){
            if(i >= j){
                int temp = dp[i - j];
                dp[i] = min(temp+1,dp[i]);
            }
        }
    }
    return dp[change];
}

int main(){
    int change;
    cin >> change;
    cout << min_coin_change(change) << endl;
}