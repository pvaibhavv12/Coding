#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> b(n),r(n);
        for(int i = 0; i < n;i++)
            cin >> b[i];
        for(int i = 0; i < n;i++)
            cin >> r[i];

        for(int i = 0; i < n;i++)
        {
            for(int  j=0; j < n;j++){
                b[i] = min(b[i],r[j]);
                r[j] = min(b[i],r[j]);
            }
        }

        int r_count = 0,b_count = 0;
        for(int i = 0; i < n;i++){
            if(b[i] != 0)
                b_count++;
            if(r[i] != 0)
                r_count++;
        }
        if(r_count > b_count)
            cout << "Blue" << endl;
        else if(r_count == b_count)
            cout << "Tie" << endl;
        else
            cout << "Red" << endl;
        
    }
}