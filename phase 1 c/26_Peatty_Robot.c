#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char a[110];
int main() {
  int i,x=0,y=0;
  scanf(" %s",a);
  for (i=0;i<strlen(a);i++){
    switch (a[i]) {
      case 'N': y++; break;
      case 'E': x++; break;
      case 'S': y--; break;
      case 'W': x--; break;
      case 'Z': x=0; y=0; break;
    }
  }
  printf("%d %d",x,y);
  return 0;
}
