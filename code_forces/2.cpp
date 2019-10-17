#include<bits/stdc++.h>
using namespace std;

bool is_possible(vector<int>&v,int n){
    sort(v.begin(),v.end());
    vector<int> sides;

    for(int i = 0;i < 4*n;i+=2)
    {
        if(v[i] == v[i+1])
            sides.push_back(v[i]);
        else
            return false;
    }
    //for(auto i : sides)
    //    cout << i ;
    int i = 0,j = 2*n-1;
    int area = sides[i] * sides[j];
    //cout << area << endl;
    while(true){
        //cout << sides[i]*sides[j] << endl; 
        if(sides[i]*sides[j] != area)
            return false;
        if(i+1 == j)
            break;
        i++;
        j--;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(4*n);
        
        for(int i = 0; i < 4*n;i++)
            cin >> v[i];
        
        if(is_possible(v,n))
            cout << "YES\n";
        else
            cout << "NO\n"; 
    }
}