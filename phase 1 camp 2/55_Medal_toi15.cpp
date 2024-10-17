#include <bits/stdc++.h>
using namespace std;
long long a[500010],b[500010],c[500010];
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    long long n;
    cin >> n;
    for (int i=1;i<=n;i++) {cin >> a[i];}
    for (int i=1;i<=n;i++) {cin >> b[i];}
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for (int i=1;i<=n;i++) {c[i] = a[i]+b[n-i+1];}
    sort(c+1,c+n+1);
    long long ans=0;
    for (int i=2;i<=n;i++) {ans += abs(c[i]-c[i-1]);}
    cout << ans;
    return 0;
}