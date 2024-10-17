#include <stdio.h>

int main(){
    int a,i,j,b,c=1;
    scanf("%d",&a);
    b = 2*a-1;
    for (i=0;i<(b-1)/2;i++){
        for (j=0;j<c;j++){
            printf("* ");
        }
        for (j=0;j<b-(c*2);j++){
            printf("- ");
        }
        for (j=0;j<c;j++){
            printf("* ");
        }
        c++;
        printf("\n");
    }
    for (i=0;i<b;i++){
        printf("* ");
    }
    printf("\n");
    c = c-1;
    for (i=0;i<(b-1)/2;i++){
        for (j=0;j<c;j++){
            printf("* ");
        }
        for (j=0;j<b-(c*2);j++){
            printf("- ");
        }
        for (j=0;j<c;j++){
            printf("* ");
        }
        c--;
        printf("\n");
    }
    return 0;
}
