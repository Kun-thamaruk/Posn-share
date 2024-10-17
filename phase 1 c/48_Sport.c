#include <stdio.h>

char ans[210];
int k;

void permu(int state,int a,int b){
    int i;
    if (a==k||b==k){
        for (i=0;i<state;i++) printf("%c ",ans[i]);             
        printf("\n");
        return;
    }
    ans[state] = 'W';
    permu(state+1,a+1,b);
    ans[state] = 'L';
    permu(state+1,a,b+1);
}

int main() {
    int a,b;
    scanf("%d %d %d",&k,&a,&b);
    permu(0,a,b);
    return 0;
}