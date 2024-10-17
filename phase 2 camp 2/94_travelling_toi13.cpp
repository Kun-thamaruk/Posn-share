#include <bits/stdc++.h>
using namespace std;
struct A{
    int v,w;
    bool operator < (const A&o) const {
        return w>o.w;
    }
};
priority_queue <A> pq;
vector <A> g[10010];
int dis[10010],disr[10010];
int main() {
    int n,m,st,en,limit;
    cin >> n >> m >> st >> en >> limit;
    int u,v,w;
    while (m--) {
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    for (int i=0;i<n;i++) {dis[i] = 1e9;}
    dis[st] = 0;
    pq.push({st,0});
    while (!pq.empty()) {
        A now = pq.top();
        pq.pop();
        for (auto x:g[now.v]) {
            if (now.w+x.w < dis[x.v]) {
                dis[x.v] = now.w+x.w;
                pq.push({x.v,dis[x.v]});
            }
        }
    }
    int res=dis[en];
    if (dis[en]<= limit) {cout << en << dis[en] << "0\n";return 0;}
    int minn=1e9,pos = en;
    for (int i=0;i<n;i++) {disr[i] = 1e9;}
    disr[en] = 0;
    pq.push({en,0});
    while (!pq.empty()) {
        A now = pq.top();
        pq.pop();
        for (auto x:g[now.v]) {
            if (now.w+x.w<disr[x.v]) {
                disr[x.v] = now.w+x.w;
                pq.push({x.v,disr[x.v]});
                if (disr[x.v] <= minn && dis[x.v]<=limit) {
                    if (disr[x.v]==minn) {pos = min(pos,x.v);}
                    else {pos=x.v;}
                    minn = min(minn,disr[x.v]);
                }
            }
        }
    }
    cout << pos << dis[pos] << minn << "\n";
    return 0;
}