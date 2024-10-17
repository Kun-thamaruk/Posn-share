#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char a[5][10];
int main() {
  int i,j,sum,num;
  for (i=0;i<5;i++){
    scanf(" %s",a[i]);
    /*for (j=0;j<strlen(a);j++){
      sum += pow(a[j]-'0',j+1);
    }
    //9sscanf(a,"%d",&num);
    num = atoi(a);
    if (num == sum) printf("Y");
    else printf("N");*/
  }
  for (i=0;i<5;i++){
    sum =0;
    for (j=0;j<strlen(a[i]);j++){
      sum += pow(a[i][j]-'0',j+1);
    }
    //9sscanf(a,"%d",&num);
    num = atoi(a[i]);
    if (num == sum) printf("Y");
    else printf("N");
  }
  return 0;
}
