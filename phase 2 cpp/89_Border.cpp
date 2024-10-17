#include <bits/stdc++.h>
using namespace std;

int a[300][300],b[11000];

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    for (int i=0;i<2*n+1;i++) {
        for (int j=0;j<n+1;j++){
            if (i%2==0&&j==n) continue;
            scanf("%d",&a[i][j]);
        }
    }
    int cnt=0;
    for (int i=0;i<2*n;i+=2) {
        for (int j=0;j<n;j++) {
            b[cnt++] = 3*(a[i][j]-a[i+2][j]) + 5*(a[i+1][j]-a[i+1][j+1]);
            // a[i][j] = Up
            // a[i+2][j] = Down
            //a[i+1][j] = Left
            //a[i+1][j+1] = Right
        }
    }
    int sum=0;
    sort(b,b+cnt);
    for (int i=0;i<k;i++) sum+=b[i];
    printf("%d\n",sum);
    return 0;
}