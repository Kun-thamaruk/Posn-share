#include <bits/stdc++.h>
using namespace std;

int dp[46000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,n,now,sum=0,mn=1<<30,ans1,ans2;
    cin >> n;
    dp[0] = 1;
    while (n--) {
        cin >> now;
        for (i=45001;i>=now;i--) {
            if (dp[i-now]==1) {
                dp[i] = 1;
            }
        }
        sum += now;
    }
    for (i=1;i<=sum;i++) {
        if (dp[i]==1) {
            if (abs(sum-2*i) < mn) {
                mn = abs(sum-2*i);
                ans1 = i,ans2 = sum-i;
            }
        }
    }
    if (ans1>ans2) swap(ans1,ans2);
    cout << ans1 << ans2;
    return 0;
}