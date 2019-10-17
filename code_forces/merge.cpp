#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--)
    {
        int n,temp,ans = 0;
        cin >> n;
        int rem_1 = 0,rem_2 = 0;
        while(n--)
        {
            cin >> temp;
            if(temp % 3 == 0)
                ans++;
            else if(temp %3 == 1)
                rem_1++;
            else if(temp % 3 == 2)
                rem_2++;
        }
        int val = min(rem_1,rem_2);
        ans = ans + val ;
        if(val == rem_1)
            ans = ans + (2*(rem_2 - val)) / 6;
        if(val == rem_2)
            ans = ans + (rem_1 - val) / 3;

        cout << ans << endl;
    }
}