#include <bits/stdc++.h>
using namespace std;
struct A {
    int town,dis;
    bool operator < (const A&o) const {
        return dis>o.dis;
    }
};
struct sd {
    int dis;
    bool operator < (const sd&o) const {
        return dis>o.dis;
    }
};
A now;
priority_queue <A> heap;
priority_queue <sd> mindis;
vector <A> g[1000010];
vector <int> st;
vector <int> en;
int dis[1000010];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin >> q;
    int n,m,u,v,w,A,B,a,b;
    while (q--) {
        cin >> n >> m;
        for (int i=0;i<m;i++) {
            cin >> u >> v >> w;
            g[u].push_back({v,w});
            g[v].push_back({u,w});
        }
        cin >> A;
        for (int i=0;i<A;i++) {
            cin >> a;
            st.push_back(a);
        }
        cin >> B;
        for (int i=0;i<B;i++) {
            cin >> b;
            en.push_back(b);
        }
        for (int i=0;i<A;i++) {
            for (int i=0;i<=m;i++) {dis[i]=1e9;}
            dis[st[i]] = 0;
            heap.push({st[i],0});
            while (!heap.empty()) {
                now = heap.top();
                heap.pop();
                for (auto x:g[now.town]) {
                    if (now.dis+x.dis<dis[x.town]) {
                        dis[x.town] = now.dis+x.dis;
                        heap.push({x.town,dis[x.town]});
                    }
                }
            }
            while(!heap.empty()) {heap.pop();}
            for (int j=0;j<B;j++) {mindis.push({dis[en[j]]});}
        }
        cout << mindis.top().dis << "\n";
        while (!mindis.empty()) {mindis.pop();}
        for (int i=0;i<m;i++) {g[i].clear();}
        en.clear();
        st.clear();
    }
    return 0;
}