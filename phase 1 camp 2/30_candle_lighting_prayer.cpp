#include<bits/stdc++.h>
using namespace std;
char a[2020][2020];
queue<pair<int,int>>q;
int di[]={-1,-1,-1,0,0,1,1,1},dj[]={-1,0,1,-1,1,-1,0,1};
int main(){
cin.tie(0)->sync_with_stdio(0);
int m,n,ans=0;
cin >> m >> n;
for(int i=1;i<=m;i++)
    for(int j=1;j<=n;j++)
    cin >> a[i][j];
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        if(a[i][j]=='1'){
            ans++;
            q.emplace(i,j);
            while(!q.empty()){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if(a[x][y]=='0')
                    continue;
                a[x][y]='0';
                for(int k=0;k<8;k++){
                    int ii=x+di[k],jj=y+dj[k];
                    if(ii<1||ii>m||jj<1||jj>n)
                        continue;
                    if(a[ii][jj]=='1')
                        q.emplace(ii,jj);
                }
            }
        }
    }
}
cout << ans;
}