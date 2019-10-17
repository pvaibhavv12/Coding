#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string a,b;
    cin >> n;
    cin >> a;
    cin >> b;

    int j = 0;
    int count = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] == b[j])
            j++;
        else
        {
            count = i+1 ;
            j = 0;
        }
    }
    cout << count << endl;
}