#include <stdio.h>
#include <string.h>

char a[30010][1010];
int main() {
    int l,n,i,j,count=0,result=0,b=0;
    scanf("%d%d",&l,&n);
    //l = strlen n = word
    scanf("%s",a[0]);
    for (i=1;i<n;i++){
        scanf("%s",a[i]);
        for (j=0;j<l;j++){
            if (a[i-1][j]!=a[i][j]) count++;
        }
        if (count > 2&&b==0) result=i-1,b++;
        count=0;
    }
    if (result==0&&b==0) result=n-1;
    printf("%s",a[result]);
    return 0;
}
/*TEST CASE
4
12
HEAD
HEAP
LEAP
TEAR
REAR
BAER
BAET
BEEP
JEEP
JOIP
JEIP
AEIO
*/