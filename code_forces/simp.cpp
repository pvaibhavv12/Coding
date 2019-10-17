#include<bits/stdc++.h>
using namespace std;

int main(){

    int y,b,r;
    cin >> y >> b >> r;

    bool got = false;
    int sum;
    while(!got && y > 0) 
    {
        if(y + 1 <= b && y + 2 <= r)
        {
            got = true;
            sum = 3 * y + 3;
        }
        y--;
    }
    cout << sum << endl;
}