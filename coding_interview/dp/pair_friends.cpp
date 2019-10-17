#include<bits/stdc++.h>
using namespace std;

int count_pair(int n){
    vector<int> v(n+1,0);
    
    for(int i = 0;i <= n;i++){
        if(i <= 2)
            v[i] = i;
        else
            v[i] = v[i-1] + (i-1)*v[i-2];
    }
    return v[n];
}

int main(){
    int n;
    cin >> n;

    cout << count_pair(n) << endl;
}   