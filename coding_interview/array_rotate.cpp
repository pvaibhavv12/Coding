#include<bits/stdc++.h>
using namespace std;

int gcdab(int a,int b){
    if( b == 0)
        return a;
    return gcdab(b,a % b);
}

void rotate(vector<int>&v,int n,int m){

    int gcd = gcdab(n,m);

    for(int i = 0; i < gcd;i++){

        int j = i;
        int temp = v[j];
        while(true){
            int k = j + m;
            if(k >= n)
                k = k - n;
            if(k == i)
                break;
            v[j] = v[k];
            j = k;

        }
        v[j] = temp;

    }

}

int main(){

    int n;
    cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i < n;i++)
        cin >> v[i];

    int m;
    cin >> m;

    rotate(v,n,m);
    for(int i = 0; i < n;i++)
        cout << v[i] << " ";
    cout << endl;


}