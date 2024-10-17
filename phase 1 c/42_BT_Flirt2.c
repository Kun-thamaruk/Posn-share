#include <stdio.h>

int r,c,A,si,sj,ei,ej,ch,count=1;
int map[1000][1000],dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
void play(int i,int j){
    int k,I1,J1;
    if (i==ei&&j==ej){ch=1;return;}
    for (k=0;k<4;k++){
        I1=i+dx[(A+k)%4];
        J1=j+dy[(A+k)%4]; 
        if (I1<1||J1<1||I1>r||J1>c) continue;
        if (map[I1][J1]!=0) continue;
        if (ch!=0) continue;
        count++;
        map[I1][J1] = count;
        play(I1,J1);
    }
}

int main() {
    int q,j,i;
    scanf("%d",&q);
    while (q--){//=ques
        ch=0;
        scanf("%d %d %d %d %d %d %d",&r,&c,&A,&si,&sj,&ei,&ej);
        count=1;
        map[si][sj] = 1;
        play(si,sj);
        for (i=1;i<=r;i++){
            for (j=1;j<=c;j++){
                printf("%d ",map[i][j]);
                map[i][j]=0;
            }
            printf("\n");
        }
    }//=ques
    return 0;
}