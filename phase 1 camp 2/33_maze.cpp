#include<bits/stdc++.h>
using namespace std;
struct Node{
int i,j,w;
Node(int a,int b,int c):i(a),j(b),w(c){}
Node(pair<int,int>a,int b):i(a.first),j(a.second),w(b){}
};
const int MxN=220;
int a[MxN][MxN],dist[MxN][MxN][3];
const int di[]={-1,0,0,1};
const int dj[]={0,-1,1,0};
int main(){
cin.tie(nullptr)->ios::sync_with_stdio(false);
int n,m;
cin >> n >> m;
pair<int,int>points[2];
cin >> points[0].first >> points[0].second >> points[1].first >> points[1].second;
for(int i=1;i<=n;i++)
    for(int j=1;j<=m;j++)
    cin >> a[i][j];
memset(dist,-1,sizeof dist);
queue<Node>q;
for(int state=0;state<=1;state++){
    q.emplace(points[state],0);
    dist[points[state].first][points[state].second][state]=0;
    while(!q.empty()){
        Node now = q.front();
        q.pop();
        for(int k=0;k<4;k++){
            int ii=di[k]+now.i;
            int jj=dj[k]+now.j;
            if(ii<1||jj<1||ii>n||jj>m)
                continue;
            if(dist[ii][jj][state]!=-1)
                continue;
            if(a[ii][jj]==0)
                dist[ii][jj][state]=now.w+1;
            else{
                q.emplace(ii,jj,now.w+1);
                dist[ii][jj][state]=now.w+1;
            }
        }
    }
}
int cnt=0,minn=1e9+100;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(a[i][j]==0&&dist[i][j][0]!=-1&&dist[i][j][1]!=-1){
            cnt++;
            minn = min(minn,1+dist[i][j][0]+dist[i][j][1]);
        }
    }
}
cout << cnt << "\n" << minn << "\n";
return 0;
}