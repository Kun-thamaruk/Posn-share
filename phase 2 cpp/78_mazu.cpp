#include <bits/stdc++.h>
using namespace std;

stack<char> st;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    char num;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> num;
        if (!st.empty()) {
            if(st.top()==num) {st.pop();}
            else {st.push(num);}
        }
        else {st.push(num);}
    }
    if (st.size()==0) {cout << "0\nempty\n";}
    else {
         cout << st.size() << "\n";
        while (!st.empty()) {
            cout << st.top();
            st.pop();
        }
    } 
    return 0;
}