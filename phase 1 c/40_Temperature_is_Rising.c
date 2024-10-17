#include <stdio.h>

int tempc[50][50],mx=-10,M;
int di[4]={1,0,-1,0},dj[4]={0,1,0,-1};
void play(int i,int j,int temp){
    if (mx<tempc[i][j]) mx=tempc[i][j];
    int k,I,J;
    for (k=0;k<4;k++){
        I=i+di[k],J=j+dj[k];
        if (I<0||J<0||I>=M||J>=M) continue;
        if (tempc[I][J] == 100) continue;
        if (tempc[I][J]<=temp) continue;
        play(I,J,tempc[I][J]);
    }
}
int main() {
    int X,Y,i,j;
    scanf("%d",&M);
    scanf("%d %d",&X,&Y);
    for (i=0;i<M;i++) {
        for (j=0;j<M;j++) {
            scanf("%d",&tempc[i][j]);
        }
    }
    Y--,X--;
    play(Y,X,tempc[Y][X]);
    printf("%d",mx);
    return 0;
}