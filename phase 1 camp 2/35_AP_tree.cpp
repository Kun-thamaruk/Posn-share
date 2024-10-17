#include<bits/stdc++.h>
using namespace std;
vector<long long>g[100100];
long long dp[100100],ans,sum;
void dfs(long long u,long long p){
for(auto x:g[u]){
    if(x==p)
        continue;
    dfs(x,u);
    dp[u]+=dp[x];
}
ans=min(ans,abs(sum-2*dp[u]));
}
int main(){
long long n,i,u,v,q;
cin >> q;
while(q--){
    cin >> n;
    for(i=1;i<n;i++){
        cin >> u >> v;
        g[u].push_back(v),g[v].push_back(u);
    }
    ans=1e18,sum=0;
    for(i=1;i<=n;i++)
        cin >> dp[i],sum+=dp[i];
    dfs(1,0);
    cout << ans;
    for(i=1;i<=n;i++)
        g[i].clear();
}
return 0;
}