#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n*2);
    for(int i = 0; i < n*2;i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());
    long int sum1 = accumulate(v.begin(),v.begin() + n,0);
    long int sum2 = accumulate(v.begin() + n,v.end(),0);
    
    if(sum1 == sum2)
        cout << -1 << endl;
    else
    {
        for(auto i : v)
            cout << i << " ";
        cout << endl;
    }
}