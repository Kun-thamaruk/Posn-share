#include <bits/stdc++.h>
using namespace std;

vector <int> ans;

int main() {
    cin.tie(0) -> ios::sync_with_stdio(0);
    int x;
    cin >> x;
    if (x==0) {cout << "10";return 0;}
    if (x<0) {cout << "-1";return 0;}
    if (x==1) {cout << "1";return 0;}
    int ch=0;
    for (int i=9;i>=2;i--) {
        if (x%i==0) {
            ch=1;
            while (x%i==0) {
                ans.push_back(i);
                x/=i;
            }
        }
    }
    if (x>=10) {ch=0;}
    if (!ch) {cout << "-1";return 0;}
    for (int i=ans.size()-1;i>=0;i--) {cout << ans[i];}
    return 0;
}