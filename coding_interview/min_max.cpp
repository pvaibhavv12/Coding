#include<iostream>
#include<stack>
using namespace std;
#define ip(x) cin >> x

int main(){
    int n;
    ip(n);
    stack<int> s;
    for(int i = 0; i < n;i++ ){
        int temp;
        ip(temp);
        if(s.empty())
            s.push(temp);
        else
        {
            s.push(min(s.top(),temp));
        }

        cout << s.top() << endl;
    }
}