#include<stdio.h>

int main() {
    int i,j,n,q;
    scanf("%d",&q);
    while (q--) {
        scanf("%d",&n);
        for (i=0;i<n*2+1;i++){
            for (j=0;j<n*2+1;j++){
                if (i==0||j==0||i==2*n||j==2*n){
                    printf("*");
                }
                else if (i%2==0 && j<=i){
                    printf("*");
                }
                else if (j%2==0 && i<=j){
                    printf("*");
                }
                else {
                    printf("-");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
