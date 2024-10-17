/*
task : GCD
*/
#include <stdio.h>

int gcd(int a,int b) {
    if (a%b==0) {return b;}
    return gcd(b,a%b);
}

int main() {
    int q,a,ans,num,i;
    scanf("%d %d",&q,&ans);
    for (i=0;i<q-1;i++) {
        scanf("%d",&num);
        ans=gcd(num,ans);
    }
    printf("%d\n",ans);
    return 0;
}
