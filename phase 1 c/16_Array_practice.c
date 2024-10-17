#include <stdio.h>

int main() {
  int a,i,c,count=0;
  scanf("%d",&a);
  int b[a];
  for (i=0;i<a;i++){
    scanf("%d",&b[i]);
  }
  scanf("%d",&c);
  for (i=a;i>0;i--){
    printf("%d ",b[i-1]);
    if (c == b[i-1]){
      count++;
    }
  }
  printf("\n%d",count);
  return 0;
}
