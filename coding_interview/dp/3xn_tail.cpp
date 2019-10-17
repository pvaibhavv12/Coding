#include<iostream>
using namespace std;

int no_ways(int n){
    int A[n+1],B[n+1];
    A[0] = 1;A[1] = 0;
    B[0] = 0;B[1] = 1;

    for(int i = 2;i < n+1 ; i++){
        A[i] = A[i-2] + 2*B[i-1];
        B[i] = A[i-1] + B[i-2];
    }

    return A[n];
}


int main(){
    int n;
    cin >> n;
    cout << no_ways(n) << endl;
}