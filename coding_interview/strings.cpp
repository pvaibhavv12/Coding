#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum;
    cin >> sum;
    vector<int> v(10);
    for(int i = 0; i < 10; i++)
        cin >> v[i];

    sort(v.begin(),v.end());

    int start = 0, end = 9;

    while (start < end)
    {
        int temp = v[start] + v[end];
        if(temp == sum){
            cout << v[start] << " " << v[end] << endl;
            end--;
        }
        else if(temp > sum)
            end--;
        else if(temp < sum)
            start++;
    }
    
}