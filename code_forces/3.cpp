#include<bits/stdc++.h>
using namespace std;
typedef long long int li;

li gcd(li a,li b){
    if(b == 0)
        return a;
    return gcd(b,a%b);
}

li gcd_array(vector<li>&v,li n){
    li ans = v[0];
    for(auto i : v)
        ans = gcd(ans,i);
    return ans;
}

li number_of_factors(li ans){
    li number = 0;
    for(li i = 1;i <= sqrt(ans);i++){
        if(ans % i == 0)
        {
            if(ans / i == i)
                number++;
            else
                number+=2;
        }
    }
    return number;
}

int main(){
    li n ;
    cin >> n;
    vector<li> v(n);
    for(li i = 0;i < n;i++)
        cin >> v[i];
    cout << number_of_factors(gcd_array(v,n)) << endl;
}