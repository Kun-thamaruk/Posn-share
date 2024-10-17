#include <bits/stdc++.h>
using namespace std;
long long dp[100010];
pair <long long,long long> a[100010];
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        long long n;
        cin >> n;
        for (long long i=1;i<=n;i++) {cin >> a[i].first >> a[i].second,a[i].second*=-1;}
        sort(a+1,a+n+1);
        long long ma=0;
        for (long long i=1;i<=n;i++) {
            long long idx  = upper_bound(dp,dp+ma,a[i].second)-dp;
            if (ma == idx) {ma++;}
            dp[idx] = a[i].second; 
        }
        cout << ma << "\n";
        memset(dp,0,sizeof dp);
    }
    return 0;
}