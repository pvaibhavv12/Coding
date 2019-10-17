#include<iostream>
using namespace std;

typedef unsigned long long ll;

int main(){
    ll x,y,z;
    cin >> x >> y >> z;
    ll max_value = (x + y) / z;
    ll ans;

    ll rem1 = x % z;
    ll rem2 = y % z;

    //if(rem1 + rem2 < z)
    //    ans = 0;
    //else
        ans = z - max(rem1,rem2);
    cout << max_value << " " << ans << endl;
    
}