#include<bits/stdc++.h>
using namespace std;

int pre(char a){
    switch (a)
    {
    case '+':
        return 1;
    case '-':
        return 1;
    case '*':
        return 2;
    case '/':
        return 2;
    
    default:
        return -10;
        break;
    }
}

string to_postfix(string st){
    stack<char> s;
    string ans = "";

    for(auto i : st){
        if(isdigit(i))
            ans+=i;
        else
        {
            if(i == '(' )
                s.push(i);
            else if(i == ')')
            {
                while(s.top() != '('){
                    ans+=s.top();
                    s.pop();
                }
                s.pop();
            }
            else if(i == '*' || i == '/'|| i == '+' || i == '-'){
                while(!s.empty() && pre(s.top()) > pre(i) ){
                    ans+=s.top();
                    s.pop();
                }
                s.push(i);
            }
        }
    }
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }

    return ans;

}

int main(){
    string s;
    cin >> s;

    cout << to_postfix(s) << endl;
}