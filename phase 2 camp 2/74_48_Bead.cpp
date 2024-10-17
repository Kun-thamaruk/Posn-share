#include <bits/stdc++.h>
using namespace std;
#define maxx 2147483647
int n,color[105][105],dp[105][105];
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        cin >> n;
        for (int i=0;i<n;i++) {cin >> color[i][i];}
        for (int i=2;i<=n;i++) {
            for (int j=0;j<n-i+1;j++) {
                int k=j+i-1,minn = maxx;
                int temp;
                for (int h=j;h<=k-1;h++) {
                    temp = dp[j][h] + dp[h+1][k]+color[j][h]*color[h+1][k];
                    if (temp < minn) {
                        color[j][k] = (color[j][h]+color[h+1][k])%100;
                        minn = temp;
                        dp[j][k] = minn;
                    } 
                }
            }
        }
        cout << dp[0][n-1] << "\n";
    }
    return 0;
}