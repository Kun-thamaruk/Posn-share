#include <stdio.h>

int main(){
    int n,i;
    scanf("%d",&n);
    for (i=1;i<n;i++){
        printf("%d ",i);
    }
    printf("%d\n",i);
    i=n;
    while (i>1){
        printf("%d ",i);
        i--;
    }
    printf("%d\n",i);
    i=1;
    do{
        if(i%2==0){
            printf("%d ",i);
        }
        i++;
    }while(i<=n);
    printf("\n");
    for (i=n;i>=1;i--){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    printf("\n");
    i=1;
    while (i<=n){
        if (i%2==1){
            printf("%d ",i);
        }
        i++;
    }
    printf("\n");
    i=n;
    do{
        if (i%2==1){
            printf("%d ",i);
        }
        i--;
    }while(i>=1);
    printf("\n");
    return 0;
}
