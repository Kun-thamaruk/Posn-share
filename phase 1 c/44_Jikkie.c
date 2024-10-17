#include <stdio.h>

int A,B,C;
int mark[30][30][30],ans[30];//ff

void play(int a,int b,int c){
    if (a<0||b<0||c<0||a>A||b>B||c>C) {return;}
    if (mark[a][b][c]) {return;}
    mark[a][b][c] = 1;
    if (a==0) {ans[c]=1;}
    //a --> b
    play(0,a+b,c);
    play(a-B+b,B,c);
    //a --> c
    play(0,b,a+c);
    play(a-C+c,b,C);
    //b --> a
    play(a+b,0,c);
    play(A,b-A+a,c);
    //b --> c
    play(a,0,b+c);
    play(a,b-C+c,C);
    //c --> a
    play(a+c,b,0);
    play(A,b,c-A+a);
    //c --> b
    play(a,b+c,0);
    play(a,B,c-B+b);
}

int main() {
    scanf("%d %d %d",&A,&B,&C);
    play(0,0,C);
    int i;
    for (i=0;i<=20;i++){
        if (ans[i]) {printf("%d",i);}
    }
    return 0;
}