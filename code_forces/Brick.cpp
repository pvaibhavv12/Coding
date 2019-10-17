#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,h;
    cin >> n >> m >> h;
    vector<int> front(m);
    vector<int> left(n);
    for(int i = 0; i < m;i++)
        cin >> front[i];
    
    for(int i = 0; i < n;i++)
        cin >> left[i];

    vector<vector<int>> top(n,vector<int>(m));

    for(int i = 0; i < n;i++)
        for (int j = 0; j < m; j++)
            cin >> top[i][j];

    for(int i = 0; i < n ; i++){
        for (int j = 0; j < m; j++){
            if(top[i][j]){
                top[i][j] = min(left[i],front[i]);
            }
        }
    }

    for(int i = 0; i < n;i++){
        for (int j = 0; j < m; j++)
            cout << top[i][j] << " ";
        cout << endl;
    }


        
}