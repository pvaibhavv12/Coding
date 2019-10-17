#include<bits/stdc++.h>
using namespace std;

int result_two(char c,stack<int> &s){
    int n = s.top();
    s.pop();
    int m = s.top();
    s.pop();
    switch (c)
    {
    case '+':
        return n + m;
    case '-':
        return m - n;
    case '/':
        return m / n;
    case '*':
        return n * m;
    
    default:
        return 0;
        break;
    }
}

int evaluate_post(string st){
    stack<int> s;
    for(auto i : st){
        if(isdigit(i))
            s.push(i - '0');
        else{ 
            s.push(result_two(i,s));
        }
    }
    return s.top();
}

int main(){
    string s;
    cin >> s;

    cout << evaluate_post(s) << endl;
}