#include <bits/stdc++.h>
using namespace std;
struct HEAP{
    int id,rank,qu;
    bool operator < (const HEAP &o) const {
        if (rank != o.rank) {return rank < o.rank;}
        return qu > o.qu;
    }
};
priority_queue <HEAP> pq;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,r;
    cin >> n >> r;
    for (int i=1;i<=n;i++) {
        int opr;
        cin >> opr;
        if (opr == 1) {
            int id,rank;
            cin >> id >> rank;
            pq.push({id,rank,i}); 
        }
        if (opr == 2) {
            if (pq.empty()) {
                cout << "-1\n";
                continue;
            }
            cout << pq.top().id;
            cout << "\n";
            pq.pop();
            continue;
        }
    }
    return 0;
}