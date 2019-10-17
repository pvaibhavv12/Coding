#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the highestValuePalindrome function below.
string highestValuePalindrome(string s, int n, int k) {
    string temp = s;
    int i  = 0;
    for(i = 0 ; i < n / 2 && k; i++){
      if (s[i] != s[n - 1 - i]){
        char a = max(s[i],s[n - 1 - i]);
        if(s[i] < a)
            s[i] = a;
        else
            s[n - i - 1] = a;
        k--;
      }
    }

    if(k == 0 && i < n / 2)
        return "-1";
    if(k == 0 && i == n / 2)
        return s;
    if( k == 1 && n % 2 == 1){
        s[n/2] = '9';
        return s;
    }
    for (i = 0; i < n / 2 && k; i++){
        if(s[i] != '9'){
            if(s[i] != temp[i] || s[n - 1 - i] != temp[n-1-i]){
                s[i] = '9';
                s[n-1-i] = '9';
                k--;
            }else{
                if( k >=2 ){
                    s[i] = '9';
                    s[n-1-i] = '9';
                    k = k - 2;
                }
            }
        }
    }

    if (k == 1 && n % 2 == 1)
      s[n / 2] = '9';

    return s;
}

int main()
{
    int n , k;
    string s;
    cin >> n >> k;
    cin >> s;

    cout << highestValuePalindrome(s,n,k) << endl;
}


