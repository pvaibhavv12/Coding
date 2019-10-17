#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll sum_factors(ll n){

    ll ans = 0;
    for(int i = 1; i < sqrt(n)+1 ;i++){
        if(n % i == 0){
            if (n / i == i)
                ans += i;
            else
            {
                ans += i;
                ans += n/i;
            }
        }
            
    }

    return ans-n;
}

int main(){
    ll test;
    cin >> test;
    while (test--)
    {
        ll N;
        cin >> N;
        cout << sum_factors(N) << endl;
    }
    
}