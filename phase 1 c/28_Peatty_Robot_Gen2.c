#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char a[110];
int main() {
  scanf(" %s",a+1);
  int i;
  a[0] = 'N';
  for (i=1;i<strlen(a)+1;i++) {
    if (a[i] == 'Z') a[i] = 'N',printf("Z");
    else if (a[i-1] == a[i]) printf("F");
    else {
      if ((a[i-1]=='N'&&a[i]=='E')||(a[i-1]=='E'&&a[i]=='S')||(a[i-1]=='S'&&a[i]=='W')||(a[i-1]=='W'&&a[i]=='N')) printf("RF");
      else if((a[i-1]=='N'&&a[i]=='S')||(a[i-1]=='E'&&a[i]=='W')||(a[i-1]=='S'&&a[i]=='N')||(a[i-1]=='W'&&a[i]=='E')) printf("RRF");
      else if((a[i-1]=='N'&&a[i]=='W')||(a[i-1]=='E'&&a[i]=='N')||(a[i-1]=='S'&&a[i]=='E')||(a[i-1]=='W'&&a[i]=='S')) printf("RRRF");
    }
  }
}
