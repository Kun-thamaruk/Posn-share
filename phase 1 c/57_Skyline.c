#include <stdio.h>

int mian() {
    int left,right,height,a[300]={0},i,j,n,state;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d %d %d",&left,&height,&right);
        for (j=left;j<right;j++){
            if (a[j]<height) {a[j]=height;}
        }
    }
    state=0;
    for (int i=1;i<=270;i++) {
        if (a[i]!=state) {printf("%d %d",i,a[i]); state=a[i];}
    }
    return 0;
}