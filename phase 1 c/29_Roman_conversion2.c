#include <stdio.h>
#include <string.h>

char s[30];
int main() {
  int q;
  scanf("%d",&q);
  while (q--) {
    scanf(" %s",&s);
    int i,ans=0,len = strlen(s);
    for (i=0;i<len; ) {
      if (s[i] == 'M'){
        ans += 1000;
        i++;
      }
      else if (i + 1 < strlen(s) && s[i] == 'C' && s[i + 1] == 'M'){
        ans += 900;
        i+=2;
      }
      else if (s[i] == 'D'){
        ans += 500;
        i++;
      }
      else if (i +1 < strlen(s) && s[i] == 'C' && s[i+1] == 'D'){
        ans += 400;
        i+=2;
      }
      else if (s[i] == 'C'){
        ans += 100;
        i++;
      }
      else if (i+1 < strlen(s) && s[i] == 'X' && s[i+1] == 'C'){
        ans += 90;
        i+=2;
      }
      else if (s[i] == 'L'){
        ans += 50;
        i++;
      }
      else if (i+1 < strlen(s) && s[i] == 'X' && s[i+1] == 'L'){
        ans += 40;
        i+=2;
      }
      else if (s[i] == 'X'){
        ans += 10;
        i++;
      }
      else if (i+1 < strlen(s) && s[i] == 'I' && s[i+1] == 'X'){
        ans += 9;
        i+=2;
      }
      else if (s[i] == 'V'){
        ans += 5;
        i++;
      }
      else if (i+1 < strlen(s) && s[i] == 'I' && s[i+1] == 'V'){
        ans += 4;
        i+=2;
      }
      else if (s[i] == 'I'){
        ans += 1;
        i++;
      }
    }
    printf("%d",ans);
  }
  return 0;
}

/*
3
DCCXXVI
XLIX
MMCDLXXXIC
*/
