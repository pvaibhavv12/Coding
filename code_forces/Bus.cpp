#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,min_wait_time,wait_time_index;
    cin >> n >> t;
    min_wait_time = INT_MAX;
    
    for (int i = 0; i < n; i++)
    {
        int start,rep,wait_time;
        cin >> start >> rep ;

        wait_time = (start - t >= 0) ? start - t : (rep - (abs(start - t) % rep)) % rep;

        if(min_wait_time > wait_time) {
            min_wait_time = wait_time;
            wait_time_index = i + 1;
        } 

    }

    cout << wait_time_index << endl;
    
}