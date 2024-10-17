/*
task : propaganda
*/
#include <stdio.h>
#include <math.h>

int main() {
    int i,num,r;
    scanf("%d",&num);
    r=(int)sqrt(num);
    for (i=2;i<=r;i++){
        if (!(num%i)){
            printf("No\n");
            return 0;
        }
    }
    printf((num>1)?"Yes\n":"No\n");
    return 0;
}