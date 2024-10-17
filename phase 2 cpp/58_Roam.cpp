#include <bits/stdc++.h>
using namespace std;

const int MaxN = 1e5 + 10;
int dp[MaxN];

int main() {
    int n,m;
    cin >> n >> m;
    for (int i=1;i<=m;i++) {
        int l,r;
        cin >> l >> r;
        dp[l] += 1;
        dp[r + 1] -= 1;
    }
    for (int i=1;i<=n+1;i++){dp[i] += dp[i - 1];}
    int q;
    cin >> q;
    while (q--) {
        int idx;
        cin >> idx;
        cout << dp[idx] << "\n";
    }
    
    return 0;
}
/*
5 2
1 3
2 4
3
3
5
4
*/