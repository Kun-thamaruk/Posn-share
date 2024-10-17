#include <bits/stdc++.h>
using namespace std;
int r[100010],l[100010],a[100010];
int main() {
    int q,ans,ma;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        for (int i=1;i<=n;i++) {cin >> a[i];}
        ma=ans=-1e9;
        for (int i=1,sum=0;i<=n;i++) {
            sum+=a[i];
            sum = max(sum,0);
            ma = max(sum,ma);
            l[i] = ma;
        }
        ma=ans=-1e9;
        for (int i=n,sum=0;i>=1;i--) {
            sum+=a[i];
            sum = max(sum,0);
            ma = max(sum,ma);
            r[i] = ma;
        }
        for (int i=1;i<=n;i++) {ans = max(ans,l[i]+r[i+1]);}
        cout << ans << "\n";
    }
    return 0;
}