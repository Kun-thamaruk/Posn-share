#include <bits/stdc++.h>
using namespace std;
struct HEAP {
    int id,d;
    bool operator < (const HEAP &o) const {
        if (d != o.d) {return d > o.d;}
        return id > o.id;
    }
};
priority_queue <HEAP> qu;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    for (int i=1;i<=k;i++) {qu.push({i,0});}
    for (int i=1;i<=n;i++) {
        int t;
        cin >> t;
        HEAP top = qu.top();
        qu.pop();
        cout << top.id;
        cout << "\n";
        qu.push({top.id,top.d+t});
    }
    return 0;
}