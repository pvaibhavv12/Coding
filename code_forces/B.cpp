#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,odd = 0,even = 0;
    cin >> n;
    vector<long long> v(n);

    for(int i = 0; i < n;i++){
        cin >> v[i];
        if(v[i] % 2 == 0)
            even++;
        else
            odd++;

    }
    if(even && odd)
        sort(v.begin(),v.end());

    for(auto i : v)
        cout << i << " ";
    cout << endl;
}