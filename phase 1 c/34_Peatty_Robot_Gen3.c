/*
    TASK: Pratty Robot Gen3
    AUTHOR: Thamarak krutkerd
    SCHOOL: RYW
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char a[110];
int main() {
    int N=0,E=0,S=0,W=0,i,X1,Y1,X2,Y2,count,k;
    scanf(" %s %d",a,&k);
    for (i=0;i<strlen(a);i++){
        if (a[i]=='N') N++;
        else if(a[i]=='E') E++;
        else if(a[i]=='S') S++;
        else if(a[i]=='W') W++; 
    }
    if (N>S) Y1=N,Y2=S;
    else if(S>N) Y1=S,Y2=N;
    if (E>W) X1=E,X2=W;
    else if (W>E) X1=W,X2=E;
    count = 2*((Y1+X1)-abs((X2+Y2)-k));
    printf("%d",count);
    return 0;
}