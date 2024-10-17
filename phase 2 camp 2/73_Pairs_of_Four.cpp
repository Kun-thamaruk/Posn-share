#include<bits/stdc++.h>
using namespace std;
char c[1010];
int dp[1010][1010];
int main(){
ios_base::sync_with_stdio(false),cin.tie(0);
int n;
cin >> n;
for(int i=0;i<n;i++)
    cin >> c[i];
for(int m=1;m<n;m++){
    for(int i=0;i+m<n;i++){
        int j=i+m;
        if(c[i]==c[j]){
            dp[i][j]=dp[i+1][j-1]+1;
        }
        else{
            for(int k=i;k<j;k++){
                dp[i][j]=max(dp[i][j],dp[i][k]+dp[k+1][j]);
            }
        }
    }
}
cout << dp[0][n-1];
return 0;
}