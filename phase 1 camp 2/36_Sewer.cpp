#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MxN = 110;
char x;
vector<pair<int,int>> adj[MxN][MxN];
int dist[MxN][MxN];
int main(){
cin.tie(nullptr)->ios::sync_with_stdio(false);
int n,m;
cin >> n >> m;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        cin >> x;
        if(x=='B'||x=='R'){
            adj[i][j].emplace_back(i,j+1);
            adj[i][j+1].emplace_back(i,j);
        }
        if(x=='B'||x=='D'){
            adj[i][j].emplace_back(i+1,j);
            adj[i+1][j].emplace_back(i,j);
        }
    }
}
memset(dist,-1,sizeof dist);
dist[1][1]=1;
queue<pair<int,int>>q;
q.emplace(1,1);
while(!q.empty()){
    pair<int,int>now=q.front();
    q.pop();
    for(auto x:adj[now.first][now.second]){
        int nxt_dist=dist[now.first][now.second]+1;
        if(dist[x.first][x.second]==-1){
            q.emplace(x);
            dist[x.first][x.second]=nxt_dist;
        }
        else{
            if(dist[x.first][x.second]==nxt_dist){
                cout << nxt_dist << "\n" << x.first << " " << x.second << "\n";
                return 0;
            }
        }
    }
}
return 0;
}