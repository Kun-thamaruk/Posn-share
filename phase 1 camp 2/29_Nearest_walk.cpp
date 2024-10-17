#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
struct A{
int i,j,w;
};
queue<A>qu;
char a[N][N];
int dis[N][N];
int di[]={-1,0,0,1},dj[]={0,-1,1,0};
int main(){
cin.tie(0)->sync_with_stdio(0);
int q;
cin >> q;
while(q--){
    int r,c,sti,stj,edi,edj,ch=1;
    cin >> r >> c;
    for(int i=1;i<=r;i++)
    for(int j=1;j<=c;j++){
        dis[i][j]=1e9;
        cin >> a[i][j];
        if(a[i][j]=='A')
            sti=i,stj=j;
        if(a[i][j]=='B')
            edi=i,edj=j;
    }
    dis[sti][stj]=0;
    while(!qu.empty())
        qu.pop();
    qu.push({sti,stj,0});
    while(!qu.empty()){
        A now = qu.front();
        qu.pop();
        if(now.i==edi&&now.j==edj){
            cout << now.w <<"\n";
            ch=0;
            break;
        }
        for(int k=0;k<4;k++){
            int ii = now.i+di[k],jj=now.j+dj[k];
            if(ii<1||ii>r||jj<1||jj>c)
                continue;
            if(a[ii][jj]=='#')
                continue;
            if(dis[ii][jj]>dis[now.i][now.j]+1){
                dis[ii][jj]=dis[now.i][now.j]+1;
                qu.push({ii,jj,now.w+1});
            }
        }
    }
    if(ch)
        cout << "-1" << "\n";
    }
}