#include <bits/stdc++.h>
using namespace std;
long long xi[100000000];
long long ll[1000000];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while (q--) {
        int n,m=1;
        long long k;
        cin >> n >> k;
        cin >> xi[0];
        for (int i=1;i<n;i++) {
            cin >> xi[m];
            if (xi[m-1] != xi[m]) {
                m++;
                ll[m-1] = (xi[m]-xi[m-1])-1/2;
            }
        }
        long long l=0,h=5000;
        while (l<h) {
            long long mid = l+(h-l)/2;
            long long sum=0;
            for (int i=0;i<m-1;i++) {
                if (mid > ll[i]) {
                    sum += (mid-ll[i])*2;
                }
                sum += (m-1)*2;
            }
            cout << sum;
            long long a = ((mid*mid)*m )- (sum*(((mid*mid)-mid/2)));
            if (a > k) {h = mid;}
            else {l = mid+1;}
        }
        cout << l;
    }
    return 0;
}