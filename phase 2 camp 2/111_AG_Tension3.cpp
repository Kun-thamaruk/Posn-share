#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define FOE(x,a) for(auto& x:a)
#define vt vector
const int mxN = 1e4+10;
int d[(1<<8)][mxN];
struct Graph {
    int v,w,st;
    bool operator < (const Graph&o) const {
        return w>o.w;
    }
};
vt <Graph> adj[mxN];
priority_queue <Graph> pq;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,s,q;
    cin >> n >> m >> s >> q;
    for (int i=0;i<(1<<8);++i) {
        for (int j=0;j<=n;++j) {d[i][j]=1e9;}
    }
    d[0][s]=0;
    while (m--) {
        int u,v,w,k;
        cin >> u >> v >> w >> k;
        adj[u].push_back({v,w,1<<(k-1)});
        adj[v].push_back({u,w,1<<(k-1)});
    }
    pq.push({s,0,0});
    while (!pq.empty()) {
        int u=pq.top().v,w=pq.top().w,st=pq.top().st;
        pq.pop();
        FOE(x,adj[u]) {
            if (d[st|x.st][x.v]>w+x.w) {
                d[st|x.st][x.v]=w+x.w;
                pq.push({x.v,w+x.w,st|x.st});
            }
        }
    }
    while (q--) {
        int e,k,num=0;
        cin >> e >> k;
        for (int i=0,x;i<k;++i) {cin >> x; num |= 1<<(x-1);}
        int mn=1e9;
        for (int i=0;i<(1<<8);++i) {
            if ((num&i)==0 && d[i][e]!=1e9) {mn=min(mn,d[i][e]);}
        }
        cout << (mn!=1e9?mn:-1) << "\n";
    }
    return 0;
}