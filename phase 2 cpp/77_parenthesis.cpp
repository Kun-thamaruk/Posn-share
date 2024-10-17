#include <bits/stdc++.h>
using namespace std;
char a[200];
stack <char> st;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q,ch;
    cin >> q;
    while (q--) {
        cin >> a;
        int len = strlen(a);
        for (int i=0;i<len;i++) {
            if (a[i]=='('||a[i]=='[') {st.push(a[i]);}
            else if (a[i]==']'){
                if (!st.empty()&&st.top()=='[') {st.pop();}
                else {ch=0;break;}
            }
            else if (a[i]==')') {
                if (!st.empty()&&st.top()=='(') {st.pop();}
                else {ch=0;break;}
            }
        }
        if (st.empty()&&ch) {cout << "Yes\n";}
        else {cout << "No\n";}
        while (!st.empty()) st.pop();
        ch =1;
    }
    
    return 0;
}