#include <bits/stdc++.h>
using namespace std;
int dp[300];
int main() {
    /*ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);*/
    int n,k,mark,w,sum;
    cin >> n >> k;
    for (int i=1;i<(1<<k);i++) {dp[i]=1e9;}
    for (int i=1;i<=n;i++) {
        cin >> w;
        sum=0;
        for (int j=0;j<k;j++) {
            cin >> mark;
            if (mark) sum+=(1<<j);
        }
        for (int j=0;j<(1<<k);j++) {dp[j|sum] = min(dp[j|sum],dp[j]+w);};
    }
    cout << dp[(1<<k)-1] << "\n";
    return 0;
}