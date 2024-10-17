#include <bits/stdc++.h>
using namespace std;
struct A {
    int pos,dis;
    bool operator < (const A &o) const {
        return dis>o.dis;
    }
};
priority_queue <A> heap;
vector <A> g[10010];
int dis[10010],mark[10010];
int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n,m,st,en,ch=-1;
    cin >> n >> m >> st >> en;
    int u,v,d;
    for (int i=1;i<=m;i++) {
        cin >> u >> v >> d;
        g[u].push_back({v,d});
    }
    memset(dis,-1,sizeof dis);
    heap.push({st,0});
    while (!heap.empty()) {
        A now = heap.top();
        heap.pop();
        if (mark[now.pos]>=2||now.dis==dis[now.pos]) {continue;}
        mark[now.pos]++;
        dis[now.pos] = now.dis;
        if (now.pos==en && ch!=-1) {
            if (now.dis>ch) {
                cout << now.dis << "\n";
                return 0;
            }
        } else if (now.pos==en) {ch=now.dis;}
        for (int i=0;i<g[now.pos].size();i++) {
            heap.push({g[now.pos][i].pos,now.dis+g[now.pos][i].dis});
        }
    }
    return 0;
}