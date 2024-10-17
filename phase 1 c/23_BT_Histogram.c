#include <stdio.h>
#include <stdlib.h>

int a[10010];
int main() {
  int n,i,j,num,x=0,y=0;
  scanf("%d",&n);
  for (i=0;i<n;i++){
    scanf("%d",&num);
    a[num]++;
    if (a[num]>y) y=a[num];
    if (num>x) x=num;
  }
  for (i=y;i>=1;i--){
    for(j=1;j<=x;j++){
      if (a[j]>=i)  printf("*");
      else printf(".");
    }
    printf("\n");
  }
  return 0;
}
