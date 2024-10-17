#include <bits/stdc++.h>
using namespace std;

const int MaxN = 1e3 + 10;
int a[MaxN][MaxN];
int dp[MaxN][MaxN];

int main() {
    int r,c;
    cin >> r >> c;
    for (int i=1;i<=r;i++) {
        for (int j=1;j<=c;j++){
            cin >> a[i][j];
        }
    } 
    for (int i=1;i<=r;i++) {
        for (int j=1;j<=c;j++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + a[i][j];
        }
    }
    int q;
    cin >> q;
    while (q--){
        int sti,stj,eni,enj;
        scanf("%d %d %d %d",&sti,&stj,&eni,&enj);
        sti++,stj++,eni++,enj++;
        printf("%d\n",dp[eni][enj]-dp[sti-1][enj]-dp[eni][stj-1]+dp[sti-1][stj-1]);
    }
    
    return 0;
}