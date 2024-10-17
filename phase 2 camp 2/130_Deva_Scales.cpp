#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,i=0,num=0,ans=0,val=1;
cin >> n;
while(n!=0){
    m=n%3;
    n/=3;
    if(m==1)
        num++,ans+=val;
    else if(m==2)
        num++,n++;
    val*=3;
}
cout << num << ans;
return 0;
}
