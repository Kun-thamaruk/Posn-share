#include <stdio.h>

char a[50][50];
int main() {
  int r,c,i,j,k;
  scanf("%d %d",&r,&c);
  for (i=0;i<r;i++)
  for (j=0;j<c;j++)
      scanf(" %c",&a[i][j]);
  for (j=0;j<c;j++){
    scanf("%d",&k);
    for (i=0;i<r&&a[i][j]=='.';i++);
    i--;
    for (;i>=0&&k>0;i--,k--)
      a[i][j] = '#';
  }
  for (i=0;i<r;i++){
    for (j=0;j<c;j++) printf("%c",a[i][j]);
    printf("\n");
  }
  return 0;
}
