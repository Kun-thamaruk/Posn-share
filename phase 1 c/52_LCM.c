/*
task : lcd
*/
#include <stdio.h>

long long gcd(long long a,long long b){
    if (a%b==0) {return b;}
    return gcd(b,a%b);
}

int main() {
    int i;
    long long ans,num,q;
    scanf("%lld %lld",&q,&ans);
    for (i=0;i<q-1;i++){
        scanf("%lld",&num);
        ans = (ans*num)/gcd(num,ans);
    }
    printf("%lld\n",ans);
    return 0;
}