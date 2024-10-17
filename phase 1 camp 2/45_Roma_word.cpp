#include<bits/stdc++.h>
using namespace std;
int dp[2021][2021],pth[2021][2021];
int main(){
cin.tie(nullptr)->ios::sync_with_stdio(false);
string a,b;
cin >> a >> b;
int n=a.size(),m=b.size();
a=" "+a,b=" "+b;
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(a[i]==b[j]){
            dp[i][j] = dp[i-1][j-1]+1;
            pth[i][j]=1;
        }
        else if(dp[i-1][j]>=dp[i][j-1]){
            dp[i][j]=dp[i-1][j];
            pth[i][j]=2;
        }
        else{
            dp[i][j]=dp[i][j-1];
            pth[i][j]=3;
        }
    }
}
cout << dp[n][m] << "\n";
int i=n,j=m;
if(dp[i][j]==0){
    cout << "No Roma word";
    return 0;
}
vector<char>answer;
while(i>0&&j>0){
    if(pth[i][j]==1){
        answer.emplace_back(a[i]);
        i--,j--;
    }
    else if(pth[i][j]==2)
        i--;
    else
        j--;
}
reverse(answer.begin(),answer.end());
for(auto x:answer)
    cout << x << "\n";
    return 0;
}