#include <bits/stdc++.h>
using namespace std;
int pi[110],wi[110],dp[110][10100];
int main() {
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=n;i++) {cin >> pi[i] >> wi[i];}
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {    
            if (j<wi[i]) {dp[i][j] = dp[i-1][j];}
            else {dp[i][j] = max(dp[i-1][j],dp[i-1][j-wi[i]]+pi[i]);}
        }
    }
    cout << dp[n][m] << "\n";
    return 0;
}