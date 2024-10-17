#include <bits/stdc++.h>
using namespace std;

int n,m;
struct A{
    int x[10];
    bool operator < (const A&o) const {
        for (int i=0;i<m;i++) {
            if (x[i]!=o.x[i]) return x[i]<o.x[i];
        }
    }
} a[11000];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> a[i].x[j];
        }
    }
    sort(a,a+n);
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++){
            cout << a[i].x[j];
        }
        cout << "\n";
    }
    return 0;
}