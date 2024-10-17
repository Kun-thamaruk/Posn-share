#include <bits/stdc++.h>
using namespace std;
struct HEEP {
    double a;
    bool operator < (const HEEP&o) const {
        return a > o.a;
    }
};
double qu[400010];
priority_queue <HEEP> qq;
int main() {
    int n;
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> qu[i];
        sort(qu+1,qu+i+1);
        if (i%2==0) {
            printf("%.1f",(qu[i/2]+qu[i/2+1])/2);
        } 
        else {
            printf("%.1f",qu[i/2+1]);
        }
        cout << "\n";
    }
    return 0;
}