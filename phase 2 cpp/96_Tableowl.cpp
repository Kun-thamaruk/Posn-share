#include <bits/stdc++.h>
using namespace std;

int a[1010][1010];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,mn;
    cin >> n >> m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    for (int i=n-2;i>=0;i--) {
        for (int j=0;j<m;j++) {
            mn = a[i+1][j];
            if (j>0&&a[i+1][j-1]<mn) mn=a[i+1][j-1];
            if (j<m-1&&a[i+1][j+1]<mn) mn=a[i+1][j+1];
            a[i][j]+=mn;
        }
    }
    mn = a[0][0];
    for (int i=0;i<m;i++) {
        if (a[0][i]<mn){
            mn = a[0][i];
        }
    }
    cout << mn << '\n';
    return 0;
}