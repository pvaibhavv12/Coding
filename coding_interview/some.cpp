#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n;i++)
        cin >> a[i];

    int i  = 0;
    int j = n - 1;
    while(i < j)
    {
        if(a[i] < a[j])
        {
            cout << j - i << endl;
            break;
        }else{
            
        }
    }
}