#include <bits/stdc++.h>
using namespace std;
struct A {
    int v,w,fuel,ticket;
    bool operator < (const A &o) const {
        if (w!=o.w) {return w>o.w;}
        else {return fuel<o.fuel;}
    }
};
priority_queue <A> pq;
vector <A> g[110];
int pri[110],dis[110][110][3];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i=1;i<=n;i++) {cin >> pri[i];}
    int st,ed,capp,m;
    cin >> st >> ed >> capp >> m;
    while (m--) {
        int u,v,w;
        cin >> u >> v >> w;
        g[u].push_back({v,w,0,0});
        g[v].push_back({u,w,0,0});
    }
    for (int i=1;i<=n;i++) {
        for (int j=0;j<=capp;j++) {
            dis[i][j][0] = dis[i][j][1] = 2e9;
        }
    }
    dis[st][0][1] = 0;
    pq.push({st,0,0,1});
    while (!pq.empty()) {
        A now = pq.top();
        pq.pop();
        if (now.v==ed && now.fuel==capp) {cout << now.w;return 0;}
        if (now.ticket) {
            if (dis[now.v][capp][0]>now.w) {
                dis[now.v][capp][0] = now.w;
                pq.push({now.v,now.w,capp,0});
            }
        }
        if (now.fuel+1<=capp) {
            if (dis[now.v][now.fuel+1][now.ticket]>now.w+pri[now.v]) {
                dis[now.v][now.fuel+1][now.ticket] = now.w+pri[now.v];
                pq.push({now.v,now.w+pri[now.v],now.fuel+1,now.ticket});
            }
        }
        for (auto x:g[now.v]) {
            if (now.fuel<x.w) {continue;}
            if (dis[x.v][now.fuel-x.w][now.ticket]>now.w) {
                dis[x.v][now.fuel-x.w][now.ticket] = now.w;
                pq.push({x.v,now.w,now.fuel-x.w,now.ticket});
            }
        }
    }

    return 0;
}