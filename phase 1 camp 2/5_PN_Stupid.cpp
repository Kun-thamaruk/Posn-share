#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    long long s,p;
    cin >> q;
    while (q--) {
        cin >> s >> p;
        long long l=0,h=s/2,ch=1;
        while (l<=h) {
            long long mid = (l+h)/2;
            long long a = s-mid;
            if (mid*a>p || mid*a/a!=mid) {
                h = mid-1;
            }
            else if (mid*a<p) {l = mid+1;}
            else {
                cout << mid << " " << a << "\n";
                ch = 0;
                break;
            }
        }
        if (ch != 0) {
            cout << "No answer\n";
        } 
    }
    return 0;
}