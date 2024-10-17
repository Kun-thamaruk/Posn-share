#include <bits/stdc++.h>
using namespace std;

int dp[110];

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    dp[0]=1;
    int n;
    for (int i=0;i<=100;i++) {
        if (i>=6&&dp[i-6]==1) dp[i]=1;
        if (i>=9&&dp[i-9]==1) dp[i]=1;
        if (i>=20&&dp[i-20]==1) dp[i]=1;
    }
    cin >> n;
    if (n<6) {
        cout << "no" << '\n';
        return 0;
    }
    for (int i=6;i<=n;i++) {
        if (dp[i]) {cout << i << '\n';}
    }
    return 0;
}