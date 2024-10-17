#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,st=1,ansst=1,en,num,sum=0,ma=-1e9;
    cin >> n;
    for (int i=1;i<=n;i++) {
        cin >> num;
        sum+=num;
        if (ma<sum) {ma=sum,en=i,ansst=st;}
        if (sum<0) {st=i+1,sum=0;}
    }
    cout << ansst << en << ma;
    return 0;
}