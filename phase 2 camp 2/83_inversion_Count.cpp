#include <bits/stdc++.h>
using namespace std;
long long a[100100],b[100100],ans=0,n;
void mergs(long long l,long long r) {
    if (l>=r) return;
    long long mid = (l+r)/2;
    mergs(l,mid);
    mergs(mid+1,r);
    long long i=l,j=mid+1,k=l;
    while (i<=mid && j<=r) {
        if (a[i]<=a[j]) {b[k++] = a[i++];}
        else {
            b[k++] = a[j++];
            ans+=mid-i+1;
        }
    }
    while (i<=mid) {b[k++] = a[i++];}
    while (j<=r) {b[k++] = a[j++];}
    for (i=l;i<=r;i++) {a[i] = b[i];} 
} 
int main() {
    cin >> n;
    for (long long i=0;i<n;i++) {cin >> a[i];}
    mergs(0,n-1);
    cout << ans << "\n";
    return 0; 
}