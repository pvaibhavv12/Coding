#include<stdio.h>
typedef unsigned long long ull;

int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ull n,k,ans = 0;
        scanf("%llu%llu",&n,&k);
        while(n){
            ans = ans + n % k;
            n = n / k;
            ans++;
        }
        printf("%llu\n",ans - 1);
    }
}