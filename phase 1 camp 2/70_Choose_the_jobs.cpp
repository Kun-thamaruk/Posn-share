#include <bits/stdc++.h>
using namespace std;
struct A {
    int ai,bi,ci;
    bool operator < (const A&o) const {
        return bi < o.bi;
    }
}a[100010];
int dp[100010],b[100010];
int main() {
    int n;
    cin >> n;
    for (int i=1;i<=n;i++) {cin >> a[i].ai >> a[i].bi >> a[i].ci;}
    sort(a+1,a+n+1);
    for (int i=1;i<=n;i++) {b[i] = a[i].bi;}
    for (int i=1;i<=n;i++) {
        int idx = lower_bound(b+1,b+n+1,a[i].ai)-b-1;
        dp[i] = max(dp[i-1],dp[idx]+a[i].ci);
    }
    cout << dp[n];
    return 0;
}