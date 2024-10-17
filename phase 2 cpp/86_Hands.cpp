#include <bits/stdc++.h>
using namespace std;

int a[2010];

int main() {
    int n,k,sum=0;
    scanf("%d %d",&n,&k);
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    sort(a,a+n,greater<int>());
    for (int i=0;i<n;i+=k) {
        sum+= a[i];
    }
    printf("%d",sum);
    return 0;
}