#include <bits/stdc++.h>
using namespace std;
struct A {
    int v,w;
    bool operator < (const A &o) const {
        return w>o.w;
    }
};
vector <A> g[1010];
priority_queue <A> heap;
int dis[1010];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,q,u,v,w;
    cin >> n >> m >> q;
    while (m--) {
        cin >> u >> v >> w;
        g[u].push_back({v,w});
    }
    memset(dis,-1,sizeof dis);
    dis[1] = 0;
    heap.push({1,0});
    while (!heap.empty()) {
        A now = heap.top();
        heap.pop();
        for (auto k:g[now.v]) {
            if (dis[k.v] == -1 || dis[k.v]>now.w+k.w) {
                dis[k.v] = now.w+k.w;
                heap.push({k.v,now.w+k.w});
            }
        }
    }
    while (q--) {
        cin >> v;
        cout << dis[v] << "\n";
    }
    return 0;
}