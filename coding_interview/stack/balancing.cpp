#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool is_beginning_bracket(char c){
    return (c == '(' || c == '{' || c == '[');
}
char is_ending_of_req(char c){
    switch (c)
    {
    case ')':
        return '(';
    case '}':
        return '{';
    case ']':
        return '[';
    default:
        break;
    }
}
bool is_balancing(string st){
    stack<char> s;
    for(auto i : st){
        if(!isalpha(i))
        {
            if(is_beginning_bracket(i))
                s.push(i);
            else{
                if(!s.empty() && s.top() == is_ending_of_req(i))
                    s.pop();
                else
                    return false;
            }
        }
    }

    if(s.empty())
        return true;
    else
        return false;

}

int main(){
    string s;
    cin >> s;
    
    if(is_balancing(s))
        cout << "The sequence is balanced \n";
    else
        cout << "Not balanced \n";
}