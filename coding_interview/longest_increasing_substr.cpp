#include<bits/stdc++.h>
using namespace std;

int longest_increasing_str(vector<int>&v,int n){
    vector<int> len(n,1);

    for(int i = 0; i < n;i++){
        for(int j = 0; j < i;j++){
            if(v[i] > v[j] && len[i] < len[j] + 1)
                len[i] = len[j] + 1;
        }
    }

    return *max_element(len.begin(),len.end());
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n;i++)
        cin >> v[i];

    cout << longest_increasing_str(v,n) << endl;
}