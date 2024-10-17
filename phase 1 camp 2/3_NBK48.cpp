#include <bits/stdc++.h>
using namespace std;

long long pi[100010];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,q,num=0;
    cin >> n >> q;
    for (long long i=1;i<=n;i++) {
        cin >> num;
        pi[i] = pi[i-1]+num;
    }
    for (long long i=n-1;i>=1;i--) {
        pi[i] = min(pi[i],pi[i+1]);
    }
    while(q--) {
        cin >> num;
        cout << upper_bound(pi+1,pi+n+1,num)-pi-1;
    }
    return 0;
}