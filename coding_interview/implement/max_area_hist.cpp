#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> s;
    int max_area = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int i = 0;
    while(i < n) {
        if(s.empty() || v[s.top()] <= v[i])
            s.push(i++);
        else {

            int c = s.top();
            s.pop();
            int area = v[c]*(s.empty()?i:i - s.top() - 1);
            if(area > max_area)
                max_area = area;

        }
    }

    while(!s.empty()) {
        int c = s.top();
            s.pop();
            int area = v[c]*(s.empty()?i:i - s.top() - 1);
            if(area > max_area)
                max_area = area;
    }

    cout << max_area << "\n";
}