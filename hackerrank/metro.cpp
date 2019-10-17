#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,m,k,ans;
    cin >> n >> m >> k;
    ans = n * m;
    map<int,vector<int>> m;
    //cout << ans << endl;
    while(k--){
        ll r,c1,c2;
        cin >> r >> c1 >> c2 ;
        

        if(m[r.size() == 0]) {
            m[r].push_back(c1);
            m[r].push_back(c2);
            ans = ans - (abs(c1 - c2) + 1);
        }else{
            if(c2 < m[r][0] || c1 > m[r][1]){
                ans = ans - (abs(c1 - c2) + 1);
                
            }
        }
    }

    cout << ans << endl;
}