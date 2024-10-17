#include <bits/stdc++.h>
using namespace std;

queue<int> qu;

int main() {
    cin.tie(0)->ios::sync_with_stdio(0);
    int q;
    cin >> q;
    while (q--) {
        string s;
        int k;
        int siz=0,cnt=0,mx=-1;
        cin >> s >> k;
        int len = s.length();
        for (int i=0;i<len;i++) {
            if (s[i]=='A') {qu.push(1);siz++;}
            else if (s[i]=='B'&&cnt<k) {qu.push(0);siz++;cnt++;}
            else if (s[i]=='B'&&cnt>=k) {
                while (qu.front() != 0) {
                    qu.pop();
                    siz--;
                }
                qu.pop();
                qu.push(0);
            }
            mx = max(mx,siz);
        } 
        cout << mx << '\n';
        while (!qu.empty()) {qu.pop();}
    }
    return 0;
}