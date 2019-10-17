#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n,m;
    cin >> n >> m;

    if(m % n != 0)
        cout << -1 << "\n";
    else {
        
        long int one = log(m/n)/log(2);
        cout << one << endl;
        long int remaning = m - n*pow(2,one);
        if(remaning)
            one+=log(remaning/n)/log(3);

        cout << one << "\n";

    }
}