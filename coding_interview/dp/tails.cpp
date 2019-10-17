#include<bits/stdc++.h>
using namespace std;

int number(int n){

    if(n == 1 || n == 2)
        return n;
    return number(n - 1) + number(n - 2);
    

}

int main(){
    int n;
    cin >> n;

    cout << number(n) << endl;
}