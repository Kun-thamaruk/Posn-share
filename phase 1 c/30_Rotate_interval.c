#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char a[2000];
int main() {
    int q,j,i,n,k,len;
    scanf("%d",&q);
    while (q--) {
        scanf(" %s %d %d",a,&n,&k);
        len = strlen(a);
        k %= n;
        for (i=0;i<len;i+=n){
            j = n-k;
            do {
                printf("%c",a[i+j%n]);
                j++;
            }while ((j+k)%n != 0);
            printf("\n");
        }
    }
    return 0;
}