#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ans[20];
int mark[20];
int cnt;
int n,r,k;

void permu(int state){
    int i;
    if (state == r) {
        cnt++;
        if (cnt == k){
            for (i=0;i<r;i++){
                printf("%d ",ans[i]);
            }
            exit(0);
        } return;
    }
    for (i=1;i<=n;i++){
        if (mark[i]) continue;
        mark[i] = 1;
        ans[state] = i;
        permu(state+1);
        mark[i] = 0;
    }
}
int main() {
    scanf("%d %d %d",&n,&r,&k);
    permu(0);
    return 0;
}