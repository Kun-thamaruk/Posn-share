#include <bits/stdc++.h>
using namespace std;

const int MaxN = 1e3 + 10;
const int MOD = 1e6;

int dp[MaxN][MaxN];
bool death[MaxN][MaxN];

int main() {
    int r,c,k;
    scanf("%d %d %d",&c,&r,&k);
    r++,c++;
    while (k--) {
        int i,j;
        scanf("%d %d",&j,&i);
        i++,j++;
        death[i][j] = true;
    }
    if (!death[1][1]) {dp[1][1 ] = 1;}
    for (int i=1;i<=r;i++) {
        for (int j=1;j<=c;j++) {
            if (i==1&&j==1) {continue;}
            if (death[i][j]) {dp[i][j] = 0; continue;}
            dp[i][j] = dp[i-1][j] + dp[i][j-1];
            dp[i][j] %= 1000000;
        }
    }
    printf("%d",dp[r][c]);
    return 0;
}