#include <bits/stdc++.h>
using namespace std;
int mod(int a,int b,int c) {
    if (b==0) return 1;
    int t = mod(a,b/2,c);
    if (b%2==0) return (t*t)%c;
    return (((t*t)%c)*a)%c;
}
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int q,a,b,c;
    cin >> q;
    while (q--) {
        cin >> a >> b >> c;
        cout << mod(a,b,c) << "\n";
    }
    return 0;
}