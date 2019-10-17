#include<bits/stdc++.h>
using namespace std;

bool is_clock(vector<int>&v,int n){
    int decerase = 0;
    for(int i = 1;i <= n;i++){
        if(v[i%n] < v[i-1])
            decerase++;
    }

    return decerase == 1 || decerase == 0;
}

bool is_counter_clock(vector<int>&v,int n){
    int decerase = 0;
    for(int i = 1;i <= n;i++){
        if(v[i%n] > v[i-1])
            decerase++;
    }

    return decerase == 1 || decerase == 0;
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        
        for(int i = 0; i < n;i++)
            cin >> v[i];

        if( is_clock(v,n) || is_counter_clock(v,n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}