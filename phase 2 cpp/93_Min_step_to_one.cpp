#include <bits/stdc++.h>
using namespace std;
//1e6 == 1000100
int dp[1000100];

int main() {
    int q;
    scanf("%d",&q);
    dp[1]=0;
    for (int i=2;i<=1e6;i++) {
        dp[i] = dp[i-1]+1;
        if (i%2==0) dp[i] = min(dp[i],dp[i/2]+1);
        if (i%3==0) dp[i] = min(dp[i],dp[i/3]+1);
    }//precomputation การสร้างคำตอบก่อน
    while (q--) {
        int p;
        scanf("%d",&p);
        printf("%d\n",dp[p]);
    }
    return 0; 
}
/*
2 4 7
*/