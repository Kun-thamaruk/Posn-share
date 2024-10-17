#include <stdio.h>

int main() {
    int n,a,i,f,j,b=0,c=-1;
    scanf("%d",&a);
    while (a--){
        b = 0;
        c = -1;
        scanf("%d",&n);
        for (i=0;i<3;i++){
            for (j=0;j<n;j++){
                printf("*");
            }
            printf("-");
        }
        printf("*");
        for (i=0;i<c;i++){
            printf("-");
        }
        if (c>=0){
            printf("*");
        }
        for (i=0;i<n-2-b;i++){
            printf("-");
        }
        printf("*\n");
        b++;
        c++;
        for (i=0;i<(n-3)/2;i++){
            for (j=0;j<2;j++){
                printf("*");
                for (f=0;f<n-2;f++){
                    printf("-");
                }
                printf("*-");
            }
            printf("*");
            for (j=0;j<n;j++){
                printf("-");
            }
            printf("*");
            for (j=0;j<c;j++){
                printf("-");
            }
            if (c>=0){
                printf("*");
            }
            for (j=0;j<n-2-b;j++){
                printf("-");
            }
            printf("*\n");
            b++;
            c++;
        }
        for (i=0;i<n;i++){
            printf("*");
        }
        printf("-");
        printf("*");
        for (f=0;f<n-2;f++){
            printf("-");
        }
        printf("*-");
        for (i=0;i<n;i++){
            printf("*");
        }
        printf("-*");
        for (j=0;j<c;j++){
            printf("-");
        }
        if (c>=0){
            printf("*");
        }
        for (j=0;j<n-2-b;j++){
            printf("-");
        }
        printf("*\n");
        b++;
        c++;
        for (i=0;i<(n-3)/2;i++){
            printf("*");
            for (j=0;j<n;j++){
                printf("-");
            }
            printf("*");
            for (j=0;j<n-2;j++){
                printf("-");
            }
            printf("*");
            for (j=0;j<n;j++){
                printf("-");
            }
            printf("*-");
            printf("*");
            for (j=0;j<c;j++){
                printf("-");
            }
            if (c>=0){
                printf("*");
            }
            for (j=0;j<n-2-b;j++){
                printf("-");
            }
            printf("*\n");
            b++;
            c++;
        }
        printf("*");
        for (i=0;i<n;i++){
            printf("-");
        }
        for (i=0;i<2;i++){
            for (j=0;j<n;j++){
                printf("*");
            }
            printf("-");
        }
        printf("*");
        for (i=0;i<n-2;i++){
            printf("-");
        }
        printf("*\n");
    }
    return 0;
}
