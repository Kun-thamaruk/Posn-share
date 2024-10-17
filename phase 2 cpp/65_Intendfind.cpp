#include <bits/stdc++.h>
using namespace std;

const int MaxN = 1e5 + 10 ;

int a[MaxN];

int main() {
    int n,q;
    scanf("%d %d",&n,&q);
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    while (q--) {
        int val;
        scanf("%d",&val);
        printf("%d\n",upper_bound(a,a+n,val) - a);
    }
    return 0;
}