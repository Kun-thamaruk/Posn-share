#include <stdio.h>


int a[20][10],b[800000][5];
int main() {
  int n,i,j,k,m,o,p,count=0;
  scanf("%d",&n);
  for (i=0;i<n;i++){
    for (j=0;j<5;j++){
      scanf("%d",&a[i][j]);
    }
  }
  for (i=0;i<n;i++){
    for (j=0;j<n;j++) {//4
      if(a[i][0]!=a[j][1]) continue;
      for (k=0;k<n;k++) {//3
        if(a[j][1]!=a[k][2]) continue;
        for (m=0;m<n;m++){//2
          if(a[k][2]!=a[m][3]) continue;
          for (o=0;o<n;o++){//1
            if (a[m][3]!=a[o][4]) continue;
            b[count][0] = i;
            b[count][1] = j;
            b[count][2] = k;
            b[count][3] = m;
            b[count][4] = o;
            count++;
          }
        }
      }
    }
  }
  printf("%d\n",count);
  for (i=0;i<count;i++){
    for (j=0;j<5;j++){
      printf("%d ",b[i][j]+1);
    }
    printf("\n");
  }
  return 0;
}
/*
4
1 3 1 3 1
3 1 3 1 2
2 2 2 2 1
3 4 4 4 3
*/
