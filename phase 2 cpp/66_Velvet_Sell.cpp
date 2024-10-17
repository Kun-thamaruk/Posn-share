#include <bits/stdc++.h>
using namespace std;

const int MaxN = 1e5 + 10;

int a[MaxN];

int main() {
    int n,q;
    scanf("%d %d",&n,&q);
    for (int i=1;i<=n;i++) {scanf("%d",&a[i]);}
    sort(a+1,(a+1)+n);
    while (q--) {
        int val;
        scanf("%d",&val);
        printf("%d\n",lower_bound(a+1,(a+1)+n,val)-(a+1));
    }
    return 0;
}