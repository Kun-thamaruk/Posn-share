#include <bits/stdc++.h>
using namespace std;
stack<int> st;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q,d,x;
    cin >> q;
    while (q--) {
        cin >> d;
        if (d==1) {cin >> x;st.push(x);}
        else {
            if (st.empty()) {cout << "-1\n";}
            else {
                cout << st.top() << "\n";
                st.pop();
            }
        } 
    }
    return 0;
}