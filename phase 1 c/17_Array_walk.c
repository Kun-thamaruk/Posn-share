#include <stdio.h>

int main() {
  int a,b,i,j;
  scanf("%d %d",&a,&b);
  int num[a][b];
  for (i=0;i<a;i++){
    for (j=0;j<b;j++){
      scanf("%d",&num[i][j]);
    }
  }
  for (i=0;i<a;i++){
    for (j=0;j<b;j++){
      printf("%d ",num[i][j]);
    }
  }
  printf("\n");
  for (i=a;i>0;i--){
    for (j=b;j>0;j--){
      printf("%d ",num[i-1][j-1]);
    }
  }
  printf("\n");
  for (i=0;i<b;i++){
    for (j=0;j<a;j++){
      printf("%d ",num[j][i]);
    }
  }
  printf("\n");
  for (i=b;i>0;i--){
    for (j=a;j>0;j--){
      printf("%d ",num[j-1][i-1]);
    }
  }
  return 0;
}
