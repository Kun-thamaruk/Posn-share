#include <bits/stdc++.h>
using namespace std;
long long a[100010];
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        int n,k;
        cin >> n >> k;
        long long la,va;
        cin >> la;
        for (int i=2;i<=n;i++) {
            cin >> va;
            a[i-1] = va-la;
            la = va;
        }
        sort(a+1,a+n);
        long long sum=0;
        for (int i=1;i<=n-k;i++) {sum+=a[i];}
        cout << sum;
    }
    return 0;
}