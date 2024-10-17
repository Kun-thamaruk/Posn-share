#include <bits/stdc++.h>
using namespace std;
int fong[100010];
int froot(int i) {
    if (fong[i] == i) {return i;}
    return fong[i] = froot(fong[i]);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    cin >> n >> q;
    for (int i=0;i<n;i++) {
        fong[i] = i;
    }
    while (q--) {
        int a,b,ra,rb;
        char opr;
        cin >> opr >> a >> b;
        ra = froot(a);
        rb = froot(b);
        if (opr == 'c') {
            fong[rb] = fong[ra];
        }
        if (opr == 'q') {
            if (rb == ra) {cout << "yes\n";}
            else {cout << "no\n";}
        }
    }
    return 0;
}