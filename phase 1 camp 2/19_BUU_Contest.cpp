#include <bits/stdc++.h>
using namespace std;
struct HEEP {
    int a;
    bool operator < (const HEEP &o) const{
        return a < o.a;
    }
};
priority_queue <HEEP> qu[110];
//priority_queue <HEEP> qq;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int d,k;
    cin >> d >> k;
    long long sum =0;
    for (int i=0;i<d;i++) {
        int n,b;
        cin >> n >> b;
        while (n--) {
            int a;
            cin >> a; 
            qu[i].push({a});
        }
        while (b--) {
            sum += qu[i].top().a; 
            qu[i].pop();
        }
        while (1) {
            if (qu[i].empty()) {break;}
            qu[i+1].push({qu[i].top().a+k});
            qu[i].pop();
        }
        /*while (1) {
            if (qq.empty()) {break;}
            qu.push({qq.top().a});  
            qq.pop(); 
        }*/
    }
    cout << sum;
    return 0;
}