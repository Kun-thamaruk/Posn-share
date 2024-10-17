#include <bits/stdc++.h>
using namespace std;

int mapp[1010][1010];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,maxx=0;
    cin >> n  >> m;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            char a;
            cin >> a;
            if (a=='.') {mapp[i][j]=min(mapp[i-1][j],min(mapp[i][j-1],mapp[i-1][j-1]))+1;}
            else {mapp[i][j]=0;}
            if (mapp[i][j]>maxx) {maxx=mapp[i][j];}
        }
    }
    cout << maxx << "\n";
    return 0;
}