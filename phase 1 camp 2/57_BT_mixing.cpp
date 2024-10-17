#include <bits/stdc++.h>
using namespace std;
int sak[1000010];
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        for (int i=1;i<=n;i++) {cin >> sak[i];}
        long long sum=0;
        for (int i=2;i<=n;i++) {sum += max(sak[i-1],sak[i]);}
        cout << sum << "\n";
    }
    return 0;
}