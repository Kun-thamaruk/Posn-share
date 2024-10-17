#include <bits/stdc++.h>
using namespace std;

vector<int>v[10010];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,num;
    cin >> n >> m;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> num;
            v[i].push_back(num);
        }
    }
    sort(v,v+n);
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}