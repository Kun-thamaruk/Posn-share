#include<bits/stdc++.h>
using namespace std;
map <int,int> M;
long long W[100010];
int main(){
int n,a,b;
cin >> n;
for(int c=1;c<=n;c++){
    cin >> a >> b;
    M[a]++,M[b+1]--;
}
long long ans=0,work=0,last=0;
for(auto p:M){
    if(work>1){
        ans+=(long long)(p.first-last)*(work-1);
    }
    work+=p.second;
    last=p.first;
}
cout << ans << "\n";
}