#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,mn=1000000000,mx=0,a;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a;
        if (a-mn>mx) {mx = a-mn;}
        if (a<mn) {mn=a;}
    }
    cout << mx;
    return 0;
}