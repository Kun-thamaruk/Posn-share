#include <stdio.h>
#include <string.h>

char a[1110][1110];
int h,v,cnt;

void play(int i,int j){
    a[i][j] = ".";
    cnt++;
    if (i-1>=0&&a[i-1][j]=='*')     play(i-1,j);
    if (i+1<h&&a[i+1][j]=='*')      play(i+1,j);
    if (j-1>=0&&a[i][j-1]=='*')     play(i,j-1);
    if (j+1<v&&a[i][j+1]=='*')      play(i,j+1);
}

int main() {
    int i,j,mx=0;
    scanf("%d %d",&v,&h);
    for (i=0;i<h;i++){
        for (j=0;j<v;j++){
            scanf(" %c",&a[i][j]);
        }
    }
    for (i=0;i<h;i++){
        for (j=0;j<v;j++){
            if (a[i][j] == '*'){
                cnt = 0;
                play(i,j);
                if (cnt > mx) mx = cnt;
            }
        }
    }
    printf("%d",mx);
    return 0;
}
/*
10 5
..*.....**
.**..*****
.*...*....
..****.***
..****.***
*/